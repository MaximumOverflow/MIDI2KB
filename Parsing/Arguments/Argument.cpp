#include "Argument.h"
#include "../../KeyMapper.h"

#include "Grammar/ArgumentsLexer.h"
#include "Grammar/ArgumentsParser.h"

std::unordered_map<std::string, Argument> Argument::arguments = {
        {"h", Argument([](const std::string& args) {
            std::cout   << "-h: list supported launch arguments\n"
                        << "-l [file]: load config file\n"
                        << "-d [device id]: select input device\n"
                        << "-debug: enable event logging\n";
            exit(0);
        })},

        {"l", Argument([](const std::string& args) {
            KeyMapper::Current()->LoadKeymap(args);
        })},

        {"d", Argument([](const std::string& args) {
            auto device = std::stoi(args);
            KeyMapper::Current()->SelectDevice(device);
        })},

        {"debug", Argument([](const std::string& args) {
            KeyMapper::Current()->logEvents = true;
        })}
};

void Argument::RunAll(const std::string &args) {
    antlr4::ANTLRInputStream stream(args);
    ArgumentsLexer lexer(&stream);
    antlr4::CommonTokenStream tokens(&lexer);
    ArgumentsParser parser(&tokens);
    auto argsContext = parser.args();

    for(auto& arg : argsContext->arg())
    {
        if(arg->value())    arguments.at(arg->identifier()->getText()).Run(arg->value()->getText());
        else                arguments.at(arg->identifier()->getText()).Run("");
    }
}
