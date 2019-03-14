
// Generated from sprint.g4 by ANTLR 4.7.2


#include "sprintVisitor.h"

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


antlrcpp::Any sprintParser::PrgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitPrg(this);
  else
    return visitor->visitChildren(this);
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
    setState(23); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(22);
      funcDeclaration();
      setState(25); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sprintParser::T__9);
   
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


antlrcpp::Any sprintParser::FuncDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitFuncDeclaration(this);
  else
    return visitor->visitChildren(this);
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
    setState(27);
    type();
    setState(28);
    match(sprintParser::ID);
    setState(29);
    match(sprintParser::T__0);
    setState(31);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sprintParser::T__9) {
      setState(30);
      formalParameters();
    }
    setState(33);
    match(sprintParser::T__1);
    setState(34);
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


antlrcpp::Any sprintParser::FormalParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitFormalParameters(this);
  else
    return visitor->visitChildren(this);
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
    setState(36);
    parameter();
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sprintParser::T__2) {
      setState(37);
      match(sprintParser::T__2);
      setState(38);
      parameter();
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


antlrcpp::Any sprintParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

sprintParser::ParameterContext* sprintParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 6, sprintParser::RuleParameter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    type();
    setState(45);
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


antlrcpp::Any sprintParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
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
    setState(47);
    match(sprintParser::T__3);
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sprintParser::T__0)
      | (1ULL << sprintParser::T__3)
      | (1ULL << sprintParser::T__6)
      | (1ULL << sprintParser::T__9)
      | (1ULL << sprintParser::ID)
      | (1ULL << sprintParser::INT)
      | (1ULL << sprintParser::PLUS_MINUS))) != 0)) {
      setState(48);
      statement();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
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

sprintParser::ExprContext* sprintParser::StatementContext::expr() {
  return getRuleContext<sprintParser::ExprContext>(0);
}


size_t sprintParser::StatementContext::getRuleIndex() const {
  return sprintParser::RuleStatement;
}


antlrcpp::Any sprintParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

sprintParser::StatementContext* sprintParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 10, sprintParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sprintParser::T__3: {
        enterOuterAlt(_localctx, 1);
        setState(56);
        block();
        break;
      }

      case sprintParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(57);
        declStatement();
        break;
      }

      case sprintParser::T__6: {
        enterOuterAlt(_localctx, 3);
        setState(58);
        retStatement();
        break;
      }

      case sprintParser::T__0:
      case sprintParser::ID:
      case sprintParser::INT:
      case sprintParser::PLUS_MINUS: {
        enterOuterAlt(_localctx, 4);
        setState(59);
        expr(0);
        setState(60);
        match(sprintParser::T__5);
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

sprintParser::ExprContext* sprintParser::RetStatementContext::expr() {
  return getRuleContext<sprintParser::ExprContext>(0);
}


size_t sprintParser::RetStatementContext::getRuleIndex() const {
  return sprintParser::RuleRetStatement;
}


antlrcpp::Any sprintParser::RetStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitRetStatement(this);
  else
    return visitor->visitChildren(this);
}

sprintParser::RetStatementContext* sprintParser::retStatement() {
  RetStatementContext *_localctx = _tracker.createInstance<RetStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, sprintParser::RuleRetStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(sprintParser::T__6);
    setState(65);
    expr(0);
    setState(66);
    match(sprintParser::T__5);
   
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


antlrcpp::Any sprintParser::DeclStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitDeclStatement(this);
  else
    return visitor->visitChildren(this);
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
    setState(68);
    type();
    setState(69);
    varDeclaration();
    setState(74);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sprintParser::T__2) {
      setState(70);
      match(sprintParser::T__2);
      setState(71);
      varDeclaration();
      setState(76);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(77);
    match(sprintParser::T__5);
   
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


size_t sprintParser::VarDeclarationContext::getRuleIndex() const {
  return sprintParser::RuleVarDeclaration;
}

void sprintParser::VarDeclarationContext::copyFrom(VarDeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NonInitDecContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::NonInitDecContext::ID() {
  return getToken(sprintParser::ID, 0);
}

sprintParser::NonInitDecContext::NonInitDecContext(VarDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::NonInitDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitNonInitDec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InitializedDecContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::InitializedDecContext::ID() {
  return getToken(sprintParser::ID, 0);
}

sprintParser::ExprContext* sprintParser::InitializedDecContext::expr() {
  return getRuleContext<sprintParser::ExprContext>(0);
}

sprintParser::InitializedDecContext::InitializedDecContext(VarDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::InitializedDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitInitializedDec(this);
  else
    return visitor->visitChildren(this);
}
sprintParser::VarDeclarationContext* sprintParser::varDeclaration() {
  VarDeclarationContext *_localctx = _tracker.createInstance<VarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 16, sprintParser::RuleVarDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(83);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarDeclarationContext *>(_tracker.createInstance<sprintParser::InitializedDecContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(79);
      match(sprintParser::ID);
      setState(80);
      match(sprintParser::T__7);
      setState(81);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarDeclarationContext *>(_tracker.createInstance<sprintParser::NonInitDecContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(82);
      match(sprintParser::ID);
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

//----------------- ExprContext ------------------------------------------------------------------

sprintParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sprintParser::ExprContext::getRuleIndex() const {
  return sprintParser::RuleExpr;
}

void sprintParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MULT_EXPRContext ------------------------------------------------------------------

std::vector<sprintParser::ExprContext *> sprintParser::MULT_EXPRContext::expr() {
  return getRuleContexts<sprintParser::ExprContext>();
}

sprintParser::ExprContext* sprintParser::MULT_EXPRContext::expr(size_t i) {
  return getRuleContext<sprintParser::ExprContext>(i);
}

sprintParser::MULT_EXPRContext::MULT_EXPRContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::MULT_EXPRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitMULT_EXPR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NUM_EXPRContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::NUM_EXPRContext::INT() {
  return getToken(sprintParser::INT, 0);
}

sprintParser::NUM_EXPRContext::NUM_EXPRContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::NUM_EXPRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitNUM_EXPR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ADD_MINUS_EXPRContext ------------------------------------------------------------------

std::vector<sprintParser::ExprContext *> sprintParser::ADD_MINUS_EXPRContext::expr() {
  return getRuleContexts<sprintParser::ExprContext>();
}

sprintParser::ExprContext* sprintParser::ADD_MINUS_EXPRContext::expr(size_t i) {
  return getRuleContext<sprintParser::ExprContext>(i);
}

tree::TerminalNode* sprintParser::ADD_MINUS_EXPRContext::PLUS_MINUS() {
  return getToken(sprintParser::PLUS_MINUS, 0);
}

sprintParser::ADD_MINUS_EXPRContext::ADD_MINUS_EXPRContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::ADD_MINUS_EXPRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitADD_MINUS_EXPR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UNARY_EXPRContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::UNARY_EXPRContext::PLUS_MINUS() {
  return getToken(sprintParser::PLUS_MINUS, 0);
}

sprintParser::ExprContext* sprintParser::UNARY_EXPRContext::expr() {
  return getRuleContext<sprintParser::ExprContext>(0);
}

sprintParser::UNARY_EXPRContext::UNARY_EXPRContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::UNARY_EXPRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitUNARY_EXPR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PAREN_EXPRContext ------------------------------------------------------------------

sprintParser::ExprContext* sprintParser::PAREN_EXPRContext::expr() {
  return getRuleContext<sprintParser::ExprContext>(0);
}

sprintParser::PAREN_EXPRContext::PAREN_EXPRContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::PAREN_EXPRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitPAREN_EXPR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AFFECT_EXPRContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::AFFECT_EXPRContext::ID() {
  return getToken(sprintParser::ID, 0);
}

sprintParser::ExprContext* sprintParser::AFFECT_EXPRContext::expr() {
  return getRuleContext<sprintParser::ExprContext>(0);
}

sprintParser::AFFECT_EXPRContext::AFFECT_EXPRContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::AFFECT_EXPRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitAFFECT_EXPR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VAR_EXPRContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::VAR_EXPRContext::ID() {
  return getToken(sprintParser::ID, 0);
}

sprintParser::VAR_EXPRContext::VAR_EXPRContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::VAR_EXPRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitVAR_EXPR(this);
  else
    return visitor->visitChildren(this);
}

sprintParser::ExprContext* sprintParser::expr() {
   return expr(0);
}

sprintParser::ExprContext* sprintParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  sprintParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  sprintParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, sprintParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(97);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<UNARY_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(86);
      match(sprintParser::PLUS_MINUS);
      setState(87);
      expr(7);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PAREN_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(88);
      match(sprintParser::T__0);
      setState(89);
      expr(0);
      setState(90);
      match(sprintParser::T__1);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<AFFECT_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(92);
      match(sprintParser::ID);
      setState(93);
      match(sprintParser::T__7);
      setState(94);
      expr(3);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<VAR_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(95);
      match(sprintParser::ID);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NUM_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(96);
      match(sprintParser::INT);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(107);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(105);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MULT_EXPRContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(99);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(100);
          match(sprintParser::T__8);
          setState(101);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ADD_MINUS_EXPRContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(102);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(103);
          match(sprintParser::PLUS_MINUS);
          setState(104);
          expr(6);
          break;
        }

        } 
      }
      setState(109);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
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


antlrcpp::Any sprintParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

sprintParser::TypeContext* sprintParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 20, sprintParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    match(sprintParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool sprintParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 9: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool sprintParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> sprintParser::_decisionToDFA;
atn::PredictionContextCache sprintParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN sprintParser::_atn;
std::vector<uint16_t> sprintParser::_serializedATN;

std::vector<std::string> sprintParser::_ruleNames = {
  "prg", "funcDeclaration", "formalParameters", "parameter", "block", "statement", 
  "retStatement", "declStatement", "varDeclaration", "expr", "type"
};

std::vector<std::string> sprintParser::_literalNames = {
  "", "'('", "')'", "','", "'{'", "'}'", "';'", "'return'", "'='", "'*'", 
  "'int'", "", "", "", "", "", "", "'_'"
};

std::vector<std::string> sprintParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "ID", "INT", "CHAR", "PLUS_MINUS", 
  "LETTER", "DIGIT", "UNDER_SCORE", "INCLUDE", "WS"
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
    0x3, 0x15, 0x73, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x3, 0x2, 0x6, 0x2, 0x1a, 0xa, 0x2, 0xd, 0x2, 
    0xe, 0x2, 0x1b, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x22, 
    0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x7, 0x4, 0x2a, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x2d, 0xb, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x34, 0xa, 0x6, 0xc, 
    0x6, 0xe, 0x6, 0x37, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x41, 0xa, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x7, 0x9, 0x4b, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x4e, 0xb, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x56, 
    0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 
    0x64, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x7, 0xb, 0x6c, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x6f, 0xb, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x2, 0x3, 0x14, 0xd, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x2, 0x2, 0x2, 0x76, 0x2, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x26, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x2e, 0x3, 0x2, 0x2, 0x2, 0xa, 0x31, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0xe, 0x42, 0x3, 0x2, 0x2, 0x2, 0x10, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x55, 0x3, 0x2, 0x2, 0x2, 0x14, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x70, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1a, 0x5, 0x4, 
    0x3, 0x2, 0x19, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x3, 0x2, 0x2, 0x2, 
    0x1c, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x5, 0x16, 0xc, 0x2, 0x1e, 
    0x1f, 0x7, 0xd, 0x2, 0x2, 0x1f, 0x21, 0x7, 0x3, 0x2, 0x2, 0x20, 0x22, 
    0x5, 0x6, 0x4, 0x2, 0x21, 0x20, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 
    0x2, 0x2, 0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x7, 0x4, 
    0x2, 0x2, 0x24, 0x25, 0x5, 0xa, 0x6, 0x2, 0x25, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x2b, 0x5, 0x8, 0x5, 0x2, 0x27, 0x28, 0x7, 0x5, 0x2, 0x2, 
    0x28, 0x2a, 0x5, 0x8, 0x5, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x2f, 0x5, 0x16, 0xc, 0x2, 0x2f, 0x30, 0x7, 0xd, 
    0x2, 0x2, 0x30, 0x9, 0x3, 0x2, 0x2, 0x2, 0x31, 0x35, 0x7, 0x6, 0x2, 
    0x2, 0x32, 0x34, 0x5, 0xc, 0x7, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 
    0x34, 0x37, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 
    0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0x38, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x7, 0x7, 0x2, 0x2, 0x39, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x3a, 0x41, 0x5, 0xa, 0x6, 0x2, 0x3b, 0x41, 0x5, 0x10, 
    0x9, 0x2, 0x3c, 0x41, 0x5, 0xe, 0x8, 0x2, 0x3d, 0x3e, 0x5, 0x14, 0xb, 
    0x2, 0x3e, 0x3f, 0x7, 0x8, 0x2, 0x2, 0x3f, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x41, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0x9, 0x2, 0x2, 0x43, 0x44, 0x5, 
    0x14, 0xb, 0x2, 0x44, 0x45, 0x7, 0x8, 0x2, 0x2, 0x45, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x47, 0x5, 0x16, 0xc, 0x2, 0x47, 0x4c, 0x5, 0x12, 0xa, 
    0x2, 0x48, 0x49, 0x7, 0x5, 0x2, 0x2, 0x49, 0x4b, 0x5, 0x12, 0xa, 0x2, 
    0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4f, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 
    0x8, 0x2, 0x2, 0x50, 0x11, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0xd, 
    0x2, 0x2, 0x52, 0x53, 0x7, 0xa, 0x2, 0x2, 0x53, 0x56, 0x5, 0x14, 0xb, 
    0x2, 0x54, 0x56, 0x7, 0xd, 0x2, 0x2, 0x55, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x55, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x13, 0x3, 0x2, 0x2, 0x2, 0x57, 
    0x58, 0x8, 0xb, 0x1, 0x2, 0x58, 0x59, 0x7, 0x10, 0x2, 0x2, 0x59, 0x64, 
    0x5, 0x14, 0xb, 0x9, 0x5a, 0x5b, 0x7, 0x3, 0x2, 0x2, 0x5b, 0x5c, 0x5, 
    0x14, 0xb, 0x2, 0x5c, 0x5d, 0x7, 0x4, 0x2, 0x2, 0x5d, 0x64, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x5f, 0x7, 0xd, 0x2, 0x2, 0x5f, 0x60, 0x7, 0xa, 0x2, 
    0x2, 0x60, 0x64, 0x5, 0x14, 0xb, 0x5, 0x61, 0x64, 0x7, 0xd, 0x2, 0x2, 
    0x62, 0x64, 0x7, 0xe, 0x2, 0x2, 0x63, 0x57, 0x3, 0x2, 0x2, 0x2, 0x63, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x63, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x65, 0x66, 0xc, 0x8, 0x2, 0x2, 0x66, 0x67, 0x7, 0xb, 
    0x2, 0x2, 0x67, 0x6c, 0x5, 0x14, 0xb, 0x9, 0x68, 0x69, 0xc, 0x7, 0x2, 
    0x2, 0x69, 0x6a, 0x7, 0x10, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0x14, 0xb, 0x8, 
    0x6b, 0x65, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6c, 
    0x6f, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 
    0x3, 0x2, 0x2, 0x2, 0x6e, 0x15, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 0xc, 0x2, 0x2, 0x71, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x1b, 0x21, 0x2b, 0x35, 0x40, 0x4c, 0x55, 0x63, 0x6b, 
    0x6d, 
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
