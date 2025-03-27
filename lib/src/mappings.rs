use crate::midi::{GenericMidiEvent, MidiEventKind};
pub use enigo::Key;
use serde::{Deserialize, Serialize};
use tinyvec::ArrayVec;

#[repr(u8)]
#[derive(Debug, Default, Clone, Copy, PartialEq, Eq, Hash, Serialize, Deserialize)]
pub enum Condition {
	#[default]
	Ignored,
	Eq,
	Ne,
	Gt,
	Ge,
	Lt,
	Le,
}

#[derive(Debug, Default, Clone, Copy, PartialEq, Eq, Hash, Serialize, Deserialize)]
pub enum Action {
	#[default]
	Ignore,
	TapKey(Key),
	PressKey(Key),
	ReleaseKey(Key),
}

#[derive(Debug, Default, Copy, Clone, PartialEq, Eq, Hash, Serialize, Deserialize)]
pub struct Mapping {
	pub kind: MidiEventKind,
	pub channel: u8,
	pub conditions: ArrayVec<[(Condition, u8); 8]>,
	pub action: Action,
}

impl Mapping {
	pub fn matches(&self, event: &GenericMidiEvent) -> bool {
		if (self.kind, self.channel) != (event.kind, event.channel) {
			return false;
		}
		self.conditions
			.iter()
			.cloned()
			.zip(event.data.iter().cloned())
			.all(|((cond, cmp), value)| match cond {
				Condition::Ignored => true,
				Condition::Eq => value == cmp,
				Condition::Ne => value != cmp,
				Condition::Gt => value > cmp,
				Condition::Ge => value >= cmp,
				Condition::Lt => value < cmp,
				Condition::Le => value <= cmp,
			})
	}
}
