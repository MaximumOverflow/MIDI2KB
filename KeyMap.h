#ifndef MIDI2KB_KEYMAP_H
#define MIDI2KB_KEYMAP_H

#include <string>
#include "KeyEvent.h"

enum class KeyMapCondition {
    ThresholdExact, ThresholdUp, ThresholdDown, ThresholdAny,

    Any = 0x70,
    Press = 0x90,
    Release = 0x80,
    Pressure = 0xA0,
    PitchBend = 0xE0,
    ProgramChange = 0xC0,
    ChannelPressure = 0xD0,
    ControllerChange = 0xB0,
};

enum class KeyMapAction {
	Hold, Press, Toggle, Release
};

struct KeyMap {
    unsigned char key;
    std::string toKey;
    KeyMapCondition condition, threshold;
    unsigned short trigger;
	KeyMapAction action;
	bool toggle = false;

	KeyMap() : key{0}, toKey{""}, condition{0}, threshold{0}, trigger{0} {}


    bool CheckEvent(KeyEvent& event)
    {
        if(condition != KeyMapCondition::Any)
            if(condition != (KeyMapCondition ) event.type) return false;

        switch(event.type)
        {
            case KeyEventType::PitchBend:
            case KeyEventType::ProgramChange:
            case KeyEventType::ChannelPressure:
            case KeyEventType::ControllerChange:
                return false;

            default:
            {
                if(key != event.byte1) return false;

				if(threshold == KeyMapCondition::Any)
                	return true;

                if(threshold == KeyMapCondition::ThresholdExact)
                    return trigger == event.byte2;

                if(threshold == KeyMapCondition::ThresholdUp)
                    return event.byte2 >= trigger;

                if(threshold == KeyMapCondition::ThresholdDown)
                    return event.byte2 <= trigger;

            }
        }

		return false;
    }

    std::string ToString()
    {
        std::stringstream text;
        std::string condition_, threshold_;
        unsigned short key_ = key;

        switch (condition)
        {
            case KeyMapCondition::Any: condition_ = "key emits event"; break;
            case KeyMapCondition::Press: condition_ = "key is pressed"; break;
            case KeyMapCondition::Release: condition_ = "key is released"; break;
            case KeyMapCondition::Pressure: condition_ = "key pressure changes"; break;

            default: condition_ = "INVALID"; break;
        }

        switch (threshold)
        {
            case KeyMapCondition::ThresholdExact: threshold_ = "="; break;
            case KeyMapCondition::ThresholdUp: threshold_ = ">="; break;
            case KeyMapCondition::ThresholdDown: threshold_ = "<="; break;

            default: threshold_ = "INVALID"; break;
        }

        text << key_ << "->" << toKey << " if " << condition_ << " and value " << threshold_ << ' ' << trigger;

        return text.str();
    }
};

#endif //MIDI2KB_KEYMAP_H
