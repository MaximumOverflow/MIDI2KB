
// Generated from /home/max/CLionProjects/MIDI2KB/Parsing/Arguments/Grammar/Arguments.g4 by ANTLR 4.8


#include "ArgumentsListener.h"
#include "ArgumentsVisitor.h"

#include "ArgumentsParser.h"


using namespace antlrcpp;
using namespace antlr4;

ArgumentsParser::ArgumentsParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ArgumentsParser::~ArgumentsParser() {
  delete _interpreter;
}

std::string ArgumentsParser::getGrammarFileName() const {
  return "Arguments.g4";
}

const std::vector<std::string>& ArgumentsParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ArgumentsParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- PathContext ------------------------------------------------------------------

ArgumentsParser::PathContext::PathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ArgumentsParser::PathContext::CHAR() {
  return getTokens(ArgumentsParser::CHAR);
}

tree::TerminalNode* ArgumentsParser::PathContext::CHAR(size_t i) {
  return getToken(ArgumentsParser::CHAR, i);
}


size_t ArgumentsParser::PathContext::getRuleIndex() const {
  return ArgumentsParser::RulePath;
}

void ArgumentsParser::PathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArgumentsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPath(this);
}

void ArgumentsParser::PathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArgumentsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPath(this);
}


antlrcpp::Any ArgumentsParser::PathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArgumentsVisitor*>(visitor))
    return parserVisitor->visitPath(this);
  else
    return visitor->visitChildren(this);
}

ArgumentsParser::PathContext* ArgumentsParser::path() {
  PathContext *_localctx = _tracker.createInstance<PathContext>(_ctx, getState());
  enterRule(_localctx, 0, ArgumentsParser::RulePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(13); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(12);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ArgumentsParser::T__0)
        | (1ULL << ArgumentsParser::T__1)
        | (1ULL << ArgumentsParser::CHAR))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(15); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ArgumentsParser::T__0)
      | (1ULL << ArgumentsParser::T__1)
      | (1ULL << ArgumentsParser::CHAR))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

ArgumentsParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ArgumentsParser::IdentifierContext::CHAR() {
  return getTokens(ArgumentsParser::CHAR);
}

tree::TerminalNode* ArgumentsParser::IdentifierContext::CHAR(size_t i) {
  return getToken(ArgumentsParser::CHAR, i);
}

std::vector<tree::TerminalNode *> ArgumentsParser::IdentifierContext::NUMBER() {
  return getTokens(ArgumentsParser::NUMBER);
}

tree::TerminalNode* ArgumentsParser::IdentifierContext::NUMBER(size_t i) {
  return getToken(ArgumentsParser::NUMBER, i);
}


size_t ArgumentsParser::IdentifierContext::getRuleIndex() const {
  return ArgumentsParser::RuleIdentifier;
}

void ArgumentsParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArgumentsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void ArgumentsParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArgumentsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any ArgumentsParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArgumentsVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

ArgumentsParser::IdentifierContext* ArgumentsParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 2, ArgumentsParser::RuleIdentifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(17);
    match(ArgumentsParser::CHAR);
    setState(21);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ArgumentsParser::CHAR

    || _la == ArgumentsParser::NUMBER) {
      setState(18);
      _la = _input->LA(1);
      if (!(_la == ArgumentsParser::CHAR

      || _la == ArgumentsParser::NUMBER)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(23);
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

//----------------- ValueContext ------------------------------------------------------------------

ArgumentsParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ArgumentsParser::PathContext* ArgumentsParser::ValueContext::path() {
  return getRuleContext<ArgumentsParser::PathContext>(0);
}

tree::TerminalNode* ArgumentsParser::ValueContext::NUMBER() {
  return getToken(ArgumentsParser::NUMBER, 0);
}

ArgumentsParser::IdentifierContext* ArgumentsParser::ValueContext::identifier() {
  return getRuleContext<ArgumentsParser::IdentifierContext>(0);
}


size_t ArgumentsParser::ValueContext::getRuleIndex() const {
  return ArgumentsParser::RuleValue;
}

void ArgumentsParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArgumentsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void ArgumentsParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArgumentsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


antlrcpp::Any ArgumentsParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArgumentsVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

ArgumentsParser::ValueContext* ArgumentsParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 4, ArgumentsParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(27);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(24);
      path();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(25);
      match(ArgumentsParser::NUMBER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(26);
      identifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpaceContext ------------------------------------------------------------------

ArgumentsParser::SpaceContext::SpaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ArgumentsParser::SpaceContext::SPACE() {
  return getTokens(ArgumentsParser::SPACE);
}

tree::TerminalNode* ArgumentsParser::SpaceContext::SPACE(size_t i) {
  return getToken(ArgumentsParser::SPACE, i);
}


size_t ArgumentsParser::SpaceContext::getRuleIndex() const {
  return ArgumentsParser::RuleSpace;
}

void ArgumentsParser::SpaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArgumentsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSpace(this);
}

void ArgumentsParser::SpaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArgumentsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSpace(this);
}


antlrcpp::Any ArgumentsParser::SpaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArgumentsVisitor*>(visitor))
    return parserVisitor->visitSpace(this);
  else
    return visitor->visitChildren(this);
}

ArgumentsParser::SpaceContext* ArgumentsParser::space() {
  SpaceContext *_localctx = _tracker.createInstance<SpaceContext>(_ctx, getState());
  enterRule(_localctx, 6, ArgumentsParser::RuleSpace);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(29);
      match(ArgumentsParser::SPACE);
      setState(32); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ArgumentsParser::SPACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgContext ------------------------------------------------------------------

ArgumentsParser::ArgContext::ArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ArgumentsParser::ArgContext::DASH() {
  return getToken(ArgumentsParser::DASH, 0);
}

ArgumentsParser::IdentifierContext* ArgumentsParser::ArgContext::identifier() {
  return getRuleContext<ArgumentsParser::IdentifierContext>(0);
}

ArgumentsParser::SpaceContext* ArgumentsParser::ArgContext::space() {
  return getRuleContext<ArgumentsParser::SpaceContext>(0);
}

ArgumentsParser::ValueContext* ArgumentsParser::ArgContext::value() {
  return getRuleContext<ArgumentsParser::ValueContext>(0);
}


size_t ArgumentsParser::ArgContext::getRuleIndex() const {
  return ArgumentsParser::RuleArg;
}

void ArgumentsParser::ArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArgumentsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg(this);
}

void ArgumentsParser::ArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArgumentsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg(this);
}


antlrcpp::Any ArgumentsParser::ArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArgumentsVisitor*>(visitor))
    return parserVisitor->visitArg(this);
  else
    return visitor->visitChildren(this);
}

ArgumentsParser::ArgContext* ArgumentsParser::arg() {
  ArgContext *_localctx = _tracker.createInstance<ArgContext>(_ctx, getState());
  enterRule(_localctx, 8, ArgumentsParser::RuleArg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    match(ArgumentsParser::DASH);
    setState(35);
    identifier();
    setState(39);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(36);
      space();
      setState(37);
      value();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

ArgumentsParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ArgumentsParser::ArgContext *> ArgumentsParser::ArgsContext::arg() {
  return getRuleContexts<ArgumentsParser::ArgContext>();
}

ArgumentsParser::ArgContext* ArgumentsParser::ArgsContext::arg(size_t i) {
  return getRuleContext<ArgumentsParser::ArgContext>(i);
}

std::vector<ArgumentsParser::SpaceContext *> ArgumentsParser::ArgsContext::space() {
  return getRuleContexts<ArgumentsParser::SpaceContext>();
}

ArgumentsParser::SpaceContext* ArgumentsParser::ArgsContext::space(size_t i) {
  return getRuleContext<ArgumentsParser::SpaceContext>(i);
}


size_t ArgumentsParser::ArgsContext::getRuleIndex() const {
  return ArgumentsParser::RuleArgs;
}

void ArgumentsParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArgumentsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void ArgumentsParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ArgumentsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}


antlrcpp::Any ArgumentsParser::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ArgumentsVisitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

ArgumentsParser::ArgsContext* ArgumentsParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 10, ArgumentsParser::RuleArgs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ArgumentsParser::DASH) {
      setState(41);
      arg();
      setState(42);
      space();
      setState(48);
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
std::vector<dfa::DFA> ArgumentsParser::_decisionToDFA;
atn::PredictionContextCache ArgumentsParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ArgumentsParser::_atn;
std::vector<uint16_t> ArgumentsParser::_serializedATN;

std::vector<std::string> ArgumentsParser::_ruleNames = {
  "path", "identifier", "value", "space", "arg", "args"
};

std::vector<std::string> ArgumentsParser::_literalNames = {
  "", "'.'", "'/'", "'-'", "' '"
};

std::vector<std::string> ArgumentsParser::_symbolicNames = {
  "", "", "", "DASH", "SPACE", "CHAR", "NUMBER"
};

dfa::Vocabulary ArgumentsParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ArgumentsParser::_tokenNames;

ArgumentsParser::Initializer::Initializer() {
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
    0x3, 0x8, 0x34, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x3, 
    0x2, 0x6, 0x2, 0x10, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x11, 0x3, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0x16, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x19, 0xb, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x1e, 0xa, 0x4, 0x3, 0x5, 0x6, 0x5, 
    0x21, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x22, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x2a, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x7, 0x7, 0x2f, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x32, 0xb, 0x7, 0x3, 
    0x7, 0x2, 0x2, 0x8, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0x2, 0x4, 0x4, 0x2, 
    0x3, 0x4, 0x7, 0x7, 0x3, 0x2, 0x7, 0x8, 0x2, 0x34, 0x2, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x20, 0x3, 0x2, 0x2, 0x2, 0xa, 0x24, 0x3, 0x2, 0x2, 0x2, 0xc, 0x30, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x10, 0x9, 0x2, 0x2, 0x2, 0xf, 0xe, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x11, 0x3, 0x2, 0x2, 0x2, 0x11, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x11, 0x12, 0x3, 0x2, 0x2, 0x2, 0x12, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x13, 0x17, 0x7, 0x7, 0x2, 0x2, 0x14, 0x16, 0x9, 0x3, 0x2, 0x2, 0x15, 
    0x14, 0x3, 0x2, 0x2, 0x2, 0x16, 0x19, 0x3, 0x2, 0x2, 0x2, 0x17, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x3, 0x2, 0x2, 0x2, 0x18, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x19, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1e, 0x5, 0x2, 
    0x2, 0x2, 0x1b, 0x1e, 0x7, 0x8, 0x2, 0x2, 0x1c, 0x1e, 0x5, 0x4, 0x3, 
    0x2, 0x1d, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x7, 0x3, 0x2, 0x2, 0x2, 0x1f, 
    0x21, 0x7, 0x6, 0x2, 0x2, 0x20, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x23, 0x9, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x7, 0x5, 
    0x2, 0x2, 0x25, 0x29, 0x5, 0x4, 0x3, 0x2, 0x26, 0x27, 0x5, 0x8, 0x5, 
    0x2, 0x27, 0x28, 0x5, 0x6, 0x4, 0x2, 0x28, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0x29, 0x26, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x5, 0xa, 0x6, 0x2, 0x2c, 0x2d, 
    0x5, 0x8, 0x5, 0x2, 0x2d, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x2f, 0x32, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 0x31, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 0x2, 0x8, 0x11, 0x17, 0x1d, 0x22, 0x29, 
    0x30, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ArgumentsParser::Initializer ArgumentsParser::_init;
