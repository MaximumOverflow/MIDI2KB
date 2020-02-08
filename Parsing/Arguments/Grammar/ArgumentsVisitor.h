
// Generated from /home/max/CLionProjects/MIDI2KB/Parsing/Arguments/Grammar/Arguments.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ArgumentsParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ArgumentsParser.
 */
class  ArgumentsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ArgumentsParser.
   */
    virtual antlrcpp::Any visitPath(ArgumentsParser::PathContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(ArgumentsParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitValue(ArgumentsParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitSpace(ArgumentsParser::SpaceContext *context) = 0;

    virtual antlrcpp::Any visitArg(ArgumentsParser::ArgContext *context) = 0;

    virtual antlrcpp::Any visitArgs(ArgumentsParser::ArgsContext *context) = 0;


};

