
// Generated from /home/max/CLionProjects/MIDI2KB/Parsing/Commands/Grammar/Commands.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CommandsParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CommandsParser.
 */
class  CommandsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CommandsParser.
   */
    virtual antlrcpp::Any visitPath(CommandsParser::PathContext *context) = 0;

    virtual antlrcpp::Any visitCommand(CommandsParser::CommandContext *context) = 0;

    virtual antlrcpp::Any visitQuit_command(CommandsParser::Quit_commandContext *context) = 0;

    virtual antlrcpp::Any visitHelp_command(CommandsParser::Help_commandContext *context) = 0;

    virtual antlrcpp::Any visitLoad_command(CommandsParser::Load_commandContext *context) = 0;

    virtual antlrcpp::Any visitList_command(CommandsParser::List_commandContext *context) = 0;

    virtual antlrcpp::Any visitClear_command(CommandsParser::Clear_commandContext *context) = 0;

    virtual antlrcpp::Any visitReload_command(CommandsParser::Reload_commandContext *context) = 0;

    virtual antlrcpp::Any visitChange_command(CommandsParser::Change_commandContext *context) = 0;

    virtual antlrcpp::Any visitToggle_command(CommandsParser::Toggle_commandContext *context) = 0;

    virtual antlrcpp::Any visitUse_command(CommandsParser::Use_commandContext *context) = 0;


};

