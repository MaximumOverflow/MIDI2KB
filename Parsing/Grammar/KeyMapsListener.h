
// Generated from C:/Users/maxim/CLionProjects/MIDI2KB/Parsing/Grammar\KeyMaps.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "KeyMapsParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by KeyMapsParser.
 */
class  KeyMapsListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterKey(KeyMapsParser::KeyContext *ctx) = 0;
  virtual void exitKey(KeyMapsParser::KeyContext *ctx) = 0;

  virtual void enterValue(KeyMapsParser::ValueContext *ctx) = 0;
  virtual void exitValue(KeyMapsParser::ValueContext *ctx) = 0;

  virtual void enterDestination(KeyMapsParser::DestinationContext *ctx) = 0;
  virtual void exitDestination(KeyMapsParser::DestinationContext *ctx) = 0;

  virtual void enterTrigger_condition(KeyMapsParser::Trigger_conditionContext *ctx) = 0;
  virtual void exitTrigger_condition(KeyMapsParser::Trigger_conditionContext *ctx) = 0;

  virtual void enterTrigger_threshold(KeyMapsParser::Trigger_thresholdContext *ctx) = 0;
  virtual void exitTrigger_threshold(KeyMapsParser::Trigger_thresholdContext *ctx) = 0;

  virtual void enterTrigger_action(KeyMapsParser::Trigger_actionContext *ctx) = 0;
  virtual void exitTrigger_action(KeyMapsParser::Trigger_actionContext *ctx) = 0;

  virtual void enterKeymap(KeyMapsParser::KeymapContext *ctx) = 0;
  virtual void exitKeymap(KeyMapsParser::KeymapContext *ctx) = 0;

  virtual void enterKeymaps(KeyMapsParser::KeymapsContext *ctx) = 0;
  virtual void exitKeymaps(KeyMapsParser::KeymapsContext *ctx) = 0;


};

