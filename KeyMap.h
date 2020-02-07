#ifndef MIDI2KB_KEYMAP_H
#define MIDI2KB_KEYMAP_H

#include <string>
#include "KeyEvent.h"

enum class KeyMapCondition {
    Exact, ThresholdUp, ThresholdDown,

    Any = 0x70,
    Press = 0x90,
    Release = 0x80,
    Pressure = 0xA0,
    PitchBend = 0xE0,
    ProgramChange = 0xC0,
    ChannelPressure = 0xD0,
    ControllerChange = 0xB0,
};

struct KeyMap {
    unsigned char key;
    std::string toKey;
    KeyMapCondition condition, is;
    unsigned short trigger;

    KeyMap(const std::string& condition, unsigned short key, const std::string& is, unsigned short trigger, const std::string& toKey)
    {
        this->key = key;
        this->toKey = toKey;
        this->trigger = trigger;

        if(condition == "ANY") this->condition = KeyMapCondition::Any;
        else if(condition == "PRESS") this->condition = KeyMapCondition::Press;
        else if(condition == "RELEASE") this->condition = KeyMapCondition::Release;
        else if(condition == "PRESSURE") this->condition = KeyMapCondition::Pressure;

        if(is == "IS") this->is = KeyMapCondition::Exact;
        else if (is == "ABOVE") this->is = KeyMapCondition::ThresholdUp;
        else if (is == "BELOW") this->is = KeyMapCondition::ThresholdDown;
    }

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

                if(is == KeyMapCondition::Exact)
                    return trigger == event.byte2;

                if(is == KeyMapCondition::ThresholdUp)
                    return event.byte2 >= trigger;

                if(is == KeyMapCondition::ThresholdDown)
                    return event.byte2 <= trigger;
            }
        }
    }

    std::string ToString()
    {
        std::stringstream text;
        std::string condition_, is_;
        unsigned short key_ = key;

        switch (condition)
        {
            case KeyMapCondition::Any: condition_ = "key emits event"; break;
            case KeyMapCondition::Press: condition_ = "key is pressed"; break;
            case KeyMapCondition::Release: condition_ = "key is released"; break;
            case KeyMapCondition::Pressure: condition_ = "key pressure changes"; break;

            default: condition_ = "INVALID"; break;
        }

        switch (is)
        {
            case KeyMapCondition::Exact: is_ = "="; break;
            case KeyMapCondition::ThresholdUp: is_ = ">="; break;
            case KeyMapCondition::ThresholdDown: is_ = "<="; break;

            default: is_ = "INVALID"; break;
        }

        text << key_ << "->" << toKey << " if " << condition_ << " and value " << is_ << ' ' << trigger;

        return text.str();
    }
};

#endif //MIDI2KB_KEYMAP_H
