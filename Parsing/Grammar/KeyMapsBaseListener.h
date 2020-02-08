
// Generated from C:/Users/maxim/CLionProjects/MIDI2KB/Parsing/Grammar\KeyMaps.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "KeyMapsListener.h"


/**
 * This class provides an empty implementation of KeyMapsListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  KeyMapsBaseListener : public KeyMapsListener {
public:

  virtual void enterKey(KeyMapsParser::KeyContext * /*ctx*/) override { }
  virtual void exitKey(KeyMapsParser::KeyContext * /*ctx*/) override { }

  virtual void enterValue(KeyMapsParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(KeyMapsParser::ValueContext * /*ctx*/) override { }

  virtual void enterDestination(KeyMapsParser::DestinationContext * /*ctx*/) override { }
  virtual void exitDestination(KeyMapsParser::DestinationContext * /*ctx*/) override { }

  virtual void enterTrigger_condition(KeyMapsParser::Trigger_conditionContext * /*ctx*/) override { }
  virtual void exitTrigger_condition(KeyMapsParser::Trigger_conditionContext * /*ctx*/) override { }

  virtual void enterTrigger_threshold(KeyMapsParser::Trigger_thresholdContext * /*ctx*/) override { }
  virtual void exitTrigger_threshold(KeyMapsParser::Trigger_thresholdContext * /*ctx*/) override { }

  virtual void enterTrigger_action(KeyMapsParser::Trigger_actionContext * /*ctx*/) override { }
  virtual void exitTrigger_action(KeyMapsParser::Trigger_actionContext * /*ctx*/) override { }

  virtual void enterKeymap(KeyMapsParser::KeymapContext * /*ctx*/) override { }
  virtual void exitKeymap(KeyMapsParser::KeymapContext * /*ctx*/) override { }

  virtual void enterKeymaps(KeyMapsParser::KeymapsContext * /*ctx*/) override { }
  virtual void exitKeymaps(KeyMapsParser::KeymapsContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

