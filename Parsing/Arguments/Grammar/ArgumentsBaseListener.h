
// Generated from /home/max/CLionProjects/MIDI2KB/Parsing/Arguments/Grammar/Arguments.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ArgumentsListener.h"


/**
 * This class provides an empty implementation of ArgumentsListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ArgumentsBaseListener : public ArgumentsListener {
public:

  virtual void enterPath(ArgumentsParser::PathContext * /*ctx*/) override { }
  virtual void exitPath(ArgumentsParser::PathContext * /*ctx*/) override { }

  virtual void enterIdentifier(ArgumentsParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(ArgumentsParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterValue(ArgumentsParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(ArgumentsParser::ValueContext * /*ctx*/) override { }

  virtual void enterSpace(ArgumentsParser::SpaceContext * /*ctx*/) override { }
  virtual void exitSpace(ArgumentsParser::SpaceContext * /*ctx*/) override { }

  virtual void enterArg(ArgumentsParser::ArgContext * /*ctx*/) override { }
  virtual void exitArg(ArgumentsParser::ArgContext * /*ctx*/) override { }

  virtual void enterArgs(ArgumentsParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(ArgumentsParser::ArgsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

