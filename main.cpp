#include <fstream>
#include <iostream>
#include <rtmidi/RtMidi.h>

extern "C" {
    #include <xdo.h>
}

#include "KeyMap.h"
#include "KeyEvent.h"

xdo_t * x;
RtMidiIn midi;
std::string configPath;
std::vector<KeyMap> keymaps;
bool logEvents = false;

void ShowHelp();
void LoadKeymap();
void ShowKeymap();
void SelectDevice();
void ExecuteKeymap(KeyMap& keyMap);
void OnMidiInput(double timeStamp, std::vector<unsigned char> *message, void *userData);

int main(int argc, char *argv[]) {
    x = xdo_new(nullptr);

    SelectDevice();

    if(argc >= 2)
    {
        configPath = argv[1];
        LoadKeymap();
    }

    std::cout << "Listening for input...\n";
    std::cout << "Enter 'help' for a list of the available commands\n";
    std::string command;
    while (true)
    {
        std::cout << "\nEnter a command: ";
        std::getline(std::cin, command);

        if(command == "quit" or command == "exit") break;
        else if(command == "help") ShowHelp();
        else if(command == "list") ShowKeymap();
        else if(command == "reload") LoadKeymap();
        else if(command == "change device") SelectDevice();
        else if(command.starts_with("load ")) {
            configPath = command.substr(5, command.length());
            LoadKeymap();
        }
        else if(command == "clear") {
            configPath = "";
            keymaps.clear();
            std::cout << "Keymaps cleared\n";
        }
        else if(command.starts_with("log events")) {
            logEvents = !logEvents;
            std::cout << "Toggled event logging [" << (logEvents ? "ON" : "OFF") << "]\n";
        }
    }

    xdo_free(x);

    return 0;
}

void ShowHelp()
{
    std::cout <<    "quit/exit: close the program\n" <<
                    "reload: reload the current config file\n" <<
                    "list: show the current config file\n" <<
                    "clear: deselect the current config file and clear all keymaps\n" <<
                    "change device: select a new input device\n" <<
                    "load [file]: load a new config file\n" <<
                    "log events: toggle event logging\n";
}

void ShowKeymap()
{
    for(auto& keymap : keymaps)
        std::cout << keymap.ToString() << '\n';
}

void LoadKeymap()
{
    if(configPath.empty())
    {
        std::cout << "No config path was provided\n";
        return;
    }

    std::cout << "Loading keymap from " << configPath << "...\n";
    keymaps.clear();
    std::ifstream config(configPath);
    if(!config.is_open())
    {
        std::cout << "Keymap file could not be opened\n";
        return;
    }
    while(!config.eof())
    {
        try {
            std::string condition, is, toKey;
            unsigned short key = 0, trigger = 0;

            config >> condition >> key >> is >> trigger >> toKey;
            keymaps.emplace_back(condition, key, is, trigger, toKey);
        } catch (std::exception&) {}
    }
    config.close();
    std::cout << "Keymap loaded\n";
}

void SelectDevice()
{
    if(midi.isPortOpen())
    {
        midi.closePort();
        midi.cancelCallback();
    }

    auto ports = midi.getPortCount(), port = (unsigned int) UINT8_MAX;
    std::cout << "Available devices: \n";
    for(unsigned int i = 0; i < ports; i++)
        std::cout << i << ". " << midi.getPortName(i) << '\n';
    while (port >= ports)
    {
        std::cout << "Select a device: ";
        std::cin >> port;
    }
    midi.openPort(port);
    midi.ignoreTypes();
    midi.setCallback(OnMidiInput, nullptr);
    std::cin.ignore(INT8_MAX, '\n');
}

void OnMidiInput(double timeStamp, std::vector<unsigned char> *message, void *userData)
{
    KeyEvent event(message);

    if(logEvents)
        std::cout << event.ToString() << '\n';

    for (auto& keymap : keymaps)
        if(keymap.CheckEvent(event))
            ExecuteKeymap(keymap);
}

void ExecuteKeymap(KeyMap& keyMap) {
    if(logEvents)
        std::cout << "[REMAP EVENT] KEY: " << (unsigned short) keyMap.key << " DESTINATION: " << keyMap.toKey << '\n';

    xdo_send_keysequence_window(x, CURRENTWINDOW, keyMap.toKey.c_str(), 0);
}