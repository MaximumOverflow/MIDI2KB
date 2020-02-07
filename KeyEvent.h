#ifndef MIDI2KB_KEYEVENT_H
#define MIDI2KB_KEYEVENT_H

#include <vector>
#include <string>
#include <sstream>
#include <iostream>

enum class KeyEventType {
    Press = 0x90,
    Release = 0x80,
    Pressure = 0xA0,
    PitchBend = 0xE0,
    ProgramChange = 0xC0,
    ChannelPressure = 0xD0,
    ControllerChange = 0xB0,
};

struct KeyEvent {
    KeyEventType type;
    unsigned char byte1, byte2;

    explicit KeyEvent(std::vector<unsigned char> *event_data)
    {
        type = (KeyEventType) event_data->at(0);
        switch (type)
        {

            case KeyEventType::Press:
            case KeyEventType::Release:
            case KeyEventType::Pressure:
            case KeyEventType::PitchBend:
            case KeyEventType::ControllerChange:
                byte1 = event_data->at(1);
                byte2 = event_data->at(2);
                break;

            case KeyEventType::ProgramChange:
            case KeyEventType::ChannelPressure:
                byte1 = event_data->at(1);
                byte2 = 0;
                break;

            default:
            {
                if(event_data->size() >= 3)
                {
                    byte1 = event_data->at(1);
                    byte2 = event_data->at(2);
                }
                else if(event_data->size() == 2)
                {
                    byte1 = event_data->at(1);
                    byte2 = 0;
                }
            }
        }
    }

    std::string ToString()
    {
        std::string tp;
        switch (type)
        {
            case KeyEventType::Press:                 tp = "PRESS";             break;
            case KeyEventType::Release:               tp = "RELEASE";           break;
            case KeyEventType::Pressure:              tp = "PRESSURE";          break;
            case KeyEventType::PitchBend:             tp = "PITCH_BEND";        break;
            case KeyEventType::ProgramChange:         tp = "PROGRAM_CHANGE";    break;
            case KeyEventType::ChannelPressure:       tp = "CHANNEL_PRESSURE";  break;
            case KeyEventType::ControllerChange:      tp = "CONTROLLER_CHANGE"; break;

            default: tp = std::to_string((int) type);                       break;
        }

        std::string b1Name, b2Name;
        switch (type)
        {
            case KeyEventType::Press:
            case KeyEventType::Release:               b1Name = "PITCH"; b2Name = "VELOCITY";    break;
            case KeyEventType::Pressure:              b1Name = "KEY"; b2Name = "PRESSURE";      break;
            case KeyEventType::PitchBend:             b1Name = "LSB"; b2Name = "MSB";           break;
            case KeyEventType::ProgramChange:         b1Name = "PRESET"; b2Name = "BYTE2";      break;
            case KeyEventType::ChannelPressure:       b1Name = "PRESSURE"; b2Name = "BYTE2";    break;
            case KeyEventType::ControllerChange:      b1Name = "CONTROLLER"; b2Name = "VALUE";  break;

            default: b1Name = "BYTE1"; b2Name = "BYTE2";                                        break;
        }

        std::stringstream text;
        text << "[KEY EVENT] "
             << "TYPE: " << tp
             << " | " << b1Name << ": " << (unsigned short) byte1
             << " | " << b2Name << ": " << (unsigned short) byte2;

        return text.str();
    }
};

#endif //MIDI2KB_KEYEVENT_H
