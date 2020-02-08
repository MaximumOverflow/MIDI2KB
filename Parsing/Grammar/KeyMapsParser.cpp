
// Generated from C:/Users/maxim/CLionProjects/MIDI2KB/Parsing/Grammar\KeyMaps.g4 by ANTLR 4.8


#include "KeyMapsListener.h"
#include "KeyMapsVisitor.h"

#include "KeyMapsParser.h"


using namespace antlrcpp;
using namespace antlr4;

KeyMapsParser::KeyMapsParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

KeyMapsParser::~KeyMapsParser() {
  delete _interpreter;
}

std::string KeyMapsParser::getGrammarFileName() const {
  return "KeyMaps.g4";
}

const std::vector<std::string>& KeyMapsParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& KeyMapsParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- KeyContext ------------------------------------------------------------------

KeyMapsParser::KeyContext::KeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KeyMapsParser::KeyContext::NUMBER() {
  return getToken(KeyMapsParser::NUMBER, 0);
}


size_t KeyMapsParser::KeyContext::getRuleIndex() const {
  return KeyMapsParser::RuleKey;
}

void KeyMapsParser::KeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKey(this);
}

void KeyMapsParser::KeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKey(this);
}


antlrcpp::Any KeyMapsParser::KeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeyMapsVisitor*>(visitor))
    return parserVisitor->visitKey(this);
  else
    return visitor->visitChildren(this);
}

KeyMapsParser::KeyContext* KeyMapsParser::key() {
  KeyContext *_localctx = _tracker.createInstance<KeyContext>(_ctx, getState());
  enterRule(_localctx, 0, KeyMapsParser::RuleKey);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    match(KeyMapsParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

KeyMapsParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KeyMapsParser::ValueContext::NUMBER() {
  return getToken(KeyMapsParser::NUMBER, 0);
}


size_t KeyMapsParser::ValueContext::getRuleIndex() const {
  return KeyMapsParser::RuleValue;
}

void KeyMapsParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void KeyMapsParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


antlrcpp::Any KeyMapsParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeyMapsVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

KeyMapsParser::ValueContext* KeyMapsParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 2, KeyMapsParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    match(KeyMapsParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DestinationContext ------------------------------------------------------------------

KeyMapsParser::DestinationContext::DestinationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KeyMapsParser::DestinationContext::IDENTIFIER() {
  return getToken(KeyMapsParser::IDENTIFIER, 0);
}


size_t KeyMapsParser::DestinationContext::getRuleIndex() const {
  return KeyMapsParser::RuleDestination;
}

void KeyMapsParser::DestinationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDestination(this);
}

void KeyMapsParser::DestinationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDestination(this);
}


antlrcpp::Any KeyMapsParser::DestinationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeyMapsVisitor*>(visitor))
    return parserVisitor->visitDestination(this);
  else
    return visitor->visitChildren(this);
}

KeyMapsParser::DestinationContext* KeyMapsParser::destination() {
  DestinationContext *_localctx = _tracker.createInstance<DestinationContext>(_ctx, getState());
  enterRule(_localctx, 4, KeyMapsParser::RuleDestination);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    match(KeyMapsParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Trigger_conditionContext ------------------------------------------------------------------

KeyMapsParser::Trigger_conditionContext::Trigger_conditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KeyMapsParser::Trigger_conditionContext::getRuleIndex() const {
  return KeyMapsParser::RuleTrigger_condition;
}

void KeyMapsParser::Trigger_conditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrigger_condition(this);
}

void KeyMapsParser::Trigger_conditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrigger_condition(this);
}


antlrcpp::Any KeyMapsParser::Trigger_conditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeyMapsVisitor*>(visitor))
    return parserVisitor->visitTrigger_condition(this);
  else
    return visitor->visitChildren(this);
}

KeyMapsParser::Trigger_conditionContext* KeyMapsParser::trigger_condition() {
  Trigger_conditionContext *_localctx = _tracker.createInstance<Trigger_conditionContext>(_ctx, getState());
  enterRule(_localctx, 6, KeyMapsParser::RuleTrigger_condition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(24);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KeyMapsParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(20);
        dynamic_cast<Trigger_conditionContext *>(_localctx)->any = match(KeyMapsParser::T__0);
        break;
      }

      case KeyMapsParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(21);
        dynamic_cast<Trigger_conditionContext *>(_localctx)->press = match(KeyMapsParser::T__1);
        break;
      }

      case KeyMapsParser::T__2: {
        enterOuterAlt(_localctx, 3);
        setState(22);
        dynamic_cast<Trigger_conditionContext *>(_localctx)->release = match(KeyMapsParser::T__2);
        break;
      }

      case KeyMapsParser::T__3: {
        enterOuterAlt(_localctx, 4);
        setState(23);
        dynamic_cast<Trigger_conditionContext *>(_localctx)->pressure = match(KeyMapsParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Trigger_thresholdContext ------------------------------------------------------------------

KeyMapsParser::Trigger_thresholdContext::Trigger_thresholdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KeyMapsParser::Trigger_thresholdContext::getRuleIndex() const {
  return KeyMapsParser::RuleTrigger_threshold;
}

void KeyMapsParser::Trigger_thresholdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrigger_threshold(this);
}

void KeyMapsParser::Trigger_thresholdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrigger_threshold(this);
}


antlrcpp::Any KeyMapsParser::Trigger_thresholdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeyMapsVisitor*>(visitor))
    return parserVisitor->visitTrigger_threshold(this);
  else
    return visitor->visitChildren(this);
}

KeyMapsParser::Trigger_thresholdContext* KeyMapsParser::trigger_threshold() {
  Trigger_thresholdContext *_localctx = _tracker.createInstance<Trigger_thresholdContext>(_ctx, getState());
  enterRule(_localctx, 8, KeyMapsParser::RuleTrigger_threshold);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(29);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KeyMapsParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(26);
        dynamic_cast<Trigger_thresholdContext *>(_localctx)->exact = match(KeyMapsParser::T__4);
        break;
      }

      case KeyMapsParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(27);
        dynamic_cast<Trigger_thresholdContext *>(_localctx)->threshold_up = match(KeyMapsParser::T__5);
        break;
      }

      case KeyMapsParser::T__6: {
        enterOuterAlt(_localctx, 3);
        setState(28);
        dynamic_cast<Trigger_thresholdContext *>(_localctx)->threshold_down = match(KeyMapsParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeymapContext ------------------------------------------------------------------

KeyMapsParser::KeymapContext::KeymapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KeyMapsParser::Trigger_conditionContext* KeyMapsParser::KeymapContext::trigger_condition() {
  return getRuleContext<KeyMapsParser::Trigger_conditionContext>(0);
}

KeyMapsParser::KeyContext* KeyMapsParser::KeymapContext::key() {
  return getRuleContext<KeyMapsParser::KeyContext>(0);
}

KeyMapsParser::Trigger_thresholdContext* KeyMapsParser::KeymapContext::trigger_threshold() {
  return getRuleContext<KeyMapsParser::Trigger_thresholdContext>(0);
}

KeyMapsParser::ValueContext* KeyMapsParser::KeymapContext::value() {
  return getRuleContext<KeyMapsParser::ValueContext>(0);
}

KeyMapsParser::DestinationContext* KeyMapsParser::KeymapContext::destination() {
  return getRuleContext<KeyMapsParser::DestinationContext>(0);
}

tree::TerminalNode* KeyMapsParser::KeymapContext::SEMICOLON() {
  return getToken(KeyMapsParser::SEMICOLON, 0);
}


size_t KeyMapsParser::KeymapContext::getRuleIndex() const {
  return KeyMapsParser::RuleKeymap;
}

void KeyMapsParser::KeymapContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeymap(this);
}

void KeyMapsParser::KeymapContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeymap(this);
}


antlrcpp::Any KeyMapsParser::KeymapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeyMapsVisitor*>(visitor))
    return parserVisitor->visitKeymap(this);
  else
    return visitor->visitChildren(this);
}

KeyMapsParser::KeymapContext* KeyMapsParser::keymap() {
  KeymapContext *_localctx = _tracker.createInstance<KeymapContext>(_ctx, getState());
  enterRule(_localctx, 10, KeyMapsParser::RuleKeymap);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31);
    trigger_condition();
    setState(32);
    key();
    setState(33);
    trigger_threshold();
    setState(34);
    value();
    setState(35);
    destination();
    setState(36);
    match(KeyMapsParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeymapsContext ------------------------------------------------------------------

KeyMapsParser::KeymapsContext::KeymapsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KeyMapsParser::KeymapContext *> KeyMapsParser::KeymapsContext::keymap() {
  return getRuleContexts<KeyMapsParser::KeymapContext>();
}

KeyMapsParser::KeymapContext* KeyMapsParser::KeymapsContext::keymap(size_t i) {
  return getRuleContext<KeyMapsParser::KeymapContext>(i);
}


size_t KeyMapsParser::KeymapsContext::getRuleIndex() const {
  return KeyMapsParser::RuleKeymaps;
}

void KeyMapsParser::KeymapsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeymaps(this);
}

void KeyMapsParser::KeymapsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeymaps(this);
}


antlrcpp::Any KeyMapsParser::KeymapsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeyMapsVisitor*>(visitor))
    return parserVisitor->visitKeymaps(this);
  else
    return visitor->visitChildren(this);
}

KeyMapsParser::KeymapsContext* KeyMapsParser::keymaps() {
  KeymapsContext *_localctx = _tracker.createInstance<KeymapsContext>(_ctx, getState());
  enterRule(_localctx, 12, KeyMapsParser::RuleKeymaps);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KeyMapsParser::T__0)
      | (1ULL << KeyMapsParser::T__1)
      | (1ULL << KeyMapsParser::T__2)
      | (1ULL << KeyMapsParser::T__3))) != 0)) {
      setState(38);
      keymap();
      setState(43);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> KeyMapsParser::_decisionToDFA;
atn::PredictionContextCache KeyMapsParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN KeyMapsParser::_atn;
std::vector<uint16_t> KeyMapsParser::_serializedATN;

std::vector<std::string> KeyMapsParser::_ruleNames = {
  "key", "value", "destination", "trigger_condition", "trigger_threshold", 
  "keymap", "keymaps"
};

std::vector<std::string> KeyMapsParser::_literalNames = {
  "", "'ANY'", "'PRESS'", "'RELEASE'", "'PRESSURE'", "'IS'", "'ABOVE'", 
  "'BELOW'", "", "';'"
};

std::vector<std::string> KeyMapsParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "WS", "SEMICOLON", "NUMBER", "IDENTIFIER"
};

dfa::Vocabulary KeyMapsParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> KeyMapsParser::_tokenNames;

KeyMapsParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xd, 0x2f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x1b, 0xa, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x20, 0xa, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x7, 
    0x8, 0x2a, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x2d, 0xb, 0x8, 0x3, 0x8, 0x2, 
    0x2, 0x9, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x2, 0x2, 0x2, 0x2d, 0x2, 
    0x10, 0x3, 0x2, 0x2, 0x2, 0x4, 0x12, 0x3, 0x2, 0x2, 0x2, 0x6, 0x14, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x1a, 0x3, 0x2, 0x2, 0x2, 0xa, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x21, 0x3, 0x2, 0x2, 0x2, 0xe, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x11, 0x7, 0xc, 0x2, 0x2, 0x11, 0x3, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x13, 0x7, 0xc, 0x2, 0x2, 0x13, 0x5, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 
    0x7, 0xd, 0x2, 0x2, 0x15, 0x7, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1b, 0x7, 
    0x3, 0x2, 0x2, 0x17, 0x1b, 0x7, 0x4, 0x2, 0x2, 0x18, 0x1b, 0x7, 0x5, 
    0x2, 0x2, 0x19, 0x1b, 0x7, 0x6, 0x2, 0x2, 0x1a, 0x16, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x18, 0x3, 0x2, 0x2, 0x2, 
    0x1a, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x20, 0x7, 0x7, 0x2, 0x2, 0x1d, 0x20, 0x7, 0x8, 0x2, 0x2, 0x1e, 0x20, 
    0x7, 0x9, 0x2, 0x2, 0x1f, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x21, 0x22, 0x5, 0x8, 0x5, 0x2, 0x22, 0x23, 0x5, 0x2, 0x2, 
    0x2, 0x23, 0x24, 0x5, 0xa, 0x6, 0x2, 0x24, 0x25, 0x5, 0x4, 0x3, 0x2, 
    0x25, 0x26, 0x5, 0x6, 0x4, 0x2, 0x26, 0x27, 0x7, 0xb, 0x2, 0x2, 0x27, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2a, 0x5, 0xc, 0x7, 0x2, 0x29, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x5, 0x1a, 0x1f, 0x2b, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

KeyMapsParser::Initializer KeyMapsParser::_init;
