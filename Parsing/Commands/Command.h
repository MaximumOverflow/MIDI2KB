#ifndef MIDI2KB_COMMAND_H
#define MIDI2KB_COMMAND_H

#include <unordered_map>
#include <string>

#include "Grammar/CommandsParser.h"
#include "Grammar/CommandsLexer.h"

class Command {
private:
    typedef void(*Func)(void*);
    Func func;

public:
    static std::unordered_map<std::string, Command> commands;
    static void Run(const std::string& command);

    Command(Func func) : func{func} {}
    void Run(void* args = nullptr) { func(args); }

};


#endif //MIDI2KB_COMMAND_H
