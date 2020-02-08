
// Generated from /home/max/CLionProjects/MIDI2KB/Parsing/Commands/Grammar/Commands.g4 by ANTLR 4.8


#include "CommandsListener.h"
#include "CommandsVisitor.h"

#include "CommandsParser.h"


using namespace antlrcpp;
using namespace antlr4;

CommandsParser::CommandsParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

CommandsParser::~CommandsParser() {
  delete _interpreter;
}

std::string CommandsParser::getGrammarFileName() const {
  return "Commands.g4";
}

const std::vector<std::string>& CommandsParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& CommandsParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- PathContext ------------------------------------------------------------------

CommandsParser::PathContext::PathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CommandsParser::PathContext::TEXT() {
  return getTokens(CommandsParser::TEXT);
}

tree::TerminalNode* CommandsParser::PathContext::TEXT(size_t i) {
  return getToken(CommandsParser::TEXT, i);
}

std::vector<tree::TerminalNode *> CommandsParser::PathContext::SPACE() {
  return getTokens(CommandsParser::SPACE);
}

tree::TerminalNode* CommandsParser::PathContext::SPACE(size_t i) {
  return getToken(CommandsParser::SPACE, i);
}


size_t CommandsParser::PathContext::getRuleIndex() const {
  return CommandsParser::RulePath;
}

void CommandsParser::PathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPath(this);
}

void CommandsParser::PathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPath(this);
}


antlrcpp::Any CommandsParser::PathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandsVisitor*>(visitor))
    return parserVisitor->visitPath(this);
  else
    return visitor->visitChildren(this);
}

CommandsParser::PathContext* CommandsParser::path() {
  PathContext *_localctx = _tracker.createInstance<PathContext>(_ctx, getState());
  enterRule(_localctx, 0, CommandsParser::RulePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(23); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(22);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << CommandsParser::T__0)
        | (1ULL << CommandsParser::T__1)
        | (1ULL << CommandsParser::SPACE)
        | (1ULL << CommandsParser::TEXT))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(25); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CommandsParser::T__0)
      | (1ULL << CommandsParser::T__1)
      | (1ULL << CommandsParser::SPACE)
      | (1ULL << CommandsParser::TEXT))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommandContext ------------------------------------------------------------------

CommandsParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CommandsParser::Use_commandContext* CommandsParser::CommandContext::use_command() {
  return getRuleContext<CommandsParser::Use_commandContext>(0);
}

CommandsParser::Help_commandContext* CommandsParser::CommandContext::help_command() {
  return getRuleContext<CommandsParser::Help_commandContext>(0);
}

CommandsParser::Quit_commandContext* CommandsParser::CommandContext::quit_command() {
  return getRuleContext<CommandsParser::Quit_commandContext>(0);
}

CommandsParser::Load_commandContext* CommandsParser::CommandContext::load_command() {
  return getRuleContext<CommandsParser::Load_commandContext>(0);
}

CommandsParser::List_commandContext* CommandsParser::CommandContext::list_command() {
  return getRuleContext<CommandsParser::List_commandContext>(0);
}

CommandsParser::Clear_commandContext* CommandsParser::CommandContext::clear_command() {
  return getRuleContext<CommandsParser::Clear_commandContext>(0);
}

CommandsParser::Reload_commandContext* CommandsParser::CommandContext::reload_command() {
  return getRuleContext<CommandsParser::Reload_commandContext>(0);
}

CommandsParser::Change_commandContext* CommandsParser::CommandContext::change_command() {
  return getRuleContext<CommandsParser::Change_commandContext>(0);
}

CommandsParser::Toggle_commandContext* CommandsParser::CommandContext::toggle_command() {
  return getRuleContext<CommandsParser::Toggle_commandContext>(0);
}


size_t CommandsParser::CommandContext::getRuleIndex() const {
  return CommandsParser::RuleCommand;
}

void CommandsParser::CommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand(this);
}

void CommandsParser::CommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand(this);
}


antlrcpp::Any CommandsParser::CommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandsVisitor*>(visitor))
    return parserVisitor->visitCommand(this);
  else
    return visitor->visitChildren(this);
}

CommandsParser::CommandContext* CommandsParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 2, CommandsParser::RuleCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(36);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CommandsParser::T__20: {
        enterOuterAlt(_localctx, 1);
        setState(27);
        use_command();
        break;
      }

      case CommandsParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(28);
        help_command();
        break;
      }

      case CommandsParser::T__2:
      case CommandsParser::T__3:
      case CommandsParser::T__4: {
        enterOuterAlt(_localctx, 3);
        setState(29);
        quit_command();
        break;
      }

      case CommandsParser::T__6: {
        enterOuterAlt(_localctx, 4);
        setState(30);
        load_command();
        break;
      }

      case CommandsParser::T__7: {
        enterOuterAlt(_localctx, 5);
        setState(31);
        list_command();
        break;
      }

      case CommandsParser::T__10: {
        enterOuterAlt(_localctx, 6);
        setState(32);
        clear_command();
        break;
      }

      case CommandsParser::T__12: {
        enterOuterAlt(_localctx, 7);
        setState(33);
        reload_command();
        break;
      }

      case CommandsParser::T__13: {
        enterOuterAlt(_localctx, 8);
        setState(34);
        change_command();
        break;
      }

      case CommandsParser::T__15: {
        enterOuterAlt(_localctx, 9);
        setState(35);
        toggle_command();
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

//----------------- Quit_commandContext ------------------------------------------------------------------

CommandsParser::Quit_commandContext::Quit_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CommandsParser::Quit_commandContext::getRuleIndex() const {
  return CommandsParser::RuleQuit_command;
}

void CommandsParser::Quit_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuit_command(this);
}

void CommandsParser::Quit_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuit_command(this);
}


antlrcpp::Any CommandsParser::Quit_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandsVisitor*>(visitor))
    return parserVisitor->visitQuit_command(this);
  else
    return visitor->visitChildren(this);
}

CommandsParser::Quit_commandContext* CommandsParser::quit_command() {
  Quit_commandContext *_localctx = _tracker.createInstance<Quit_commandContext>(_ctx, getState());
  enterRule(_localctx, 4, CommandsParser::RuleQuit_command);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << CommandsParser::T__2)
      | (1ULL << CommandsParser::T__3)
      | (1ULL << CommandsParser::T__4))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Help_commandContext ------------------------------------------------------------------

CommandsParser::Help_commandContext::Help_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CommandsParser::Help_commandContext::getRuleIndex() const {
  return CommandsParser::RuleHelp_command;
}

void CommandsParser::Help_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHelp_command(this);
}

void CommandsParser::Help_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHelp_command(this);
}


antlrcpp::Any CommandsParser::Help_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandsVisitor*>(visitor))
    return parserVisitor->visitHelp_command(this);
  else
    return visitor->visitChildren(this);
}

CommandsParser::Help_commandContext* CommandsParser::help_command() {
  Help_commandContext *_localctx = _tracker.createInstance<Help_commandContext>(_ctx, getState());
  enterRule(_localctx, 6, CommandsParser::RuleHelp_command);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    match(CommandsParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Load_commandContext ------------------------------------------------------------------

CommandsParser::Load_commandContext::Load_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CommandsParser::PathContext* CommandsParser::Load_commandContext::path() {
  return getRuleContext<CommandsParser::PathContext>(0);
}


size_t CommandsParser::Load_commandContext::getRuleIndex() const {
  return CommandsParser::RuleLoad_command;
}

void CommandsParser::Load_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoad_command(this);
}

void CommandsParser::Load_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoad_command(this);
}


antlrcpp::Any CommandsParser::Load_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandsVisitor*>(visitor))
    return parserVisitor->visitLoad_command(this);
  else
    return visitor->visitChildren(this);
}

CommandsParser::Load_commandContext* CommandsParser::load_command() {
  Load_commandContext *_localctx = _tracker.createInstance<Load_commandContext>(_ctx, getState());
  enterRule(_localctx, 8, CommandsParser::RuleLoad_command);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    match(CommandsParser::T__6);
    setState(43);
    path();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_commandContext ------------------------------------------------------------------

CommandsParser::List_commandContext::List_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CommandsParser::List_commandContext::getRuleIndex() const {
  return CommandsParser::RuleList_command;
}

void CommandsParser::List_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList_command(this);
}

void CommandsParser::List_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList_command(this);
}


antlrcpp::Any CommandsParser::List_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandsVisitor*>(visitor))
    return parserVisitor->visitList_command(this);
  else
    return visitor->visitChildren(this);
}

CommandsParser::List_commandContext* CommandsParser::list_command() {
  List_commandContext *_localctx = _tracker.createInstance<List_commandContext>(_ctx, getState());
  enterRule(_localctx, 10, CommandsParser::RuleList_command);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    match(CommandsParser::T__7);
    setState(48);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CommandsParser::T__8: {
        setState(46);
        dynamic_cast<List_commandContext *>(_localctx)->devices = match(CommandsParser::T__8);
        break;
      }

      case CommandsParser::T__9: {
        setState(47);
        dynamic_cast<List_commandContext *>(_localctx)->keymaps = match(CommandsParser::T__9);
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

//----------------- Clear_commandContext ------------------------------------------------------------------

CommandsParser::Clear_commandContext::Clear_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CommandsParser::Clear_commandContext::getRuleIndex() const {
  return CommandsParser::RuleClear_command;
}

void CommandsParser::Clear_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClear_command(this);
}

void CommandsParser::Clear_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClear_command(this);
}


antlrcpp::Any CommandsParser::Clear_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandsVisitor*>(visitor))
    return parserVisitor->visitClear_command(this);
  else
    return visitor->visitChildren(this);
}

CommandsParser::Clear_commandContext* CommandsParser::clear_command() {
  Clear_commandContext *_localctx = _tracker.createInstance<Clear_commandContext>(_ctx, getState());
  enterRule(_localctx, 12, CommandsParser::RuleClear_command);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(CommandsParser::T__10);
    setState(53);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CommandsParser::T__9: {
        setState(51);
        dynamic_cast<Clear_commandContext *>(_localctx)->keymaps = match(CommandsParser::T__9);
        break;
      }

      case CommandsParser::T__11: {
        setState(52);
        dynamic_cast<Clear_commandContext *>(_localctx)->console = match(CommandsParser::T__11);
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

//----------------- Reload_commandContext ------------------------------------------------------------------

CommandsParser::Reload_commandContext::Reload_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CommandsParser::Reload_commandContext::getRuleIndex() const {
  return CommandsParser::RuleReload_command;
}

void CommandsParser::Reload_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReload_command(this);
}

void CommandsParser::Reload_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReload_command(this);
}


antlrcpp::Any CommandsParser::Reload_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandsVisitor*>(visitor))
    return parserVisitor->visitReload_command(this);
  else
    return visitor->visitChildren(this);
}

CommandsParser::Reload_commandContext* CommandsParser::reload_command() {
  Reload_commandContext *_localctx = _tracker.createInstance<Reload_commandContext>(_ctx, getState());
  enterRule(_localctx, 14, CommandsParser::RuleReload_command);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(CommandsParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Change_commandContext ------------------------------------------------------------------

CommandsParser::Change_commandContext::Change_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CommandsParser::Change_commandContext::getRuleIndex() const {
  return CommandsParser::RuleChange_command;
}

void CommandsParser::Change_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChange_command(this);
}

void CommandsParser::Change_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChange_command(this);
}


antlrcpp::Any CommandsParser::Change_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandsVisitor*>(visitor))
    return parserVisitor->visitChange_command(this);
  else
    return visitor->visitChildren(this);
}

CommandsParser::Change_commandContext* CommandsParser::change_command() {
  Change_commandContext *_localctx = _tracker.createInstance<Change_commandContext>(_ctx, getState());
  enterRule(_localctx, 16, CommandsParser::RuleChange_command);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(CommandsParser::T__13);

    setState(58);
    dynamic_cast<Change_commandContext *>(_localctx)->device = match(CommandsParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Toggle_commandContext ------------------------------------------------------------------

CommandsParser::Toggle_commandContext::Toggle_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CommandsParser::Toggle_commandContext::getRuleIndex() const {
  return CommandsParser::RuleToggle_command;
}

void CommandsParser::Toggle_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToggle_command(this);
}

void CommandsParser::Toggle_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToggle_command(this);
}


antlrcpp::Any CommandsParser::Toggle_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandsVisitor*>(visitor))
    return parserVisitor->visitToggle_command(this);
  else
    return visitor->visitChildren(this);
}

CommandsParser::Toggle_commandContext* CommandsParser::toggle_command() {
  Toggle_commandContext *_localctx = _tracker.createInstance<Toggle_commandContext>(_ctx, getState());
  enterRule(_localctx, 18, CommandsParser::RuleToggle_command);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(CommandsParser::T__15);
    setState(63);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CommandsParser::T__16: {
        setState(61);
        dynamic_cast<Toggle_commandContext *>(_localctx)->log = match(CommandsParser::T__16);
        break;
      }

      case CommandsParser::T__17: {
        setState(62);
        dynamic_cast<Toggle_commandContext *>(_localctx)->keymap = match(CommandsParser::T__17);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(67);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CommandsParser::T__18: {
        setState(65);
        dynamic_cast<Toggle_commandContext *>(_localctx)->on = match(CommandsParser::T__18);
        break;
      }

      case CommandsParser::T__19: {
        setState(66);
        dynamic_cast<Toggle_commandContext *>(_localctx)->off = match(CommandsParser::T__19);
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

//----------------- Use_commandContext ------------------------------------------------------------------

CommandsParser::Use_commandContext::Use_commandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CommandsParser::PathContext* CommandsParser::Use_commandContext::path() {
  return getRuleContext<CommandsParser::PathContext>(0);
}

tree::TerminalNode* CommandsParser::Use_commandContext::NUMBER() {
  return getToken(CommandsParser::NUMBER, 0);
}


size_t CommandsParser::Use_commandContext::getRuleIndex() const {
  return CommandsParser::RuleUse_command;
}

void CommandsParser::Use_commandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUse_command(this);
}

void CommandsParser::Use_commandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CommandsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUse_command(this);
}


antlrcpp::Any CommandsParser::Use_commandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CommandsVisitor*>(visitor))
    return parserVisitor->visitUse_command(this);
  else
    return visitor->visitChildren(this);
}

CommandsParser::Use_commandContext* CommandsParser::use_command() {
  Use_commandContext *_localctx = _tracker.createInstance<Use_commandContext>(_ctx, getState());
  enterRule(_localctx, 20, CommandsParser::RuleUse_command);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(CommandsParser::T__20);
    setState(74);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CommandsParser::T__14: {
        setState(70);
        dynamic_cast<Use_commandContext *>(_localctx)->device = match(CommandsParser::T__14);
        setState(71);
        dynamic_cast<Use_commandContext *>(_localctx)->num = match(CommandsParser::NUMBER);
        break;
      }

      case CommandsParser::T__17: {
        setState(72);
        dynamic_cast<Use_commandContext *>(_localctx)->keymap = match(CommandsParser::T__17);
        setState(73);
        path();
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

// Static vars and initialization.
std::vector<dfa::DFA> CommandsParser::_decisionToDFA;
atn::PredictionContextCache CommandsParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN CommandsParser::_atn;
std::vector<uint16_t> CommandsParser::_serializedATN;

std::vector<std::string> CommandsParser::_ruleNames = {
  "path", "command", "quit_command", "help_command", "load_command", "list_command", 
  "clear_command", "reload_command", "change_command", "toggle_command", 
  "use_command"
};

std::vector<std::string> CommandsParser::_literalNames = {
  "", "'.'", "'/'", "'quit'", "'exit'", "'close'", "'help'", "'load'", "'list'", 
  "'devices'", "'keymaps'", "'clear'", "'console'", "'reload'", "'change'", 
  "'device'", "'toggle'", "'logging'", "'keymap'", "'on'", "'off'", "'use'", 
  "' '"
};

std::vector<std::string> CommandsParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "SPACE", "LETTER", "NUMBER", "TEXT"
};

dfa::Vocabulary CommandsParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> CommandsParser::_tokenNames;

CommandsParser::Initializer::Initializer() {
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
    0x3, 0x1b, 0x4f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x3, 0x2, 0x6, 0x2, 0x1a, 0xa, 0x2, 0xd, 0x2, 
    0xe, 0x2, 0x1b, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x27, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x33, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0x38, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x42, 0xa, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x5, 0xb, 0x46, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x4d, 0xa, 0xc, 0x3, 0xc, 0x2, 0x2, 0xd, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x2, 0x4, 
    0x5, 0x2, 0x3, 0x4, 0x18, 0x18, 0x1b, 0x1b, 0x3, 0x2, 0x5, 0x7, 0x2, 
    0x51, 0x2, 0x19, 0x3, 0x2, 0x2, 0x2, 0x4, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x28, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2a, 0x3, 0x2, 0x2, 0x2, 0xa, 0x2c, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xe, 0x34, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x39, 0x3, 0x2, 0x2, 0x2, 0x12, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x16, 0x47, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x1a, 0x9, 0x2, 0x2, 0x2, 0x19, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 
    0x3, 0x2, 0x2, 0x2, 0x1c, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x27, 0x5, 
    0x16, 0xc, 0x2, 0x1e, 0x27, 0x5, 0x8, 0x5, 0x2, 0x1f, 0x27, 0x5, 0x6, 
    0x4, 0x2, 0x20, 0x27, 0x5, 0xa, 0x6, 0x2, 0x21, 0x27, 0x5, 0xc, 0x7, 
    0x2, 0x22, 0x27, 0x5, 0xe, 0x8, 0x2, 0x23, 0x27, 0x5, 0x10, 0x9, 0x2, 
    0x24, 0x27, 0x5, 0x12, 0xa, 0x2, 0x25, 0x27, 0x5, 0x14, 0xb, 0x2, 0x26, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x26, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x26, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0x26, 0x20, 0x3, 0x2, 0x2, 0x2, 0x26, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x22, 0x3, 0x2, 0x2, 0x2, 0x26, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x27, 0x5, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x9, 0x3, 0x2, 0x2, 
    0x29, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x8, 0x2, 0x2, 0x2b, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x9, 0x2, 0x2, 0x2d, 0x2e, 
    0x5, 0x2, 0x2, 0x2, 0x2e, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x32, 0x7, 
    0xa, 0x2, 0x2, 0x30, 0x33, 0x7, 0xb, 0x2, 0x2, 0x31, 0x33, 0x7, 0xc, 
    0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0xd, 0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 0x7, 0xd, 0x2, 0x2, 
    0x35, 0x38, 0x7, 0xc, 0x2, 0x2, 0x36, 0x38, 0x7, 0xe, 0x2, 0x2, 0x37, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x7, 0xf, 0x2, 0x2, 0x3a, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x10, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x11, 
    0x2, 0x2, 0x3d, 0x13, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x41, 0x7, 0x12, 0x2, 
    0x2, 0x3f, 0x42, 0x7, 0x13, 0x2, 0x2, 0x40, 0x42, 0x7, 0x14, 0x2, 0x2, 
    0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x43, 0x46, 0x7, 0x15, 0x2, 0x2, 0x44, 0x46, 
    0x7, 0x16, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x44, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x15, 0x3, 0x2, 0x2, 0x2, 0x47, 0x4c, 0x7, 0x17, 
    0x2, 0x2, 0x48, 0x49, 0x7, 0x11, 0x2, 0x2, 0x49, 0x4d, 0x7, 0x1a, 0x2, 
    0x2, 0x4a, 0x4b, 0x7, 0x14, 0x2, 0x2, 0x4b, 0x4d, 0x5, 0x2, 0x2, 0x2, 
    0x4c, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4d, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x9, 0x1b, 0x26, 0x32, 0x37, 0x41, 0x45, 0x4c, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

CommandsParser::Initializer CommandsParser::_init;
