
// Generated from /home/max/CLionProjects/MIDI2KB/Parsing/Commands/Grammar/Commands.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CommandsParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CommandsParser.
 */
class  CommandsListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPath(CommandsParser::PathContext *ctx) = 0;
  virtual void exitPath(CommandsParser::PathContext *ctx) = 0;

  virtual void enterCommand(CommandsParser::CommandContext *ctx) = 0;
  virtual void exitCommand(CommandsParser::CommandContext *ctx) = 0;

  virtual void enterQuit_command(CommandsParser::Quit_commandContext *ctx) = 0;
  virtual void exitQuit_command(CommandsParser::Quit_commandContext *ctx) = 0;

  virtual void enterHelp_command(CommandsParser::Help_commandContext *ctx) = 0;
  virtual void exitHelp_command(CommandsParser::Help_commandContext *ctx) = 0;

  virtual void enterLoad_command(CommandsParser::Load_commandContext *ctx) = 0;
  virtual void exitLoad_command(CommandsParser::Load_commandContext *ctx) = 0;

  virtual void enterList_command(CommandsParser::List_commandContext *ctx) = 0;
  virtual void exitList_command(CommandsParser::List_commandContext *ctx) = 0;

  virtual void enterClear_command(CommandsParser::Clear_commandContext *ctx) = 0;
  virtual void exitClear_command(CommandsParser::Clear_commandContext *ctx) = 0;

  virtual void enterReload_command(CommandsParser::Reload_commandContext *ctx) = 0;
  virtual void exitReload_command(CommandsParser::Reload_commandContext *ctx) = 0;

  virtual void enterChange_command(CommandsParser::Change_commandContext *ctx) = 0;
  virtual void exitChange_command(CommandsParser::Change_commandContext *ctx) = 0;

  virtual void enterToggle_command(CommandsParser::Toggle_commandContext *ctx) = 0;
  virtual void exitToggle_command(CommandsParser::Toggle_commandContext *ctx) = 0;

  virtual void enterUse_command(CommandsParser::Use_commandContext *ctx) = 0;
  virtual void exitUse_command(CommandsParser::Use_commandContext *ctx) = 0;


};

