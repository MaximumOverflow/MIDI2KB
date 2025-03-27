use midir::MidiInputPort;

use crate::midi::{GenericMidiEvent, MidiEvent};

#[non_exhaustive]
pub struct MidiPort {
	pub id: usize,
	pub stable_id: String,
	pub name: Option<String>,
	handle: MidiInputPort,
}

pub struct Client<T: Send + 'static>(#[allow(unused)] midir::MidiInputConnection<T>);

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

	pub fn connect<T, F>(
		self,
		port: &MidiPort,
		port_name: &str,
		data: T,
		callback: F,
	) -> Result<Client<T>, &'static str>
	where
		T: Send + 'static,
		F: FnMut(u64, MidiEvent, &mut T) + Send + 'static,
	{
		let mut callback = callback;
		let result = self.0.connect(
			&port.handle,
			port_name,
			move |timestamp, message, data| {
				callback(
					timestamp,
					MidiEvent::from(GenericMidiEvent::from(message)),
					data,
				)
			},
			data,
		);
		match result {
			Ok(handle) => Ok(Client(handle)),
			Err(err) => match err.kind() {
				midir::ConnectErrorKind::InvalidPort => Err("Invalid port."),
				midir::ConnectErrorKind::Other(other) => Err(other),
			},
		}
	}
}
