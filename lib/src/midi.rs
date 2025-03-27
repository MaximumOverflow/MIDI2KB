use tinyvec::ArrayVec;

#[repr(u8)]
#[derive(Debug, Default, Clone, Copy, PartialEq, Eq, Hash)]
pub enum MidiEventKind {
	#[default]
	Unknown,
	NoteOff,
	NoteOn,
	PolyphonicKeyPressure,
	ControlChange,
	ProgramChange,
	ChannelPressure,
	PitchBendChange,
}

impl MidiEventKind {
	#[inline]
	pub fn has_channel(self) -> bool {
		match self {
			MidiEventKind::Unknown => false,
			| MidiEventKind::NoteOff
			| MidiEventKind::NoteOn
			| MidiEventKind::PolyphonicKeyPressure
			| MidiEventKind::ControlChange
			| MidiEventKind::ProgramChange
			| MidiEventKind::ChannelPressure
			| MidiEventKind::PitchBendChange => true,
		}
	}
}

impl From<u8> for MidiEventKind {
	#[inline]
	fn from(value: u8) -> Self {
		match (value & 0xF0) >> 4 {
			0b1000 => Self::NoteOff,
			0b1001 => Self::NoteOn,
			0b1010 => Self::PolyphonicKeyPressure,
			0b1011 => Self::ControlChange,
			0b1100 => Self::ProgramChange,
			0b1101 => Self::ChannelPressure,
			0b1110 => Self::PitchBendChange,
			_ => Self::Unknown,
		}
	}
}

#[non_exhaustive]
#[derive(Debug, Default, Clone, Copy, PartialEq, Eq, Hash)]
pub struct GenericMidiEvent {
	pub kind: MidiEventKind,
	pub channel: u8,
	pub data: ArrayVec<[u8; 8]>,
}

impl From<&[u8]> for GenericMidiEvent {
	fn from(value: &[u8]) -> Self {
		let [status, data_ref @ ..] = value else {
			return Self::default();
		};
		let kind = MidiEventKind::from(*status);
		let channel = (*status & 0x0F) * kind.has_channel() as u8;
		let mut data = ArrayVec::new();
		data.extend_from_slice(match data_ref.len() > 8 {
			true => &data_ref[..8],
			false => data_ref,
		});
		Self {
			kind,
			channel,
			data,
		}
	}
}

#[repr(u8)]
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum MidiEvent {
	NoteOff { channel: u8, key: u8, velocity: u8 },
	NoteOn { channel: u8, key: u8, velocity: u8 },
	Unknown(GenericMidiEvent),
}

impl From<GenericMidiEvent> for MidiEvent {
	fn from(event: GenericMidiEvent) -> Self {
		match event.kind {
			MidiEventKind::NoteOff => Self::NoteOff {
				channel: event.channel,
				key: event.data.get(0).cloned().unwrap_or_default(),
				velocity: event.data.get(1).cloned().unwrap_or_default(),
			},
			MidiEventKind::NoteOn => Self::NoteOn {
				channel: event.channel,
				key: event.data.get(0).cloned().unwrap_or_default(),
				velocity: event.data.get(1).cloned().unwrap_or_default(),
			},
			_ => Self::Unknown(event),
		}
	}
}

impl Default for MidiEvent {
	fn default() -> Self {
		Self::Unknown(GenericMidiEvent::default())
	}
}
