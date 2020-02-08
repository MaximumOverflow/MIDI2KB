
// Generated from /home/max/CLionProjects/MIDI2KB/Parsing/Arguments/Grammar/Arguments.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ArgumentsParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ArgumentsParser.
 */
class  ArgumentsListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPath(ArgumentsParser::PathContext *ctx) = 0;
  virtual void exitPath(ArgumentsParser::PathContext *ctx) = 0;

  virtual void enterIdentifier(ArgumentsParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(ArgumentsParser::IdentifierContext *ctx) = 0;

  virtual void enterValue(ArgumentsParser::ValueContext *ctx) = 0;
  virtual void exitValue(ArgumentsParser::ValueContext *ctx) = 0;

  virtual void enterSpace(ArgumentsParser::SpaceContext *ctx) = 0;
  virtual void exitSpace(ArgumentsParser::SpaceContext *ctx) = 0;

  virtual void enterArg(ArgumentsParser::ArgContext *ctx) = 0;
  virtual void exitArg(ArgumentsParser::ArgContext *ctx) = 0;

  virtual void enterArgs(ArgumentsParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(ArgumentsParser::ArgsContext *ctx) = 0;


};

