#include <thread>
#include <iostream>

#include "KeyMapper.h"
#include "Parsing/Commands/Command.h"
#include "Parsing/Arguments/Argument.h"

using namespace std::chrono_literals;

int main(int argc, char *argv[]) {
    KeyMapper keyMapper;
    keyMapper.MakeCurrent();

    std::stringstream argsstr;
    for(unsigned int i = 1; i < argc; i++)
        argsstr << argv[i] << ' ';

    Argument::RunAll(argsstr.str());

    if(!keyMapper.HasActiveDevice()) keyMapper.SelectDevice();

    std::cout << "Enter 'help' for a list of the available commands\n";
    std::string command;
    while (true)
    {
        std::this_thread::sleep_for(200ms);
        std::cout << "\nEnter a command: ";
        std::getline(std::cin, command);
        Command::Run(command);
    }
}