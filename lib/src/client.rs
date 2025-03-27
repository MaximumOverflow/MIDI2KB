use enigo::{Direction, Enigo, InputResult, Keyboard};
use midir::MidiInputPort;

use crate::{mappings::Mapping, midi::GenericMidiEvent};

#[non_exhaustive]
pub struct MidiPort {
	pub id: usize,
	pub stable_id: String,
	pub name: Option<String>,
	handle: MidiInputPort,
}

pub struct Client {
	_handle: midir::MidiInputConnection<()>,
}

pub struct ClientConnector(midir::MidiInput);

impl ClientConnector {
	pub fn new(client_name: &str) -> Result<Self, ()> {
		Ok(Self(midir::MidiInput::new(client_name).map_err(|_| ())?))
	}

	pub fn ports(&self) -> Vec<MidiPort> {
		self.0
			.ports()
			.into_iter()
			.enumerate()
			.map(|(id, handle)| MidiPort {
				id,
				stable_id: handle.id(),
				name: self.0.port_name(&handle).ok(),
				handle,
			})
			.collect()
	}

	pub fn connect(
		self,
		port: &MidiPort,
		port_name: &str,
		mappings: Vec<Mapping>,
	) -> Result<Client, &'static str> {
		let Ok(mut enigo) = Enigo::new(&enigo::Settings::default()) else {
			return Err("Could not create input mapper.");
		};

		let result = self.0.connect(
			&port.handle,
			port_name,
			move |_, message, _| {
				let event = GenericMidiEvent::from(message);
				eprintln!("{event:?}");
				for mapping in &mappings {
					if mapping.matches(&event) {
						eprintln!("Triggered mapping {mapping:?}");
						let result = match mapping.action {
							crate::mappings::Action::Ignore => InputResult::Ok(()),
							crate::mappings::Action::TapKey(key) => {
								enigo.key(key, Direction::Click)
							}
							crate::mappings::Action::PressKey(key) => {
								enigo.key(key, Direction::Press)
							}
							crate::mappings::Action::ReleaseKey(key) => {
								enigo.key(key, Direction::Release)
							}
						};
						if let Err(err) = result {
							eprintln!("Input mapper error: {err}");
						}
					}
				}
			},
			(),
		);
		match result {
			Ok(_handle) => Ok(Client { _handle }),
			Err(err) => match err.kind() {
				midir::ConnectErrorKind::InvalidPort => Err("Invalid port."),
				midir::ConnectErrorKind::Other(other) => Err(other),
			},
		}
	}
}
