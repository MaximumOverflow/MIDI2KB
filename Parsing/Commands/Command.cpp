#include "Command.h"
#include "../../KeyMapper.h"

std::unordered_map<std::string, Command> Command::commands {
        {"quit", Command([](void*) { exit(0); })},

        {"help", Command([](void*) {
            std::cout <<    "quit/exit: close the program\n" <<
                            "reload: reload the current config file\n" <<
                            "list: show the currently loaded keymaps\n" <<
                            "clear: deselect the current config file and clear all keymaps\n" <<
                            "change device: select a new input device\n" <<
                            "load [file]: load a new config file\n" <<
                            "log events: toggle event logging\n";
        })},

        {"load", Command([](void* args) {
            auto ctx = (CommandsParser::Load_commandContext*) args;
            auto path = ctx->path()->getText();
            KeyMapper::Current()->LoadKeymap(path);
        })},

        {"list", Command([](void* args) {
            auto ctx = (CommandsParser::List_commandContext*) args;
            if(ctx->keymaps) std::cout << KeyMapper::Current()->GetKeyMapAsString();
            else if(ctx->devices)
            {
                for(auto& device : KeyMapper::Current()->GetDeviceList())
                    std::cout << device.first << ". " << device.second << '\n';
            }
        })},

        {"clear", Command([](void* args) {
            auto ctx = (CommandsParser::Clear_commandContext*) args;
            if(ctx->keymaps) KeyMapper::Current()->ClearKeymap();
            else if(ctx->console)
            {
                #ifdef WIN32
                system("cls");
                #else
                system("clear");
                #endif
            }
        })},


        {"reload", Command([](void*) { KeyMapper::Current()->ReloadKeymap(); })},

        {"change", Command([](void* args) {
            auto ctx = (CommandsParser::Change_commandContext*) args;
            if(ctx->device) KeyMapper::Current()->SelectDevice();
        })},

        {"toggle", Command([](void* args) {
            auto ctx = (CommandsParser::Toggle_commandContext*) args;
            bool state = ctx->on != nullptr;

            if(ctx->log)
            {
                KeyMapper::Current()->logEvents = state;
                std::cout << "Toggled event logging " << (state ? "[ON]" : "[OFF]") << '\n';
            }
            else if(ctx->keymap) { /*TODO*/ }
        })},

        {"use", Command([](void* args) {
            auto ctx = (CommandsParser::Use_commandContext*) args;
            if(ctx->device) KeyMapper::Current()->SelectDevice(std::stoi(ctx->num->getText()));
            else if(ctx->keymap) KeyMapper::Current()->LoadKeymap(ctx->path()->getText());
        })},
};

void Command::Run(const std::string &command) {
    antlr4::ANTLRInputStream stream(command);
    CommandsLexer lexer(&stream);
    antlr4::CommonTokenStream tokens(&lexer);
    CommandsParser parser(&tokens);

    auto cmd = parser.command();

    if(parser.getNumberOfSyntaxErrors())
    {
        std::cout << "Unknown command\n";
        return;
    }

    if(cmd->quit_command()) commands.at("quit").Run();
    else if (cmd->help_command()) commands.at("help").Run();
    else if(cmd->load_command()) commands.at("load").Run(cmd->load_command());
    else if(cmd->list_command()) commands.at("list").Run(cmd->list_command());
    else if(cmd->clear_command()) commands.at("clear").Run(cmd->clear_command());
    else if(cmd->reload_command()) commands.at("reload").Run();
    else if(cmd->change_command()) commands.at("change").Run(cmd->change_command());
    else if(cmd->toggle_command()) commands.at("toggle").Run(cmd->toggle_command());
    else if(cmd->use_command()) commands.at("use").Run(cmd->use_command());
}
