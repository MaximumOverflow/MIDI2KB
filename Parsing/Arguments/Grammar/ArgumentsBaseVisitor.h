
// Generated from /home/max/CLionProjects/MIDI2KB/Parsing/Arguments/Grammar/Arguments.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ArgumentsVisitor.h"


/**
 * This class provides an empty implementation of ArgumentsVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ArgumentsBaseVisitor : public ArgumentsVisitor {
public:

  virtual antlrcpp::Any visitPath(ArgumentsParser::PathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(ArgumentsParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(ArgumentsParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpace(ArgumentsParser::SpaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArg(ArgumentsParser::ArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgs(ArgumentsParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }


};

