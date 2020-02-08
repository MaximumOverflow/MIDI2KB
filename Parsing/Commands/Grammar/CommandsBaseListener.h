
// Generated from /home/max/CLionProjects/MIDI2KB/Parsing/Commands/Grammar/Commands.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CommandsListener.h"


/**
 * This class provides an empty implementation of CommandsListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CommandsBaseListener : public CommandsListener {
public:

  virtual void enterPath(CommandsParser::PathContext * /*ctx*/) override { }
  virtual void exitPath(CommandsParser::PathContext * /*ctx*/) override { }

  virtual void enterCommand(CommandsParser::CommandContext * /*ctx*/) override { }
  virtual void exitCommand(CommandsParser::CommandContext * /*ctx*/) override { }

  virtual void enterQuit_command(CommandsParser::Quit_commandContext * /*ctx*/) override { }
  virtual void exitQuit_command(CommandsParser::Quit_commandContext * /*ctx*/) override { }

  virtual void enterHelp_command(CommandsParser::Help_commandContext * /*ctx*/) override { }
  virtual void exitHelp_command(CommandsParser::Help_commandContext * /*ctx*/) override { }

  virtual void enterLoad_command(CommandsParser::Load_commandContext * /*ctx*/) override { }
  virtual void exitLoad_command(CommandsParser::Load_commandContext * /*ctx*/) override { }

  virtual void enterList_command(CommandsParser::List_commandContext * /*ctx*/) override { }
  virtual void exitList_command(CommandsParser::List_commandContext * /*ctx*/) override { }

  virtual void enterClear_command(CommandsParser::Clear_commandContext * /*ctx*/) override { }
  virtual void exitClear_command(CommandsParser::Clear_commandContext * /*ctx*/) override { }

  virtual void enterReload_command(CommandsParser::Reload_commandContext * /*ctx*/) override { }
  virtual void exitReload_command(CommandsParser::Reload_commandContext * /*ctx*/) override { }

  virtual void enterChange_command(CommandsParser::Change_commandContext * /*ctx*/) override { }
  virtual void exitChange_command(CommandsParser::Change_commandContext * /*ctx*/) override { }

  virtual void enterToggle_command(CommandsParser::Toggle_commandContext * /*ctx*/) override { }
  virtual void exitToggle_command(CommandsParser::Toggle_commandContext * /*ctx*/) override { }

  virtual void enterUse_command(CommandsParser::Use_commandContext * /*ctx*/) override { }
  virtual void exitUse_command(CommandsParser::Use_commandContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

