
// Generated from C:/Users/maxim/CLionProjects/MIDI2KB/Parsing/Grammar\KeyMaps.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  KeyMapsParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, WS = 14, 
    SEMICOLON = 15, NUMBER = 16, IDENTIFIER = 17
  };

  enum {
    RuleKey = 0, RuleValue = 1, RuleDestination = 2, RuleTrigger_condition = 3, 
    RuleTrigger_threshold = 4, RuleTrigger_action = 5, RuleKeymap = 6, RuleKeymaps = 7
  };

  KeyMapsParser(antlr4::TokenStream *input);
  ~KeyMapsParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class KeyContext;
  class ValueContext;
  class DestinationContext;
  class Trigger_conditionContext;
  class Trigger_thresholdContext;
  class Trigger_actionContext;
  class KeymapContext;
  class KeymapsContext; 

  class  KeyContext : public antlr4::ParserRuleContext {
  public:
    KeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeyContext* key();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *any = nullptr;;
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  DestinationContext : public antlr4::ParserRuleContext {
  public:
    DestinationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DestinationContext* destination();

  class  Trigger_conditionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *any = nullptr;;
    antlr4::Token *press = nullptr;;
    antlr4::Token *release = nullptr;;
    antlr4::Token *pressure = nullptr;;
    Trigger_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_conditionContext* trigger_condition();

  class  Trigger_thresholdContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *exact = nullptr;;
    antlr4::Token *threshold_up = nullptr;;
    antlr4::Token *threshold_down = nullptr;;
    Trigger_thresholdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_thresholdContext* trigger_threshold();

  class  Trigger_actionContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *hold = nullptr;;
    antlr4::Token *press = nullptr;;
    antlr4::Token *toggle = nullptr;;
    antlr4::Token *release = nullptr;;
    Trigger_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trigger_actionContext* trigger_action();

  class  KeymapContext : public antlr4::ParserRuleContext {
  public:
    KeymapContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Trigger_conditionContext *trigger_condition();
    KeyContext *key();
    Trigger_thresholdContext *trigger_threshold();
    ValueContext *value();
    Trigger_actionContext *trigger_action();
    DestinationContext *destination();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeymapContext* keymap();

  class  KeymapsContext : public antlr4::ParserRuleContext {
  public:
    KeymapsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<KeymapContext *> keymap();
    KeymapContext* keymap(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeymapsContext* keymaps();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

