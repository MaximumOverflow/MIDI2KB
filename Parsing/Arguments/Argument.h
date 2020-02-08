#ifndef MIDI2KB_ARGUMENT_H
#define MIDI2KB_ARGUMENT_H

#include <unordered_map>
#include <string>


class Argument {
private:
    typedef void(*Func)(const std::string&);

    Func func;

public:
    static std::unordered_map<std::string, Argument> arguments;
    static void RunAll(const std::string& args);

    Argument(Func func) : func{func} {}
    void Run(const std::string& args) { func(args); }

};


#endif //MIDI2KB_ARGUMENT_H
