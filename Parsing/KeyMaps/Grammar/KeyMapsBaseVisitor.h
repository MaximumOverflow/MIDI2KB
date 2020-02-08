
// Generated from /home/max/CLionProjects/MIDI2KB/Parsing/Grammar/KeyMaps.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "KeyMapsVisitor.h"


/**
 * This class provides an empty implementation of KeyMapsVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  KeyMapsBaseVisitor : public KeyMapsVisitor {
public:

  virtual antlrcpp::Any visitComment(KeyMapsParser::CommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKey(KeyMapsParser::KeyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(KeyMapsParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDestination(KeyMapsParser::DestinationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrigger_condition(KeyMapsParser::Trigger_conditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrigger_threshold(KeyMapsParser::Trigger_thresholdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTrigger_action(KeyMapsParser::Trigger_actionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeymap(KeyMapsParser::KeymapContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitKeymaps(KeyMapsParser::KeymapsContext *ctx) override {
    return visitChildren(ctx);
  }


};

