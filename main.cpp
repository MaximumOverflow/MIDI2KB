#include <fstream>
#include <iostream>

#include "KeyMapper.h"

static void ShowHelp();

int main(int argc, char *argv[]) {
    KeyMapper keyMapper;

    keyMapper.SelectDevice();

    if(argc >= 2)
    {
        keyMapper.configPath = argv[1];
		keyMapper.LoadKeymap();
    }

    std::cout << "Enter 'help' for a list of the available commands\n";
    std::string command;
    while (true)
    {
        std::cout << "\nEnter a command: ";
        std::getline(std::cin, command);

        if(command == "quit" || command == "exit") break;
        else if(command == "help") ShowHelp();
        else if(command == "list") std::cout << keyMapper.GetKeyMapAsString();
        else if(command == "reload") keyMapper.LoadKeymap();
        else if(command == "change device") keyMapper.SelectDevice();
        else if(command.substr(0, 5) == "load ") {
            keyMapper.configPath = command.substr(5, command.length());
			keyMapper.LoadKeymap();
        }
        else if(command == "clear") {
            keyMapper.ClearKeymap();
            std::cout << "Keymaps cleared\n";
        }
        else if(command.substr(0, 10) == "log events") {
            keyMapper.logEvents = !keyMapper.logEvents;
            std::cout << "Toggled event logging [" << (keyMapper.logEvents ? "ON" : "OFF") << "]\n";
        }
        else std::cout << "Unknown command\n";
    }

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