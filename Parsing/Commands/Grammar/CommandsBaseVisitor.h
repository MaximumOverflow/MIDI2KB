
// Generated from /home/max/CLionProjects/MIDI2KB/Parsing/Commands/Grammar/Commands.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "CommandsVisitor.h"


/**
 * This class provides an empty implementation of CommandsVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CommandsBaseVisitor : public CommandsVisitor {
public:

  virtual antlrcpp::Any visitPath(CommandsParser::PathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommand(CommandsParser::CommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuit_command(CommandsParser::Quit_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHelp_command(CommandsParser::Help_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoad_command(CommandsParser::Load_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList_command(CommandsParser::List_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClear_command(CommandsParser::Clear_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReload_command(CommandsParser::Reload_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChange_command(CommandsParser::Change_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToggle_command(CommandsParser::Toggle_commandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUse_command(CommandsParser::Use_commandContext *ctx) override {
    return visitChildren(ctx);
  }


};

