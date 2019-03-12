
// Generated from ./sprint/sprint.g4 by ANTLR 4.7.2


#include "sprintListener.h"

#include "sprintParser.h"


using namespace antlrcpp;
using namespace antlr4;

sprintParser::sprintParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

sprintParser::~sprintParser() {
  delete _interpreter;
}

std::string sprintParser::getGrammarFileName() const {
  return "sprint.g4";
}

const std::vector<std::string>& sprintParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& sprintParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- PrgContext ------------------------------------------------------------------

sprintParser::PrgContext::PrgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sprintParser::FuncDeclarationContext *> sprintParser::PrgContext::funcDeclaration() {
  return getRuleContexts<sprintParser::FuncDeclarationContext>();
}

sprintParser::FuncDeclarationContext* sprintParser::PrgContext::funcDeclaration(size_t i) {
  return getRuleContext<sprintParser::FuncDeclarationContext>(i);
}


size_t sprintParser::PrgContext::getRuleIndex() const {
  return sprintParser::RulePrg;
}

void sprintParser::PrgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrg(this);
}

void sprintParser::PrgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrg(this);
}

sprintParser::PrgContext* sprintParser::prg() {
  PrgContext *_localctx = _tracker.createInstance<PrgContext>(_ctx, getState());
  enterRule(_localctx, 0, sprintParser::RulePrg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(21); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(20);
      funcDeclaration();
      setState(23); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sprintParser::T__8)
      | (1ULL << sprintParser::T__9)
      | (1ULL << sprintParser::T__10))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDeclarationContext ------------------------------------------------------------------

sprintParser::FuncDeclarationContext::FuncDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sprintParser::TypeContext* sprintParser::FuncDeclarationContext::type() {
  return getRuleContext<sprintParser::TypeContext>(0);
}

tree::TerminalNode* sprintParser::FuncDeclarationContext::ID() {
  return getToken(sprintParser::ID, 0);
}

sprintParser::BlockContext* sprintParser::FuncDeclarationContext::block() {
  return getRuleContext<sprintParser::BlockContext>(0);
}

sprintParser::FormalParametersContext* sprintParser::FuncDeclarationContext::formalParameters() {
  return getRuleContext<sprintParser::FormalParametersContext>(0);
}


size_t sprintParser::FuncDeclarationContext::getRuleIndex() const {
  return sprintParser::RuleFuncDeclaration;
}

void sprintParser::FuncDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDeclaration(this);
}

void sprintParser::FuncDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDeclaration(this);
}

sprintParser::FuncDeclarationContext* sprintParser::funcDeclaration() {
  FuncDeclarationContext *_localctx = _tracker.createInstance<FuncDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, sprintParser::RuleFuncDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(25);
    type();
    setState(26);
    match(sprintParser::ID);
    setState(27);
    match(sprintParser::T__0);
    setState(29);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sprintParser::T__8)
      | (1ULL << sprintParser::T__9)
      | (1ULL << sprintParser::T__10))) != 0)) {
      setState(28);
      formalParameters();
    }
    setState(31);
    match(sprintParser::T__1);
    setState(32);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParametersContext ------------------------------------------------------------------

sprintParser::FormalParametersContext::FormalParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sprintParser::ParameterContext *> sprintParser::FormalParametersContext::parameter() {
  return getRuleContexts<sprintParser::ParameterContext>();
}

sprintParser::ParameterContext* sprintParser::FormalParametersContext::parameter(size_t i) {
  return getRuleContext<sprintParser::ParameterContext>(i);
}


size_t sprintParser::FormalParametersContext::getRuleIndex() const {
  return sprintParser::RuleFormalParameters;
}

void sprintParser::FormalParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameters(this);
}

void sprintParser::FormalParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameters(this);
}

sprintParser::FormalParametersContext* sprintParser::formalParameters() {
  FormalParametersContext *_localctx = _tracker.createInstance<FormalParametersContext>(_ctx, getState());
  enterRule(_localctx, 4, sprintParser::RuleFormalParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    parameter();
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sprintParser::T__2) {
      setState(35);
      match(sprintParser::T__2);
      setState(36);
      parameter();
      setState(41);
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

//----------------- ParameterContext ------------------------------------------------------------------

sprintParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sprintParser::TypeContext* sprintParser::ParameterContext::type() {
  return getRuleContext<sprintParser::TypeContext>(0);
}

tree::TerminalNode* sprintParser::ParameterContext::ID() {
  return getToken(sprintParser::ID, 0);
}


size_t sprintParser::ParameterContext::getRuleIndex() const {
  return sprintParser::RuleParameter;
}

void sprintParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void sprintParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}

sprintParser::ParameterContext* sprintParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 6, sprintParser::RuleParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    type();
    setState(43);
    match(sprintParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

sprintParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sprintParser::StatementContext *> sprintParser::BlockContext::statement() {
  return getRuleContexts<sprintParser::StatementContext>();
}

sprintParser::StatementContext* sprintParser::BlockContext::statement(size_t i) {
  return getRuleContext<sprintParser::StatementContext>(i);
}


size_t sprintParser::BlockContext::getRuleIndex() const {
  return sprintParser::RuleBlock;
}

void sprintParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void sprintParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

sprintParser::BlockContext* sprintParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 8, sprintParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    match(sprintParser::T__3);
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sprintParser::T__3)
      | (1ULL << sprintParser::T__5)
      | (1ULL << sprintParser::T__8)
      | (1ULL << sprintParser::T__9)
      | (1ULL << sprintParser::T__10))) != 0)) {
      setState(46);
      statement();
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(52);
    match(sprintParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

sprintParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sprintParser::BlockContext* sprintParser::StatementContext::block() {
  return getRuleContext<sprintParser::BlockContext>(0);
}

sprintParser::DeclStatementContext* sprintParser::StatementContext::declStatement() {
  return getRuleContext<sprintParser::DeclStatementContext>(0);
}

sprintParser::RetStatementContext* sprintParser::StatementContext::retStatement() {
  return getRuleContext<sprintParser::RetStatementContext>(0);
}


size_t sprintParser::StatementContext::getRuleIndex() const {
  return sprintParser::RuleStatement;
}

void sprintParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void sprintParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

sprintParser::StatementContext* sprintParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 10, sprintParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(57);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sprintParser::T__3: {
        enterOuterAlt(_localctx, 1);
        setState(54);
        block();
        break;
      }

      case sprintParser::T__8:
      case sprintParser::T__9:
      case sprintParser::T__10: {
        enterOuterAlt(_localctx, 2);
        setState(55);
        declStatement();
        break;
      }

      case sprintParser::T__5: {
        enterOuterAlt(_localctx, 3);
        setState(56);
        retStatement();
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

//----------------- RetStatementContext ------------------------------------------------------------------

sprintParser::RetStatementContext::RetStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* sprintParser::RetStatementContext::ID() {
  return getToken(sprintParser::ID, 0);
}

tree::TerminalNode* sprintParser::RetStatementContext::INT() {
  return getToken(sprintParser::INT, 0);
}


size_t sprintParser::RetStatementContext::getRuleIndex() const {
  return sprintParser::RuleRetStatement;
}

void sprintParser::RetStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRetStatement(this);
}

void sprintParser::RetStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRetStatement(this);
}

sprintParser::RetStatementContext* sprintParser::retStatement() {
  RetStatementContext *_localctx = _tracker.createInstance<RetStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, sprintParser::RuleRetStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    match(sprintParser::T__5);
    setState(60);
    _la = _input->LA(1);
    if (!(_la == sprintParser::ID

    || _la == sprintParser::INT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(61);
    match(sprintParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclStatementContext ------------------------------------------------------------------

sprintParser::DeclStatementContext::DeclStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sprintParser::TypeContext* sprintParser::DeclStatementContext::type() {
  return getRuleContext<sprintParser::TypeContext>(0);
}

std::vector<sprintParser::VarDeclarationContext *> sprintParser::DeclStatementContext::varDeclaration() {
  return getRuleContexts<sprintParser::VarDeclarationContext>();
}

sprintParser::VarDeclarationContext* sprintParser::DeclStatementContext::varDeclaration(size_t i) {
  return getRuleContext<sprintParser::VarDeclarationContext>(i);
}


size_t sprintParser::DeclStatementContext::getRuleIndex() const {
  return sprintParser::RuleDeclStatement;
}

void sprintParser::DeclStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclStatement(this);
}

void sprintParser::DeclStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclStatement(this);
}

sprintParser::DeclStatementContext* sprintParser::declStatement() {
  DeclStatementContext *_localctx = _tracker.createInstance<DeclStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, sprintParser::RuleDeclStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    type();
    setState(64);
    varDeclaration();
    setState(69);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sprintParser::T__2) {
      setState(65);
      match(sprintParser::T__2);
      setState(66);
      varDeclaration();
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(72);
    match(sprintParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclarationContext ------------------------------------------------------------------

sprintParser::VarDeclarationContext::VarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> sprintParser::VarDeclarationContext::ID() {
  return getTokens(sprintParser::ID);
}

tree::TerminalNode* sprintParser::VarDeclarationContext::ID(size_t i) {
  return getToken(sprintParser::ID, i);
}

tree::TerminalNode* sprintParser::VarDeclarationContext::INT() {
  return getToken(sprintParser::INT, 0);
}

tree::TerminalNode* sprintParser::VarDeclarationContext::CHAR() {
  return getToken(sprintParser::CHAR, 0);
}


size_t sprintParser::VarDeclarationContext::getRuleIndex() const {
  return sprintParser::RuleVarDeclaration;
}

void sprintParser::VarDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDeclaration(this);
}

void sprintParser::VarDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDeclaration(this);
}

sprintParser::VarDeclarationContext* sprintParser::varDeclaration() {
  VarDeclarationContext *_localctx = _tracker.createInstance<VarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, sprintParser::RuleVarDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(sprintParser::ID);
    setState(77);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sprintParser::T__7) {
      setState(75);
      match(sprintParser::T__7);
      setState(76);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << sprintParser::ID)
        | (1ULL << sprintParser::INT)
        | (1ULL << sprintParser::CHAR))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
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

//----------------- TypeContext ------------------------------------------------------------------

sprintParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sprintParser::TypeContext::getRuleIndex() const {
  return sprintParser::RuleType;
}

void sprintParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void sprintParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<sprintListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

sprintParser::TypeContext* sprintParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 18, sprintParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sprintParser::T__8)
      | (1ULL << sprintParser::T__9)
      | (1ULL << sprintParser::T__10))) != 0))) {
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

// Static vars and initialization.
std::vector<dfa::DFA> sprintParser::_decisionToDFA;
atn::PredictionContextCache sprintParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN sprintParser::_atn;
std::vector<uint16_t> sprintParser::_serializedATN;

std::vector<std::string> sprintParser::_ruleNames = {
  "prg", "funcDeclaration", "formalParameters", "parameter", "block", "statement", 
  "retStatement", "declStatement", "varDeclaration", "type"
};

std::vector<std::string> sprintParser::_literalNames = {
  "", "'('", "')'", "','", "'{'", "'}'", "'return'", "';'", "'='", "'char'", 
  "'int'", "'void'", "", "", "", "", "", "'_'"
};

std::vector<std::string> sprintParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "ID", "INT", "CHAR", "LETTER", 
  "DIGIT", "UNDER_SCORE", "INCLUDE", "WS"
};

dfa::Vocabulary sprintParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> sprintParser::_tokenNames;

sprintParser::Initializer::Initializer() {
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
    0x3, 0x15, 0x54, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x3, 0x2, 0x6, 0x2, 0x18, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x19, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x20, 0xa, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x28, 0xa, 
    0x4, 0xc, 0x4, 0xe, 0x4, 0x2b, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x32, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x35, 
    0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x3c, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x46, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 
    0x49, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 
    0xa, 0x50, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x2, 0x2, 0xc, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x2, 0x5, 0x3, 0x2, 
    0xe, 0xf, 0x3, 0x2, 0xe, 0x10, 0x3, 0x2, 0xb, 0xd, 0x2, 0x51, 0x2, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x2c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x12, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x14, 0x51, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0x18, 0x5, 0x4, 0x3, 0x2, 0x17, 0x16, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x19, 0x3, 0x2, 0x2, 0x2, 0x19, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x19, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x1b, 0x1c, 0x5, 0x14, 0xb, 0x2, 0x1c, 0x1d, 0x7, 0xe, 0x2, 0x2, 
    0x1d, 0x1f, 0x7, 0x3, 0x2, 0x2, 0x1e, 0x20, 0x5, 0x6, 0x4, 0x2, 0x1f, 
    0x1e, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0x4, 0x2, 0x2, 0x22, 0x23, 0x5, 
    0xa, 0x6, 0x2, 0x23, 0x5, 0x3, 0x2, 0x2, 0x2, 0x24, 0x29, 0x5, 0x8, 
    0x5, 0x2, 0x25, 0x26, 0x7, 0x5, 0x2, 0x2, 0x26, 0x28, 0x5, 0x8, 0x5, 
    0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 
    0x5, 0x14, 0xb, 0x2, 0x2d, 0x2e, 0x7, 0xe, 0x2, 0x2, 0x2e, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x2f, 0x33, 0x7, 0x6, 0x2, 0x2, 0x30, 0x32, 0x5, 0xc, 
    0x7, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 
    0x34, 0x36, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x37, 0x7, 0x7, 0x2, 0x2, 0x37, 0xb, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3c, 
    0x5, 0xa, 0x6, 0x2, 0x39, 0x3c, 0x5, 0x10, 0x9, 0x2, 0x3a, 0x3c, 0x5, 
    0xe, 0x8, 0x2, 0x3b, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x3b, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x3d, 0x3e, 0x7, 0x8, 0x2, 0x2, 0x3e, 0x3f, 0x9, 0x2, 0x2, 0x2, 
    0x3f, 0x40, 0x7, 0x9, 0x2, 0x2, 0x40, 0xf, 0x3, 0x2, 0x2, 0x2, 0x41, 
    0x42, 0x5, 0x14, 0xb, 0x2, 0x42, 0x47, 0x5, 0x12, 0xa, 0x2, 0x43, 0x44, 
    0x7, 0x5, 0x2, 0x2, 0x44, 0x46, 0x5, 0x12, 0xa, 0x2, 0x45, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x49, 0x3, 0x2, 0x2, 0x2, 0x47, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x47, 0x48, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0x9, 0x2, 0x2, 
    0x4b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4f, 0x7, 0xe, 0x2, 0x2, 0x4d, 
    0x4e, 0x7, 0xa, 0x2, 0x2, 0x4e, 0x50, 0x9, 0x3, 0x2, 0x2, 0x4f, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x51, 0x52, 0x9, 0x4, 0x2, 0x2, 0x52, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x9, 0x19, 0x1f, 0x29, 0x33, 0x3b, 0x47, 0x4f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

sprintParser::Initializer sprintParser::_init;
