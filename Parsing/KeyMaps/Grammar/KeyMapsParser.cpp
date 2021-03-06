
// Generated from /home/max/CLionProjects/MIDI2KB/Parsing/Grammar/KeyMaps.g4 by ANTLR 4.8


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


//----------------- CommentContext ------------------------------------------------------------------

KeyMapsParser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KeyMapsParser::CommentContext::getRuleIndex() const {
  return KeyMapsParser::RuleComment;
}

void KeyMapsParser::CommentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComment(this);
}

void KeyMapsParser::CommentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComment(this);
}


antlrcpp::Any KeyMapsParser::CommentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeyMapsVisitor*>(visitor))
    return parserVisitor->visitComment(this);
  else
    return visitor->visitChildren(this);
}

KeyMapsParser::CommentContext* KeyMapsParser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 0, KeyMapsParser::RuleComment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(18);
    match(KeyMapsParser::T__0);
    setState(22);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(19);
        matchWildcard(); 
      }
      setState(24);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(25);
    match(KeyMapsParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
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
  enterRule(_localctx, 2, KeyMapsParser::RuleKey);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(27);
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
  enterRule(_localctx, 4, KeyMapsParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(31);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KeyMapsParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(29);
        match(KeyMapsParser::NUMBER);
        break;
      }

      case KeyMapsParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(30);
        dynamic_cast<ValueContext *>(_localctx)->any = match(KeyMapsParser::T__2);
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
  enterRule(_localctx, 6, KeyMapsParser::RuleDestination);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
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
  enterRule(_localctx, 8, KeyMapsParser::RuleTrigger_condition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(39);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KeyMapsParser::T__2: {
        enterOuterAlt(_localctx, 1);
        setState(35);
        dynamic_cast<Trigger_conditionContext *>(_localctx)->any = match(KeyMapsParser::T__2);
        break;
      }

      case KeyMapsParser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(36);
        dynamic_cast<Trigger_conditionContext *>(_localctx)->press = match(KeyMapsParser::T__3);
        break;
      }

      case KeyMapsParser::T__4: {
        enterOuterAlt(_localctx, 3);
        setState(37);
        dynamic_cast<Trigger_conditionContext *>(_localctx)->release = match(KeyMapsParser::T__4);
        break;
      }

      case KeyMapsParser::T__5: {
        enterOuterAlt(_localctx, 4);
        setState(38);
        dynamic_cast<Trigger_conditionContext *>(_localctx)->pressure = match(KeyMapsParser::T__5);
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
  enterRule(_localctx, 10, KeyMapsParser::RuleTrigger_threshold);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KeyMapsParser::T__6:
      case KeyMapsParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(41);
        dynamic_cast<Trigger_thresholdContext *>(_localctx)->exact = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == KeyMapsParser::T__6

        || _la == KeyMapsParser::T__7)) {
          dynamic_cast<Trigger_thresholdContext *>(_localctx)->exact = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case KeyMapsParser::T__8:
      case KeyMapsParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(42);
        dynamic_cast<Trigger_thresholdContext *>(_localctx)->threshold_up = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == KeyMapsParser::T__8

        || _la == KeyMapsParser::T__9)) {
          dynamic_cast<Trigger_thresholdContext *>(_localctx)->threshold_up = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case KeyMapsParser::T__10:
      case KeyMapsParser::T__11: {
        enterOuterAlt(_localctx, 3);
        setState(43);
        dynamic_cast<Trigger_thresholdContext *>(_localctx)->threshold_down = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == KeyMapsParser::T__10

        || _la == KeyMapsParser::T__11)) {
          dynamic_cast<Trigger_thresholdContext *>(_localctx)->threshold_down = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
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

//----------------- Trigger_actionContext ------------------------------------------------------------------

KeyMapsParser::Trigger_actionContext::Trigger_actionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KeyMapsParser::Trigger_actionContext::getRuleIndex() const {
  return KeyMapsParser::RuleTrigger_action;
}

void KeyMapsParser::Trigger_actionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrigger_action(this);
}

void KeyMapsParser::Trigger_actionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KeyMapsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrigger_action(this);
}


antlrcpp::Any KeyMapsParser::Trigger_actionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KeyMapsVisitor*>(visitor))
    return parserVisitor->visitTrigger_action(this);
  else
    return visitor->visitChildren(this);
}

KeyMapsParser::Trigger_actionContext* KeyMapsParser::trigger_action() {
  Trigger_actionContext *_localctx = _tracker.createInstance<Trigger_actionContext>(_ctx, getState());
  enterRule(_localctx, 12, KeyMapsParser::RuleTrigger_action);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(50);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KeyMapsParser::T__12: {
        enterOuterAlt(_localctx, 1);
        setState(46);
        dynamic_cast<Trigger_actionContext *>(_localctx)->hold = match(KeyMapsParser::T__12);
        break;
      }

      case KeyMapsParser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(47);
        dynamic_cast<Trigger_actionContext *>(_localctx)->press = match(KeyMapsParser::T__3);
        break;
      }

      case KeyMapsParser::T__13: {
        enterOuterAlt(_localctx, 3);
        setState(48);
        dynamic_cast<Trigger_actionContext *>(_localctx)->toggle = match(KeyMapsParser::T__13);
        break;
      }

      case KeyMapsParser::T__4: {
        enterOuterAlt(_localctx, 4);
        setState(49);
        dynamic_cast<Trigger_actionContext *>(_localctx)->release = match(KeyMapsParser::T__4);
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

KeyMapsParser::Trigger_actionContext* KeyMapsParser::KeymapContext::trigger_action() {
  return getRuleContext<KeyMapsParser::Trigger_actionContext>(0);
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
  enterRule(_localctx, 14, KeyMapsParser::RuleKeymap);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    trigger_condition();
    setState(53);
    key();
    setState(54);
    trigger_threshold();
    setState(55);
    value();
    setState(56);
    match(KeyMapsParser::T__14);
    setState(57);
    trigger_action();
    setState(58);
    destination();
    setState(59);
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

std::vector<KeyMapsParser::CommentContext *> KeyMapsParser::KeymapsContext::comment() {
  return getRuleContexts<KeyMapsParser::CommentContext>();
}

KeyMapsParser::CommentContext* KeyMapsParser::KeymapsContext::comment(size_t i) {
  return getRuleContext<KeyMapsParser::CommentContext>(i);
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
  enterRule(_localctx, 16, KeyMapsParser::RuleKeymaps);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(65);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << KeyMapsParser::T__0)
      | (1ULL << KeyMapsParser::T__2)
      | (1ULL << KeyMapsParser::T__3)
      | (1ULL << KeyMapsParser::T__4)
      | (1ULL << KeyMapsParser::T__5))) != 0)) {
      setState(63);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case KeyMapsParser::T__2:
        case KeyMapsParser::T__3:
        case KeyMapsParser::T__4:
        case KeyMapsParser::T__5: {
          setState(61);
          keymap();
          break;
        }

        case KeyMapsParser::T__0: {
          setState(62);
          comment();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(67);
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
  "comment", "key", "value", "destination", "trigger_condition", "trigger_threshold", 
  "trigger_action", "keymap", "keymaps"
};

std::vector<std::string> KeyMapsParser::_literalNames = {
  "", "'['", "']'", "'ANY'", "'PRESS'", "'RELEASE'", "'PRESSURE'", "'IS'", 
  "'='", "'ABOVE'", "'>'", "'BELOW'", "'<'", "'HOLD'", "'TOGGLE'", "'->'", 
  "", "';'"
};

std::vector<std::string> KeyMapsParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "WS", 
  "SEMICOLON", "NUMBER", "IDENTIFIER"
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
    0x3, 0x15, 0x47, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x3, 0x2, 0x3, 
    0x2, 0x7, 0x2, 0x17, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x1a, 0xb, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x22, 
    0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x2a, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x2f, 
    0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x35, 0xa, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x42, 0xa, 0xa, 
    0xc, 0xa, 0xe, 0xa, 0x45, 0xb, 0xa, 0x3, 0xa, 0x3, 0x18, 0x2, 0xb, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x2, 0x5, 0x3, 0x2, 0x9, 0xa, 
    0x3, 0x2, 0xb, 0xc, 0x3, 0x2, 0xd, 0xe, 0x2, 0x49, 0x2, 0x14, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x23, 0x3, 0x2, 0x2, 0x2, 0xa, 0x29, 0x3, 0x2, 0x2, 0x2, 0xc, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x34, 0x3, 0x2, 0x2, 0x2, 0x10, 0x36, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x43, 0x3, 0x2, 0x2, 0x2, 0x14, 0x18, 0x7, 0x3, 
    0x2, 0x2, 0x15, 0x17, 0xb, 0x2, 0x2, 0x2, 0x16, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x17, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x16, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x18, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x4, 0x2, 0x2, 0x1c, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x14, 0x2, 0x2, 0x1e, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x1f, 0x22, 0x7, 0x14, 0x2, 0x2, 0x20, 0x22, 0x7, 0x5, 
    0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x20, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x7, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x7, 0x15, 0x2, 0x2, 
    0x24, 0x9, 0x3, 0x2, 0x2, 0x2, 0x25, 0x2a, 0x7, 0x5, 0x2, 0x2, 0x26, 
    0x2a, 0x7, 0x6, 0x2, 0x2, 0x27, 0x2a, 0x7, 0x7, 0x2, 0x2, 0x28, 0x2a, 
    0x7, 0x8, 0x2, 0x2, 0x29, 0x25, 0x3, 0x2, 0x2, 0x2, 0x29, 0x26, 0x3, 
    0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x28, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2f, 0x9, 0x2, 0x2, 
    0x2, 0x2c, 0x2f, 0x9, 0x3, 0x2, 0x2, 0x2d, 0x2f, 0x9, 0x4, 0x2, 0x2, 
    0x2e, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0xd, 0x3, 0x2, 0x2, 0x2, 0x30, 0x35, 
    0x7, 0xf, 0x2, 0x2, 0x31, 0x35, 0x7, 0x6, 0x2, 0x2, 0x32, 0x35, 0x7, 
    0x10, 0x2, 0x2, 0x33, 0x35, 0x7, 0x7, 0x2, 0x2, 0x34, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x31, 0x3, 0x2, 0x2, 0x2, 0x34, 0x32, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x37, 0x5, 0xa, 0x6, 0x2, 0x37, 0x38, 0x5, 0x4, 0x3, 0x2, 0x38, 
    0x39, 0x5, 0xc, 0x7, 0x2, 0x39, 0x3a, 0x5, 0x6, 0x4, 0x2, 0x3a, 0x3b, 
    0x7, 0x11, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0xe, 0x8, 0x2, 0x3c, 0x3d, 0x5, 
    0x8, 0x5, 0x2, 0x3d, 0x3e, 0x7, 0x13, 0x2, 0x2, 0x3e, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x3f, 0x42, 0x5, 0x10, 0x9, 0x2, 0x40, 0x42, 0x5, 0x2, 0x2, 
    0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 
    0x42, 0x45, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 
    0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x13, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x9, 0x18, 0x21, 0x29, 0x2e, 0x34, 0x41, 0x43, 
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
