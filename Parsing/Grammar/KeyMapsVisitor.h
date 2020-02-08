
// Generated from C:/Users/maxim/CLionProjects/MIDI2KB/Parsing/Grammar\KeyMaps.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "KeyMapsParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by KeyMapsParser.
 */
class  KeyMapsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by KeyMapsParser.
   */
    virtual antlrcpp::Any visitKey(KeyMapsParser::KeyContext *context) = 0;

    virtual antlrcpp::Any visitValue(KeyMapsParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitDestination(KeyMapsParser::DestinationContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_condition(KeyMapsParser::Trigger_conditionContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_threshold(KeyMapsParser::Trigger_thresholdContext *context) = 0;

    virtual antlrcpp::Any visitTrigger_action(KeyMapsParser::Trigger_actionContext *context) = 0;

    virtual antlrcpp::Any visitKeymap(KeyMapsParser::KeymapContext *context) = 0;

    virtual antlrcpp::Any visitKeymaps(KeyMapsParser::KeymapsContext *context) = 0;


};

