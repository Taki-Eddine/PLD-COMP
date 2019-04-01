
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
    setState(35); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(34);
      funcDeclaration();
      setState(37); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sprintParser::TYPE);
   
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

tree::TerminalNode* sprintParser::FuncDeclarationContext::TYPE() {
  return getToken(sprintParser::TYPE, 0);
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
    setState(39);
    match(sprintParser::TYPE);
    setState(40);
    match(sprintParser::ID);
    setState(41);
    match(sprintParser::T__0);
    setState(43);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sprintParser::TYPE) {
      setState(42);
      formalParameters();
    }
    setState(45);
    match(sprintParser::T__1);
    setState(46);
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
    setState(48);
    parameter();
    setState(53);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sprintParser::T__2) {
      setState(49);
      match(sprintParser::T__2);
      setState(50);
      parameter();
      setState(55);
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

tree::TerminalNode* sprintParser::ParameterContext::TYPE() {
  return getToken(sprintParser::TYPE, 0);
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
    setState(56);
    match(sprintParser::TYPE);
    setState(57);
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
    setState(59);
    match(sprintParser::T__3);
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sprintParser::T__3)
      | (1ULL << sprintParser::T__6)
      | (1ULL << sprintParser::T__10)
      | (1ULL << sprintParser::T__12)
      | (1ULL << sprintParser::T__13)
      | (1ULL << sprintParser::TYPE)
      | (1ULL << sprintParser::ID))) != 0)) {
      setState(60);
      statement();
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(66);
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

sprintParser::DeclarationContext* sprintParser::StatementContext::declaration() {
  return getRuleContext<sprintParser::DeclarationContext>(0);
}

sprintParser::RetContext* sprintParser::StatementContext::ret() {
  return getRuleContext<sprintParser::RetContext>(0);
}

sprintParser::AssignmentContext* sprintParser::StatementContext::assignment() {
  return getRuleContext<sprintParser::AssignmentContext>(0);
}

sprintParser::CallContext* sprintParser::StatementContext::call() {
  return getRuleContext<sprintParser::CallContext>(0);
}

sprintParser::IfStatementContext* sprintParser::StatementContext::ifStatement() {
  return getRuleContext<sprintParser::IfStatementContext>(0);
}

sprintParser::WhileDoStatementContext* sprintParser::StatementContext::whileDoStatement() {
  return getRuleContext<sprintParser::WhileDoStatementContext>(0);
}

sprintParser::DoWhileStatementContext* sprintParser::StatementContext::doWhileStatement() {
  return getRuleContext<sprintParser::DoWhileStatementContext>(0);
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
    setState(84);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(68);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(69);
      declaration();
      setState(70);
      match(sprintParser::T__5);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(72);
      ret();
      setState(73);
      match(sprintParser::T__5);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(75);
      assignment();
      setState(76);
      match(sprintParser::T__5);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(78);
      call();
      setState(79);
      match(sprintParser::T__5);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(81);
      ifStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(82);
      whileDoStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(83);
      doWhileStatement();
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

//----------------- RetContext ------------------------------------------------------------------

sprintParser::RetContext::RetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sprintParser::ExprContext* sprintParser::RetContext::expr() {
  return getRuleContext<sprintParser::ExprContext>(0);
}


size_t sprintParser::RetContext::getRuleIndex() const {
  return sprintParser::RuleRet;
}


antlrcpp::Any sprintParser::RetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitRet(this);
  else
    return visitor->visitChildren(this);
}

sprintParser::RetContext* sprintParser::ret() {
  RetContext *_localctx = _tracker.createInstance<RetContext>(_ctx, getState());
  enterRule(_localctx, 12, sprintParser::RuleRet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(sprintParser::T__6);
    setState(87);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

sprintParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sprintParser::DeclarationContext::getRuleIndex() const {
  return sprintParser::RuleDeclaration;
}

void sprintParser::DeclarationContext::copyFrom(DeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DECLARATIONContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::DECLARATIONContext::TYPE() {
  return getToken(sprintParser::TYPE, 0);
}

std::vector<sprintParser::VarDeclarationContext *> sprintParser::DECLARATIONContext::varDeclaration() {
  return getRuleContexts<sprintParser::VarDeclarationContext>();
}

sprintParser::VarDeclarationContext* sprintParser::DECLARATIONContext::varDeclaration(size_t i) {
  return getRuleContext<sprintParser::VarDeclarationContext>(i);
}

sprintParser::DECLARATIONContext::DECLARATIONContext(DeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::DECLARATIONContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitDECLARATION(this);
  else
    return visitor->visitChildren(this);
}
sprintParser::DeclarationContext* sprintParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, sprintParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<sprintParser::DECLARATIONContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(sprintParser::TYPE);
    setState(90);
    varDeclaration();
    setState(95);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sprintParser::T__2) {
      setState(91);
      match(sprintParser::T__2);
      setState(92);
      varDeclaration();
      setState(97);
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

//----------------- AssignmentContext ------------------------------------------------------------------

sprintParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sprintParser::AssignmentContext::getRuleIndex() const {
  return sprintParser::RuleAssignment;
}

void sprintParser::AssignmentContext::copyFrom(AssignmentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ARR_ASSIGNMENTContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::ARR_ASSIGNMENTContext::ID() {
  return getToken(sprintParser::ID, 0);
}

std::vector<sprintParser::ExprContext *> sprintParser::ARR_ASSIGNMENTContext::expr() {
  return getRuleContexts<sprintParser::ExprContext>();
}

sprintParser::ExprContext* sprintParser::ARR_ASSIGNMENTContext::expr(size_t i) {
  return getRuleContext<sprintParser::ExprContext>(i);
}

sprintParser::ARR_ASSIGNMENTContext::ARR_ASSIGNMENTContext(AssignmentContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::ARR_ASSIGNMENTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitARR_ASSIGNMENT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SCALAR_ASSIGNMENTContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::SCALAR_ASSIGNMENTContext::ID() {
  return getToken(sprintParser::ID, 0);
}

sprintParser::ExprContext* sprintParser::SCALAR_ASSIGNMENTContext::expr() {
  return getRuleContext<sprintParser::ExprContext>(0);
}

sprintParser::SCALAR_ASSIGNMENTContext::SCALAR_ASSIGNMENTContext(AssignmentContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::SCALAR_ASSIGNMENTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitSCALAR_ASSIGNMENT(this);
  else
    return visitor->visitChildren(this);
}
sprintParser::AssignmentContext* sprintParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 16, sprintParser::RuleAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(108);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AssignmentContext *>(_tracker.createInstance<sprintParser::SCALAR_ASSIGNMENTContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(98);
      match(sprintParser::ID);
      setState(99);
      match(sprintParser::T__7);
      setState(100);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AssignmentContext *>(_tracker.createInstance<sprintParser::ARR_ASSIGNMENTContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(101);
      match(sprintParser::ID);
      setState(102);
      match(sprintParser::T__8);
      setState(103);
      expr(0);
      setState(104);
      match(sprintParser::T__9);
      setState(105);
      match(sprintParser::T__7);
      setState(106);
      expr(0);
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

//----------------- CallContext ------------------------------------------------------------------

sprintParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sprintParser::CallContext::getRuleIndex() const {
  return sprintParser::RuleCall;
}

void sprintParser::CallContext::copyFrom(CallContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CALLContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::CALLContext::ID() {
  return getToken(sprintParser::ID, 0);
}

sprintParser::ArgumentsContext* sprintParser::CALLContext::arguments() {
  return getRuleContext<sprintParser::ArgumentsContext>(0);
}

sprintParser::CALLContext::CALLContext(CallContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::CALLContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitCALL(this);
  else
    return visitor->visitChildren(this);
}
sprintParser::CallContext* sprintParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 18, sprintParser::RuleCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<CallContext *>(_tracker.createInstance<sprintParser::CALLContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(110);
    match(sprintParser::ID);
    setState(111);
    match(sprintParser::T__0);
    setState(113);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sprintParser::T__0)
      | (1ULL << sprintParser::ID)
      | (1ULL << sprintParser::INT)
      | (1ULL << sprintParser::PLUS_MINUS)
      | (1ULL << sprintParser::CHAR))) != 0)) {
      setState(112);
      arguments();
    }
    setState(115);
    match(sprintParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

sprintParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sprintParser::IfStatementContext::getRuleIndex() const {
  return sprintParser::RuleIfStatement;
}

void sprintParser::IfStatementContext::copyFrom(IfStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IfContext ------------------------------------------------------------------

sprintParser::BoolEContext* sprintParser::IfContext::boolE() {
  return getRuleContext<sprintParser::BoolEContext>(0);
}

sprintParser::BlockContext* sprintParser::IfContext::block() {
  return getRuleContext<sprintParser::BlockContext>(0);
}

sprintParser::IfContext::IfContext(IfStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfElseContext ------------------------------------------------------------------

sprintParser::BoolEContext* sprintParser::IfElseContext::boolE() {
  return getRuleContext<sprintParser::BoolEContext>(0);
}

std::vector<sprintParser::BlockContext *> sprintParser::IfElseContext::block() {
  return getRuleContexts<sprintParser::BlockContext>();
}

sprintParser::BlockContext* sprintParser::IfElseContext::block(size_t i) {
  return getRuleContext<sprintParser::BlockContext>(i);
}

sprintParser::IfElseContext::IfElseContext(IfStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::IfElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitIfElse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfElseIfElseContext ------------------------------------------------------------------

std::vector<sprintParser::BoolEContext *> sprintParser::IfElseIfElseContext::boolE() {
  return getRuleContexts<sprintParser::BoolEContext>();
}

sprintParser::BoolEContext* sprintParser::IfElseIfElseContext::boolE(size_t i) {
  return getRuleContext<sprintParser::BoolEContext>(i);
}

std::vector<sprintParser::BlockContext *> sprintParser::IfElseIfElseContext::block() {
  return getRuleContexts<sprintParser::BlockContext>();
}

sprintParser::BlockContext* sprintParser::IfElseIfElseContext::block(size_t i) {
  return getRuleContext<sprintParser::BlockContext>(i);
}

sprintParser::IfElseIfElseContext::IfElseIfElseContext(IfStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::IfElseIfElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitIfElseIfElse(this);
  else
    return visitor->visitChildren(this);
}
sprintParser::IfStatementContext* sprintParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, sprintParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(152);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<IfStatementContext *>(_tracker.createInstance<sprintParser::IfElseIfElseContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(117);
      match(sprintParser::T__10);
      setState(118);
      match(sprintParser::T__0);
      setState(119);
      boolE(0);
      setState(120);
      match(sprintParser::T__1);
      setState(121);
      block();
      setState(131);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(122);
          match(sprintParser::T__11);
          setState(123);
          match(sprintParser::T__10);
          setState(124);
          match(sprintParser::T__0);
          setState(125);
          boolE(0);
          setState(126);
          match(sprintParser::T__1);
          setState(127);
          block(); 
        }
        setState(133);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      }
      setState(136);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sprintParser::T__11) {
        setState(134);
        match(sprintParser::T__11);
        setState(135);
        block();
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<IfStatementContext *>(_tracker.createInstance<sprintParser::IfContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(138);
      match(sprintParser::T__10);
      setState(139);
      match(sprintParser::T__0);
      setState(140);
      boolE(0);
      setState(141);
      match(sprintParser::T__1);
      setState(142);
      block();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<IfStatementContext *>(_tracker.createInstance<sprintParser::IfElseContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(144);
      match(sprintParser::T__10);
      setState(145);
      match(sprintParser::T__0);
      setState(146);
      boolE(0);
      setState(147);
      match(sprintParser::T__1);
      setState(148);
      block();
      setState(149);
      match(sprintParser::T__11);
      setState(150);
      block();
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

//----------------- WhileDoStatementContext ------------------------------------------------------------------

sprintParser::WhileDoStatementContext::WhileDoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sprintParser::WhileDoStatementContext::getRuleIndex() const {
  return sprintParser::RuleWhileDoStatement;
}

void sprintParser::WhileDoStatementContext::copyFrom(WhileDoStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileDoContext ------------------------------------------------------------------

sprintParser::BoolEContext* sprintParser::WhileDoContext::boolE() {
  return getRuleContext<sprintParser::BoolEContext>(0);
}

sprintParser::BlockContext* sprintParser::WhileDoContext::block() {
  return getRuleContext<sprintParser::BlockContext>(0);
}

sprintParser::WhileDoContext::WhileDoContext(WhileDoStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::WhileDoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitWhileDo(this);
  else
    return visitor->visitChildren(this);
}
sprintParser::WhileDoStatementContext* sprintParser::whileDoStatement() {
  WhileDoStatementContext *_localctx = _tracker.createInstance<WhileDoStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, sprintParser::RuleWhileDoStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<WhileDoStatementContext *>(_tracker.createInstance<sprintParser::WhileDoContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(sprintParser::T__12);
    setState(155);
    match(sprintParser::T__0);
    setState(156);
    boolE(0);
    setState(157);
    match(sprintParser::T__1);
    setState(158);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoWhileStatementContext ------------------------------------------------------------------

sprintParser::DoWhileStatementContext::DoWhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sprintParser::DoWhileStatementContext::getRuleIndex() const {
  return sprintParser::RuleDoWhileStatement;
}

void sprintParser::DoWhileStatementContext::copyFrom(DoWhileStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DoWhileContext ------------------------------------------------------------------

sprintParser::BlockContext* sprintParser::DoWhileContext::block() {
  return getRuleContext<sprintParser::BlockContext>(0);
}

sprintParser::BoolEContext* sprintParser::DoWhileContext::boolE() {
  return getRuleContext<sprintParser::BoolEContext>(0);
}

sprintParser::DoWhileContext::DoWhileContext(DoWhileStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::DoWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitDoWhile(this);
  else
    return visitor->visitChildren(this);
}
sprintParser::DoWhileStatementContext* sprintParser::doWhileStatement() {
  DoWhileStatementContext *_localctx = _tracker.createInstance<DoWhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, sprintParser::RuleDoWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<DoWhileStatementContext *>(_tracker.createInstance<sprintParser::DoWhileContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(sprintParser::T__13);
    setState(161);
    block();
    setState(162);
    match(sprintParser::T__12);
    setState(163);
    match(sprintParser::T__0);
    setState(164);
    boolE(0);
    setState(165);
    match(sprintParser::T__1);
    setState(166);
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
//----------------- InitializedArrDecContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::InitializedArrDecContext::ID() {
  return getToken(sprintParser::ID, 0);
}

std::vector<sprintParser::ExprContext *> sprintParser::InitializedArrDecContext::expr() {
  return getRuleContexts<sprintParser::ExprContext>();
}

sprintParser::ExprContext* sprintParser::InitializedArrDecContext::expr(size_t i) {
  return getRuleContext<sprintParser::ExprContext>(i);
}

tree::TerminalNode* sprintParser::InitializedArrDecContext::INT() {
  return getToken(sprintParser::INT, 0);
}

sprintParser::InitializedArrDecContext::InitializedArrDecContext(VarDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::InitializedArrDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitInitializedArrDec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NonInitArrDecContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::NonInitArrDecContext::ID() {
  return getToken(sprintParser::ID, 0);
}

tree::TerminalNode* sprintParser::NonInitArrDecContext::INT() {
  return getToken(sprintParser::INT, 0);
}

sprintParser::NonInitArrDecContext::NonInitArrDecContext(VarDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::NonInitArrDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitNonInitArrDec(this);
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
  enterRule(_localctx, 26, sprintParser::RuleVarDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(198);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarDeclarationContext *>(_tracker.createInstance<sprintParser::InitializedDecContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(168);
      match(sprintParser::ID);
      setState(169);
      match(sprintParser::T__7);
      setState(170);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarDeclarationContext *>(_tracker.createInstance<sprintParser::NonInitDecContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(171);
      match(sprintParser::ID);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<VarDeclarationContext *>(_tracker.createInstance<sprintParser::InitializedArrDecContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(172);
      match(sprintParser::ID);
      setState(173);
      match(sprintParser::T__8);
      setState(175);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sprintParser::INT) {
        setState(174);
        match(sprintParser::INT);
      }
      setState(177);
      match(sprintParser::T__9);
      setState(178);
      match(sprintParser::T__7);
      setState(192);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(179);
        match(sprintParser::T__3);
        setState(180);
        expr(0);
        setState(185);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == sprintParser::T__2) {
          setState(181);
          match(sprintParser::T__2);
          setState(182);
          expr(0);
          setState(187);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(188);
        match(sprintParser::T__4);
        break;
      }

      case 2: {
        setState(190);
        match(sprintParser::T__3);
        setState(191);
        match(sprintParser::T__4);
        break;
      }

      }
      break;
    }

    case 4: {
      _localctx = dynamic_cast<VarDeclarationContext *>(_tracker.createInstance<sprintParser::NonInitArrDecContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(194);
      match(sprintParser::ID);
      setState(195);
      match(sprintParser::T__8);
      setState(196);
      match(sprintParser::INT);
      setState(197);
      match(sprintParser::T__9);
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

//----------------- ArgumentsContext ------------------------------------------------------------------

sprintParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<sprintParser::ExprContext *> sprintParser::ArgumentsContext::expr() {
  return getRuleContexts<sprintParser::ExprContext>();
}

sprintParser::ExprContext* sprintParser::ArgumentsContext::expr(size_t i) {
  return getRuleContext<sprintParser::ExprContext>(i);
}


size_t sprintParser::ArgumentsContext::getRuleIndex() const {
  return sprintParser::RuleArguments;
}


antlrcpp::Any sprintParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

sprintParser::ArgumentsContext* sprintParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 28, sprintParser::RuleArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    expr(0);
    setState(205);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sprintParser::T__2) {
      setState(201);
      match(sprintParser::T__2);
      setState(202);
      expr(0);
      setState(207);
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
//----------------- CHAR_EXPRContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::CHAR_EXPRContext::CHAR() {
  return getToken(sprintParser::CHAR, 0);
}

sprintParser::CHAR_EXPRContext::CHAR_EXPRContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::CHAR_EXPRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitCHAR_EXPR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ARR_EXPRContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::ARR_EXPRContext::ID() {
  return getToken(sprintParser::ID, 0);
}

sprintParser::ExprContext* sprintParser::ARR_EXPRContext::expr() {
  return getRuleContext<sprintParser::ExprContext>(0);
}

sprintParser::ARR_EXPRContext::ARR_EXPRContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::ARR_EXPRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitARR_EXPR(this);
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
//----------------- ASSIGNMENT_EXPRContext ------------------------------------------------------------------

sprintParser::AssignmentContext* sprintParser::ASSIGNMENT_EXPRContext::assignment() {
  return getRuleContext<sprintParser::AssignmentContext>(0);
}

sprintParser::ASSIGNMENT_EXPRContext::ASSIGNMENT_EXPRContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::ASSIGNMENT_EXPRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitASSIGNMENT_EXPR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CALL_EXPRContext ------------------------------------------------------------------

sprintParser::CallContext* sprintParser::CALL_EXPRContext::call() {
  return getRuleContext<sprintParser::CallContext>(0);
}

sprintParser::CALL_EXPRContext::CALL_EXPRContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::CALL_EXPRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitCALL_EXPR(this);
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
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, sprintParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(225);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CALL_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(209);
      call();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ARR_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(210);
      match(sprintParser::ID);
      setState(211);
      match(sprintParser::T__8);
      setState(212);
      expr(0);
      setState(213);
      match(sprintParser::T__9);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PAREN_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(215);
      match(sprintParser::T__0);
      setState(216);
      expr(0);
      setState(217);
      match(sprintParser::T__1);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<UNARY_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(219);
      match(sprintParser::PLUS_MINUS);
      setState(220);
      expr(7);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ASSIGNMENT_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(221);
      assignment();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<VAR_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(222);
      match(sprintParser::ID);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<NUM_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(223);
      match(sprintParser::INT);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<CHAR_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(224);
      match(sprintParser::CHAR);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(235);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(233);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MULT_EXPRContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(227);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(228);
          match(sprintParser::T__14);
          setState(229);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ADD_MINUS_EXPRContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(230);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(231);
          match(sprintParser::PLUS_MINUS);
          setState(232);
          expr(6);
          break;
        }

        } 
      }
      setState(237);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BoolEContext ------------------------------------------------------------------

sprintParser::BoolEContext::BoolEContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sprintParser::BoolEContext::getRuleIndex() const {
  return sprintParser::RuleBoolE;
}

void sprintParser::BoolEContext::copyFrom(BoolEContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NOTContext ------------------------------------------------------------------

sprintParser::BoolEContext* sprintParser::NOTContext::boolE() {
  return getRuleContext<sprintParser::BoolEContext>(0);
}

sprintParser::NOTContext::NOTContext(BoolEContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::NOTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitNOT(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ORContext ------------------------------------------------------------------

std::vector<sprintParser::BoolEContext *> sprintParser::ORContext::boolE() {
  return getRuleContexts<sprintParser::BoolEContext>();
}

sprintParser::BoolEContext* sprintParser::ORContext::boolE(size_t i) {
  return getRuleContext<sprintParser::BoolEContext>(i);
}

sprintParser::ORContext::ORContext(BoolEContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::ORContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitOR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PAREN_BOOLEContext ------------------------------------------------------------------

sprintParser::BoolEContext* sprintParser::PAREN_BOOLEContext::boolE() {
  return getRuleContext<sprintParser::BoolEContext>(0);
}

sprintParser::PAREN_BOOLEContext::PAREN_BOOLEContext(BoolEContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::PAREN_BOOLEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitPAREN_BOOLE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ANDContext ------------------------------------------------------------------

std::vector<sprintParser::BoolEContext *> sprintParser::ANDContext::boolE() {
  return getRuleContexts<sprintParser::BoolEContext>();
}

sprintParser::BoolEContext* sprintParser::ANDContext::boolE(size_t i) {
  return getRuleContext<sprintParser::BoolEContext>(i);
}

sprintParser::ANDContext::ANDContext(BoolEContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::ANDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitAND(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CMPLtGtContext ------------------------------------------------------------------

std::vector<sprintParser::ExprContext *> sprintParser::CMPLtGtContext::expr() {
  return getRuleContexts<sprintParser::ExprContext>();
}

sprintParser::ExprContext* sprintParser::CMPLtGtContext::expr(size_t i) {
  return getRuleContext<sprintParser::ExprContext>(i);
}

tree::TerminalNode* sprintParser::CMPLtGtContext::LT_GT() {
  return getToken(sprintParser::LT_GT, 0);
}

sprintParser::CMPLtGtContext::CMPLtGtContext(BoolEContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::CMPLtGtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitCMPLtGt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CMPEqNeqContext ------------------------------------------------------------------

std::vector<sprintParser::ExprContext *> sprintParser::CMPEqNeqContext::expr() {
  return getRuleContexts<sprintParser::ExprContext>();
}

sprintParser::ExprContext* sprintParser::CMPEqNeqContext::expr(size_t i) {
  return getRuleContext<sprintParser::ExprContext>(i);
}

tree::TerminalNode* sprintParser::CMPEqNeqContext::EQ_NEQ() {
  return getToken(sprintParser::EQ_NEQ, 0);
}

sprintParser::CMPEqNeqContext::CMPEqNeqContext(BoolEContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::CMPEqNeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitCMPEqNeq(this);
  else
    return visitor->visitChildren(this);
}

sprintParser::BoolEContext* sprintParser::boolE() {
   return boolE(0);
}

sprintParser::BoolEContext* sprintParser::boolE(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  sprintParser::BoolEContext *_localctx = _tracker.createInstance<BoolEContext>(_ctx, parentState);
  sprintParser::BoolEContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, sprintParser::RuleBoolE, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(253);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NOTContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(239);
      match(sprintParser::T__15);
      setState(240);
      boolE(6);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PAREN_BOOLEContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(241);
      match(sprintParser::T__0);
      setState(242);
      boolE(0);
      setState(243);
      match(sprintParser::T__1);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CMPLtGtContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(245);
      expr(0);
      setState(246);
      match(sprintParser::LT_GT);
      setState(247);
      expr(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CMPEqNeqContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(249);
      expr(0);
      setState(250);
      match(sprintParser::EQ_NEQ);
      setState(251);
      expr(0);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(263);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(261);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ANDContext>(_tracker.createInstance<BoolEContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBoolE);
          setState(255);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(256);
          match(sprintParser::T__16);
          setState(257);
          boolE(3);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ORContext>(_tracker.createInstance<BoolEContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBoolE);
          setState(258);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(259);
          match(sprintParser::T__17);
          setState(260);
          boolE(2);
          break;
        }

        } 
      }
      setState(265);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
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
    case 15: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);
    case 16: return boolESempred(dynamic_cast<BoolEContext *>(context), predicateIndex);

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

bool sprintParser::boolESempred(BoolEContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 2);
    case 3: return precpred(_ctx, 1);

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
  "ret", "declaration", "assignment", "call", "ifStatement", "whileDoStatement", 
  "doWhileStatement", "varDeclaration", "arguments", "expr", "boolE"
};

std::vector<std::string> sprintParser::_literalNames = {
  "", "'('", "')'", "','", "'{'", "'}'", "';'", "'return'", "'='", "'['", 
  "']'", "'if'", "'else'", "'while'", "'do'", "'*'", "'!'", "'&&'", "'||'", 
  "'int'", "", "", "", "", "", "", "", "'_'"
};

std::vector<std::string> sprintParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "TYPE", "ID", "INT", "PLUS_MINUS", "LT_GT", "EQ_NEQ", "LETTER", "DIGIT", 
  "UNDER_SCORE", "CHAR", "INLINE_COMMENT", "MULTILINE_COMMENT", "INCLUDE", 
  "WS"
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
    0x3, 0x22, 0x10d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x3, 0x2, 0x6, 0x2, 0x26, 0xa, 0x2, 0xd, 0x2, 0xe, 
    0x2, 0x27, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2e, 0xa, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 
    0x4, 0x36, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x39, 0xb, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x40, 0xa, 0x6, 0xc, 0x6, 
    0xe, 0x6, 0x43, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x57, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x60, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x63, 
    0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x6f, 0xa, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x74, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x84, 0xa, 
    0xc, 0xc, 0xc, 0xe, 0xc, 0x87, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0x8b, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0x9b, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xb2, 0xa, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xba, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xbd, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x5, 0xf, 0xc3, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0xc9, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x7, 0x10, 0xce, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xd1, 0xb, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xe4, 0xa, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 
    0xec, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xef, 0xb, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0x100, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x108, 0xa, 0x12, 0xc, 0x12, 
    0xe, 0x12, 0x10b, 0xb, 0x12, 0x3, 0x12, 0x2, 0x4, 0x20, 0x22, 0x13, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x2, 0x2, 0x2, 0x122, 0x2, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x29, 0x3, 0x2, 0x2, 0x2, 0x6, 0x32, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0xa, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xc, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x58, 0x3, 0x2, 0x2, 0x2, 0x10, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x14, 0x70, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x18, 0x9c, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xc8, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xca, 0x3, 0x2, 0x2, 0x2, 0x20, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xff, 0x3, 0x2, 0x2, 0x2, 0x24, 0x26, 0x5, 0x4, 0x3, 0x2, 0x25, 0x24, 
    0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 0x2, 0x2, 0x28, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0x2a, 0x7, 0x15, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x16, 0x2, 
    0x2, 0x2b, 0x2d, 0x7, 0x3, 0x2, 0x2, 0x2c, 0x2e, 0x5, 0x6, 0x4, 0x2, 
    0x2d, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x4, 0x2, 0x2, 0x30, 0x31, 
    0x5, 0xa, 0x6, 0x2, 0x31, 0x5, 0x3, 0x2, 0x2, 0x2, 0x32, 0x37, 0x5, 
    0x8, 0x5, 0x2, 0x33, 0x34, 0x7, 0x5, 0x2, 0x2, 0x34, 0x36, 0x5, 0x8, 
    0x5, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x7, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3a, 
    0x3b, 0x7, 0x15, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x16, 0x2, 0x2, 0x3c, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x3d, 0x41, 0x7, 0x6, 0x2, 0x2, 0x3e, 0x40, 0x5, 
    0xc, 0x7, 0x2, 0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 
    0x2, 0x42, 0x44, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x45, 0x7, 0x7, 0x2, 0x2, 0x45, 0xb, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x57, 0x5, 0xa, 0x6, 0x2, 0x47, 0x48, 0x5, 0x10, 0x9, 0x2, 0x48, 0x49, 
    0x7, 0x8, 0x2, 0x2, 0x49, 0x57, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x5, 
    0xe, 0x8, 0x2, 0x4b, 0x4c, 0x7, 0x8, 0x2, 0x2, 0x4c, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x4d, 0x4e, 0x5, 0x12, 0xa, 0x2, 0x4e, 0x4f, 0x7, 0x8, 0x2, 
    0x2, 0x4f, 0x57, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x5, 0x14, 0xb, 0x2, 
    0x51, 0x52, 0x7, 0x8, 0x2, 0x2, 0x52, 0x57, 0x3, 0x2, 0x2, 0x2, 0x53, 
    0x57, 0x5, 0x16, 0xc, 0x2, 0x54, 0x57, 0x5, 0x18, 0xd, 0x2, 0x55, 0x57, 
    0x5, 0x1a, 0xe, 0x2, 0x56, 0x46, 0x3, 0x2, 0x2, 0x2, 0x56, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x56, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x50, 0x3, 0x2, 0x2, 0x2, 0x56, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0x57, 0xd, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 0x9, 0x2, 0x2, 0x59, 
    0x5a, 0x5, 0x20, 0x11, 0x2, 0x5a, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 
    0x7, 0x15, 0x2, 0x2, 0x5c, 0x61, 0x5, 0x1c, 0xf, 0x2, 0x5d, 0x5e, 0x7, 
    0x5, 0x2, 0x2, 0x5e, 0x60, 0x5, 0x1c, 0xf, 0x2, 0x5f, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x60, 0x63, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x7, 0x16, 0x2, 0x2, 0x65, 
    0x66, 0x7, 0xa, 0x2, 0x2, 0x66, 0x6f, 0x5, 0x20, 0x11, 0x2, 0x67, 0x68, 
    0x7, 0x16, 0x2, 0x2, 0x68, 0x69, 0x7, 0xb, 0x2, 0x2, 0x69, 0x6a, 0x5, 
    0x20, 0x11, 0x2, 0x6a, 0x6b, 0x7, 0xc, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0xa, 
    0x2, 0x2, 0x6c, 0x6d, 0x5, 0x20, 0x11, 0x2, 0x6d, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x64, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x6f, 0x13, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 0x16, 0x2, 0x2, 0x71, 
    0x73, 0x7, 0x3, 0x2, 0x2, 0x72, 0x74, 0x5, 0x1e, 0x10, 0x2, 0x73, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 
    0x2, 0x2, 0x2, 0x75, 0x76, 0x7, 0x4, 0x2, 0x2, 0x76, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x78, 0x7, 0xd, 0x2, 0x2, 0x78, 0x79, 0x7, 0x3, 0x2, 
    0x2, 0x79, 0x7a, 0x5, 0x22, 0x12, 0x2, 0x7a, 0x7b, 0x7, 0x4, 0x2, 0x2, 
    0x7b, 0x85, 0x5, 0xa, 0x6, 0x2, 0x7c, 0x7d, 0x7, 0xe, 0x2, 0x2, 0x7d, 
    0x7e, 0x7, 0xd, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0x3, 0x2, 0x2, 0x7f, 0x80, 
    0x5, 0x22, 0x12, 0x2, 0x80, 0x81, 0x7, 0x4, 0x2, 0x2, 0x81, 0x82, 0x5, 
    0xa, 0x6, 0x2, 0x82, 0x84, 0x3, 0x2, 0x2, 0x2, 0x83, 0x7c, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x87, 0x3, 0x2, 0x2, 0x2, 0x85, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x8a, 0x3, 0x2, 0x2, 0x2, 
    0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x7, 0xe, 0x2, 0x2, 0x89, 
    0x8b, 0x5, 0xa, 0x6, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 
    0x3, 0x2, 0x2, 0x2, 0x8b, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 
    0xd, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x3, 0x2, 0x2, 0x8e, 0x8f, 0x5, 0x22, 
    0x12, 0x2, 0x8f, 0x90, 0x7, 0x4, 0x2, 0x2, 0x90, 0x91, 0x5, 0xa, 0x6, 
    0x2, 0x91, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x7, 0xd, 0x2, 0x2, 
    0x93, 0x94, 0x7, 0x3, 0x2, 0x2, 0x94, 0x95, 0x5, 0x22, 0x12, 0x2, 0x95, 
    0x96, 0x7, 0x4, 0x2, 0x2, 0x96, 0x97, 0x5, 0xa, 0x6, 0x2, 0x97, 0x98, 
    0x7, 0xe, 0x2, 0x2, 0x98, 0x99, 0x5, 0xa, 0x6, 0x2, 0x99, 0x9b, 0x3, 
    0x2, 0x2, 0x2, 0x9a, 0x77, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x8c, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x92, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0x9d, 0x7, 0xf, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x3, 0x2, 0x2, 
    0x9e, 0x9f, 0x5, 0x22, 0x12, 0x2, 0x9f, 0xa0, 0x7, 0x4, 0x2, 0x2, 0xa0, 
    0xa1, 0x5, 0xa, 0x6, 0x2, 0xa1, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 
    0x7, 0x10, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0xa, 0x6, 0x2, 0xa4, 0xa5, 0x7, 
    0xf, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0x3, 0x2, 0x2, 0xa6, 0xa7, 0x5, 0x22, 
    0x12, 0x2, 0xa7, 0xa8, 0x7, 0x4, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x8, 0x2, 
    0x2, 0xa9, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x7, 0x16, 0x2, 0x2, 
    0xab, 0xac, 0x7, 0xa, 0x2, 0x2, 0xac, 0xc9, 0x5, 0x20, 0x11, 0x2, 0xad, 
    0xc9, 0x7, 0x16, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x16, 0x2, 0x2, 0xaf, 0xb1, 
    0x7, 0xb, 0x2, 0x2, 0xb0, 0xb2, 0x7, 0x17, 0x2, 0x2, 0xb1, 0xb0, 0x3, 
    0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 0x2, 
    0x2, 0x2, 0xb3, 0xb4, 0x7, 0xc, 0x2, 0x2, 0xb4, 0xc2, 0x7, 0xa, 0x2, 
    0x2, 0xb5, 0xb6, 0x7, 0x6, 0x2, 0x2, 0xb6, 0xbb, 0x5, 0x20, 0x11, 0x2, 
    0xb7, 0xb8, 0x7, 0x5, 0x2, 0x2, 0xb8, 0xba, 0x5, 0x20, 0x11, 0x2, 0xb9, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb9, 
    0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x7, 
    0x2, 0x2, 0xbf, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x6, 0x2, 
    0x2, 0xc1, 0xc3, 0x7, 0x7, 0x2, 0x2, 0xc2, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc4, 
    0xc5, 0x7, 0x16, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0xb, 0x2, 0x2, 0xc6, 0xc7, 
    0x7, 0x17, 0x2, 0x2, 0xc7, 0xc9, 0x7, 0xc, 0x2, 0x2, 0xc8, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0xc8, 0xad, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc9, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0xca, 0xcf, 0x5, 0x20, 0x11, 0x2, 0xcb, 0xcc, 0x7, 0x5, 0x2, 0x2, 
    0xcc, 0xce, 0x5, 0x20, 0x11, 0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xce, 
    0xd1, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0xd0, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 
    0x2, 0x2, 0x2, 0xd2, 0xd3, 0x8, 0x11, 0x1, 0x2, 0xd3, 0xe4, 0x5, 0x14, 
    0xb, 0x2, 0xd4, 0xd5, 0x7, 0x16, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0xb, 0x2, 
    0x2, 0xd6, 0xd7, 0x5, 0x20, 0x11, 0x2, 0xd7, 0xd8, 0x7, 0xc, 0x2, 0x2, 
    0xd8, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x3, 0x2, 0x2, 0xda, 
    0xdb, 0x5, 0x20, 0x11, 0x2, 0xdb, 0xdc, 0x7, 0x4, 0x2, 0x2, 0xdc, 0xe4, 
    0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x7, 0x18, 0x2, 0x2, 0xde, 0xe4, 0x5, 
    0x20, 0x11, 0x9, 0xdf, 0xe4, 0x5, 0x12, 0xa, 0x2, 0xe0, 0xe4, 0x7, 0x16, 
    0x2, 0x2, 0xe1, 0xe4, 0x7, 0x17, 0x2, 0x2, 0xe2, 0xe4, 0x7, 0x1e, 0x2, 
    0x2, 0xe3, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0xe3, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xe3, 
    0xdf, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0xe3, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xed, 0x3, 
    0x2, 0x2, 0x2, 0xe5, 0xe6, 0xc, 0x8, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x11, 
    0x2, 0x2, 0xe7, 0xec, 0x5, 0x20, 0x11, 0x9, 0xe8, 0xe9, 0xc, 0x7, 0x2, 
    0x2, 0xe9, 0xea, 0x7, 0x18, 0x2, 0x2, 0xea, 0xec, 0x5, 0x20, 0x11, 0x8, 
    0xeb, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xec, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0xee, 0x21, 0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0xf1, 0x8, 0x12, 0x1, 0x2, 0xf1, 0xf2, 0x7, 0x12, 
    0x2, 0x2, 0xf2, 0x100, 0x5, 0x22, 0x12, 0x8, 0xf3, 0xf4, 0x7, 0x3, 0x2, 
    0x2, 0xf4, 0xf5, 0x5, 0x22, 0x12, 0x2, 0xf5, 0xf6, 0x7, 0x4, 0x2, 0x2, 
    0xf6, 0x100, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x5, 0x20, 0x11, 0x2, 0xf8, 
    0xf9, 0x7, 0x19, 0x2, 0x2, 0xf9, 0xfa, 0x5, 0x20, 0x11, 0x2, 0xfa, 0x100, 
    0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x5, 0x20, 0x11, 0x2, 0xfc, 0xfd, 0x7, 
    0x1a, 0x2, 0x2, 0xfd, 0xfe, 0x5, 0x20, 0x11, 0x2, 0xfe, 0x100, 0x3, 
    0x2, 0x2, 0x2, 0xff, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xff, 0xf3, 0x3, 0x2, 
    0x2, 0x2, 0xff, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xff, 0xfb, 0x3, 0x2, 0x2, 
    0x2, 0x100, 0x109, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0xc, 0x4, 0x2, 
    0x2, 0x102, 0x103, 0x7, 0x13, 0x2, 0x2, 0x103, 0x108, 0x5, 0x22, 0x12, 
    0x5, 0x104, 0x105, 0xc, 0x3, 0x2, 0x2, 0x105, 0x106, 0x7, 0x14, 0x2, 
    0x2, 0x106, 0x108, 0x5, 0x22, 0x12, 0x4, 0x107, 0x101, 0x3, 0x2, 0x2, 
    0x2, 0x107, 0x104, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10b, 0x3, 0x2, 0x2, 
    0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 
    0x2, 0x10a, 0x23, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x27, 0x2d, 0x37, 0x41, 0x56, 0x61, 0x6e, 0x73, 0x85, 0x8a, 0x9a, 
    0xb1, 0xbb, 0xc2, 0xc8, 0xcf, 0xe3, 0xeb, 0xed, 0xff, 0x107, 0x109, 
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
