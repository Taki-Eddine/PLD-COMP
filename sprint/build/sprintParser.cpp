
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
    setState(41); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(40);
      funcDeclaration();
      setState(43); 
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
    setState(45);
    match(sprintParser::TYPE);
    setState(46);
    match(sprintParser::ID);
    setState(47);
    match(sprintParser::T__0);
    setState(49);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sprintParser::TYPE) {
      setState(48);
      formalParameters();
    }
    setState(51);
    match(sprintParser::T__1);
    setState(52);
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
    setState(54);
    parameter();
    setState(59);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sprintParser::T__2) {
      setState(55);
      match(sprintParser::T__2);
      setState(56);
      parameter();
      setState(61);
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
    setState(62);
    match(sprintParser::TYPE);
    setState(63);
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
    setState(65);
    match(sprintParser::T__3);
    setState(69);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sprintParser::T__3)
      | (1ULL << sprintParser::T__6)
      | (1ULL << sprintParser::T__10)
      | (1ULL << sprintParser::T__12)
      | (1ULL << sprintParser::T__13)
      | (1ULL << sprintParser::T__14)
      | (1ULL << sprintParser::TYPE)
      | (1ULL << sprintParser::ID))) != 0)) {
      setState(66);
      statement();
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(72);
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

sprintParser::ForStatementContext* sprintParser::StatementContext::forStatement() {
  return getRuleContext<sprintParser::ForStatementContext>(0);
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
    setState(91);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(74);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(75);
      declaration();
      setState(76);
      match(sprintParser::T__5);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(78);
      ret();
      setState(79);
      match(sprintParser::T__5);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(81);
      assignment();
      setState(82);
      match(sprintParser::T__5);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(84);
      call();
      setState(85);
      match(sprintParser::T__5);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(87);
      ifStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(88);
      whileDoStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(89);
      doWhileStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(90);
      forStatement();
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
    setState(93);
    match(sprintParser::T__6);
    setState(94);
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
    setState(96);
    match(sprintParser::TYPE);
    setState(97);
    varDeclaration();
    setState(102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sprintParser::T__2) {
      setState(98);
      match(sprintParser::T__2);
      setState(99);
      varDeclaration();
      setState(104);
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
    setState(115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AssignmentContext *>(_tracker.createInstance<sprintParser::SCALAR_ASSIGNMENTContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(105);
      match(sprintParser::ID);
      setState(106);
      match(sprintParser::T__7);
      setState(107);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AssignmentContext *>(_tracker.createInstance<sprintParser::ARR_ASSIGNMENTContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(108);
      match(sprintParser::ID);
      setState(109);
      match(sprintParser::T__8);
      setState(110);
      expr(0);
      setState(111);
      match(sprintParser::T__9);
      setState(112);
      match(sprintParser::T__7);
      setState(113);
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
    setState(117);
    match(sprintParser::ID);
    setState(118);
    match(sprintParser::T__0);
    setState(120);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sprintParser::T__0)
      | (1ULL << sprintParser::ID)
      | (1ULL << sprintParser::INT)
      | (1ULL << sprintParser::PLUS_MINUS)
      | (1ULL << sprintParser::CHAR))) != 0)) {
      setState(119);
      arguments();
    }
    setState(122);
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
    setState(159);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<IfStatementContext *>(_tracker.createInstance<sprintParser::IfElseIfElseContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(124);
      match(sprintParser::T__10);
      setState(125);
      match(sprintParser::T__0);
      setState(126);
      boolE(0);
      setState(127);
      match(sprintParser::T__1);
      setState(128);
      block();
      setState(138);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(129);
          match(sprintParser::T__11);
          setState(130);
          match(sprintParser::T__10);
          setState(131);
          match(sprintParser::T__0);
          setState(132);
          boolE(0);
          setState(133);
          match(sprintParser::T__1);
          setState(134);
          block(); 
        }
        setState(140);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      }
      setState(143);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sprintParser::T__11) {
        setState(141);
        match(sprintParser::T__11);
        setState(142);
        block();
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<IfStatementContext *>(_tracker.createInstance<sprintParser::IfContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(145);
      match(sprintParser::T__10);
      setState(146);
      match(sprintParser::T__0);
      setState(147);
      boolE(0);
      setState(148);
      match(sprintParser::T__1);
      setState(149);
      block();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<IfStatementContext *>(_tracker.createInstance<sprintParser::IfElseContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(151);
      match(sprintParser::T__10);
      setState(152);
      match(sprintParser::T__0);
      setState(153);
      boolE(0);
      setState(154);
      match(sprintParser::T__1);
      setState(155);
      block();
      setState(156);
      match(sprintParser::T__11);
      setState(157);
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
    setState(161);
    match(sprintParser::T__12);
    setState(162);
    match(sprintParser::T__0);
    setState(163);
    boolE(0);
    setState(164);
    match(sprintParser::T__1);
    setState(165);
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
    setState(167);
    match(sprintParser::T__13);
    setState(168);
    block();
    setState(169);
    match(sprintParser::T__12);
    setState(170);
    match(sprintParser::T__0);
    setState(171);
    boolE(0);
    setState(172);
    match(sprintParser::T__1);
    setState(173);
    match(sprintParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

sprintParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sprintParser::ForStatementContext::getRuleIndex() const {
  return sprintParser::RuleForStatement;
}

void sprintParser::ForStatementContext::copyFrom(ForStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FORContext ------------------------------------------------------------------

sprintParser::Init_statementContext* sprintParser::FORContext::init_statement() {
  return getRuleContext<sprintParser::Init_statementContext>(0);
}

sprintParser::BoolEContext* sprintParser::FORContext::boolE() {
  return getRuleContext<sprintParser::BoolEContext>(0);
}

sprintParser::Iteration_exprContext* sprintParser::FORContext::iteration_expr() {
  return getRuleContext<sprintParser::Iteration_exprContext>(0);
}

sprintParser::BlockContext* sprintParser::FORContext::block() {
  return getRuleContext<sprintParser::BlockContext>(0);
}

sprintParser::FORContext::FORContext(ForStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::FORContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitFOR(this);
  else
    return visitor->visitChildren(this);
}
sprintParser::ForStatementContext* sprintParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, sprintParser::RuleForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<ForStatementContext *>(_tracker.createInstance<sprintParser::FORContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(sprintParser::T__14);
    setState(176);
    match(sprintParser::T__0);
    setState(177);
    init_statement();
    setState(178);
    match(sprintParser::T__5);
    setState(179);
    boolE(0);
    setState(180);
    match(sprintParser::T__5);
    setState(181);
    iteration_expr();
    setState(182);
    match(sprintParser::T__1);
    setState(183);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Init_statementContext ------------------------------------------------------------------

sprintParser::Init_statementContext::Init_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

sprintParser::DeclarationContext* sprintParser::Init_statementContext::declaration() {
  return getRuleContext<sprintParser::DeclarationContext>(0);
}

sprintParser::Iteration_exprContext* sprintParser::Init_statementContext::iteration_expr() {
  return getRuleContext<sprintParser::Iteration_exprContext>(0);
}


size_t sprintParser::Init_statementContext::getRuleIndex() const {
  return sprintParser::RuleInit_statement;
}


antlrcpp::Any sprintParser::Init_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitInit_statement(this);
  else
    return visitor->visitChildren(this);
}

sprintParser::Init_statementContext* sprintParser::init_statement() {
  Init_statementContext *_localctx = _tracker.createInstance<Init_statementContext>(_ctx, getState());
  enterRule(_localctx, 28, sprintParser::RuleInit_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(187);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sprintParser::TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(185);
        declaration();
        break;
      }

      case sprintParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(186);
        iteration_expr();
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

//----------------- Iteration_exprContext ------------------------------------------------------------------

sprintParser::Iteration_exprContext::Iteration_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sprintParser::Iteration_exprContext::getRuleIndex() const {
  return sprintParser::RuleIteration_expr;
}

void sprintParser::Iteration_exprContext::copyFrom(Iteration_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ITERATION_EXPRContext ------------------------------------------------------------------

std::vector<sprintParser::AssignmentContext *> sprintParser::ITERATION_EXPRContext::assignment() {
  return getRuleContexts<sprintParser::AssignmentContext>();
}

sprintParser::AssignmentContext* sprintParser::ITERATION_EXPRContext::assignment(size_t i) {
  return getRuleContext<sprintParser::AssignmentContext>(i);
}

sprintParser::ITERATION_EXPRContext::ITERATION_EXPRContext(Iteration_exprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::ITERATION_EXPRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitITERATION_EXPR(this);
  else
    return visitor->visitChildren(this);
}
sprintParser::Iteration_exprContext* sprintParser::iteration_expr() {
  Iteration_exprContext *_localctx = _tracker.createInstance<Iteration_exprContext>(_ctx, getState());
  enterRule(_localctx, 30, sprintParser::RuleIteration_expr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Iteration_exprContext *>(_tracker.createInstance<sprintParser::ITERATION_EXPRContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(189);
    assignment();
    setState(194);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sprintParser::T__2) {
      setState(190);
      match(sprintParser::T__2);
      setState(191);
      assignment();
      setState(196);
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
  enterRule(_localctx, 32, sprintParser::RuleVarDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(227);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarDeclarationContext *>(_tracker.createInstance<sprintParser::InitializedDecContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(197);
      match(sprintParser::ID);
      setState(198);
      match(sprintParser::T__7);
      setState(199);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarDeclarationContext *>(_tracker.createInstance<sprintParser::NonInitDecContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(200);
      match(sprintParser::ID);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<VarDeclarationContext *>(_tracker.createInstance<sprintParser::InitializedArrDecContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(201);
      match(sprintParser::ID);
      setState(202);
      match(sprintParser::T__8);
      setState(204);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sprintParser::INT) {
        setState(203);
        match(sprintParser::INT);
      }
      setState(206);
      match(sprintParser::T__9);
      setState(207);
      match(sprintParser::T__7);
      setState(221);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(208);
        match(sprintParser::T__3);
        setState(209);
        expr(0);
        setState(214);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == sprintParser::T__2) {
          setState(210);
          match(sprintParser::T__2);
          setState(211);
          expr(0);
          setState(216);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(217);
        match(sprintParser::T__4);
        break;
      }

      case 2: {
        setState(219);
        match(sprintParser::T__3);
        setState(220);
        match(sprintParser::T__4);
        break;
      }

      }
      break;
    }

    case 4: {
      _localctx = dynamic_cast<VarDeclarationContext *>(_tracker.createInstance<sprintParser::NonInitArrDecContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(223);
      match(sprintParser::ID);
      setState(224);
      match(sprintParser::T__8);
      setState(225);
      match(sprintParser::INT);
      setState(226);
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
  enterRule(_localctx, 34, sprintParser::RuleArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    expr(0);
    setState(234);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sprintParser::T__2) {
      setState(230);
      match(sprintParser::T__2);
      setState(231);
      expr(0);
      setState(236);
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
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, sprintParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(254);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CALL_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(238);
      call();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ARR_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(239);
      match(sprintParser::ID);
      setState(240);
      match(sprintParser::T__8);
      setState(241);
      expr(0);
      setState(242);
      match(sprintParser::T__9);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PAREN_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(244);
      match(sprintParser::T__0);
      setState(245);
      expr(0);
      setState(246);
      match(sprintParser::T__1);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<UNARY_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(248);
      match(sprintParser::PLUS_MINUS);
      setState(249);
      expr(7);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ASSIGNMENT_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(250);
      assignment();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<VAR_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(251);
      match(sprintParser::ID);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<NUM_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(252);
      match(sprintParser::INT);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<CHAR_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(253);
      match(sprintParser::CHAR);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(264);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(262);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MULT_EXPRContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(256);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(257);
          match(sprintParser::T__15);
          setState(258);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ADD_MINUS_EXPRContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(259);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(260);
          match(sprintParser::PLUS_MINUS);
          setState(261);
          expr(6);
          break;
        }

        } 
      }
      setState(266);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
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
  size_t startState = 38;
  enterRecursionRule(_localctx, 38, sprintParser::RuleBoolE, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(282);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NOTContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(268);
      match(sprintParser::T__16);
      setState(269);
      boolE(6);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PAREN_BOOLEContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(270);
      match(sprintParser::T__0);
      setState(271);
      boolE(0);
      setState(272);
      match(sprintParser::T__1);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CMPLtGtContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(274);
      expr(0);
      setState(275);
      match(sprintParser::LT_GT);
      setState(276);
      expr(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CMPEqNeqContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(278);
      expr(0);
      setState(279);
      match(sprintParser::EQ_NEQ);
      setState(280);
      expr(0);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(292);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(290);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ANDContext>(_tracker.createInstance<BoolEContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBoolE);
          setState(284);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(285);
          match(sprintParser::T__17);
          setState(286);
          boolE(3);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ORContext>(_tracker.createInstance<BoolEContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBoolE);
          setState(287);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(288);
          match(sprintParser::T__18);
          setState(289);
          boolE(2);
          break;
        }

        } 
      }
      setState(294);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
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
    case 18: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);
    case 19: return boolESempred(dynamic_cast<BoolEContext *>(context), predicateIndex);

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
  "doWhileStatement", "forStatement", "init_statement", "iteration_expr", 
  "varDeclaration", "arguments", "expr", "boolE"
};

std::vector<std::string> sprintParser::_literalNames = {
  "", "'('", "')'", "','", "'{'", "'}'", "';'", "'return'", "'='", "'['", 
  "']'", "'if'", "'else'", "'while'", "'do'", "'for'", "'*'", "'!'", "'&&'", 
  "'||'", "'int'", "", "", "", "", "", "", "", "'_'"
};

std::vector<std::string> sprintParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "TYPE", "ID", "INT", "PLUS_MINUS", "LT_GT", "EQ_NEQ", "LETTER", 
  "DIGIT", "UNDER_SCORE", "CHAR", "INLINE_COMMENT", "MULTILINE_COMMENT", 
  "INCLUDE", "WS"
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
    0x3, 0x23, 0x12a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x3, 0x2, 0x6, 0x2, 0x2c, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x2d, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x34, 0xa, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x3c, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x3f, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x46, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 
    0x49, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x5e, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x67, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x6a, 
    0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x76, 0xa, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x7b, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x8b, 0xa, 
    0xc, 0xc, 0xc, 0xe, 0xc, 0x8e, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0x92, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0xa2, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xbe, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x7, 0x11, 0xc3, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xc6, 0xb, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x5, 0x12, 0xcf, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0xd7, 0xa, 0x12, 0xc, 0x12, 
    0xe, 0x12, 0xda, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x5, 0x12, 0xe0, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x5, 0x12, 0xe6, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 
    0xeb, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0xee, 0xb, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x101, 0xa, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x109, 
    0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x10c, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x5, 0x15, 0x11d, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x125, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 
    0x128, 0xb, 0x15, 0x3, 0x15, 0x2, 0x4, 0x26, 0x28, 0x16, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2, 0x2, 0x2, 0x13f, 0x2, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x6, 0x38, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x40, 0x3, 0x2, 0x2, 0x2, 0xa, 0x43, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0xe, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x10, 0x62, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x75, 0x3, 0x2, 0x2, 0x2, 0x14, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa3, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xb1, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x20, 0xbf, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x24, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x100, 0x3, 0x2, 0x2, 0x2, 0x28, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2c, 
    0x5, 0x4, 0x3, 0x2, 0x2b, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x16, 0x2, 
    0x2, 0x30, 0x31, 0x7, 0x17, 0x2, 0x2, 0x31, 0x33, 0x7, 0x3, 0x2, 0x2, 
    0x32, 0x34, 0x5, 0x6, 0x4, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x33, 
    0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 
    0x7, 0x4, 0x2, 0x2, 0x36, 0x37, 0x5, 0xa, 0x6, 0x2, 0x37, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x3d, 0x5, 0x8, 0x5, 0x2, 0x39, 0x3a, 0x7, 0x5, 
    0x2, 0x2, 0x3a, 0x3c, 0x5, 0x8, 0x5, 0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x16, 0x2, 0x2, 0x41, 0x42, 
    0x7, 0x17, 0x2, 0x2, 0x42, 0x9, 0x3, 0x2, 0x2, 0x2, 0x43, 0x47, 0x7, 
    0x6, 0x2, 0x2, 0x44, 0x46, 0x5, 0xc, 0x7, 0x2, 0x45, 0x44, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x49, 0x3, 0x2, 0x2, 0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x48, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0x7, 0x2, 0x2, 0x4b, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x5e, 0x5, 0xa, 0x6, 0x2, 0x4d, 0x4e, 
    0x5, 0x10, 0x9, 0x2, 0x4e, 0x4f, 0x7, 0x8, 0x2, 0x2, 0x4f, 0x5e, 0x3, 
    0x2, 0x2, 0x2, 0x50, 0x51, 0x5, 0xe, 0x8, 0x2, 0x51, 0x52, 0x7, 0x8, 
    0x2, 0x2, 0x52, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x5, 0x12, 0xa, 
    0x2, 0x54, 0x55, 0x7, 0x8, 0x2, 0x2, 0x55, 0x5e, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x57, 0x5, 0x14, 0xb, 0x2, 0x57, 0x58, 0x7, 0x8, 0x2, 0x2, 0x58, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5e, 0x5, 0x16, 0xc, 0x2, 0x5a, 0x5e, 
    0x5, 0x18, 0xd, 0x2, 0x5b, 0x5e, 0x5, 0x1a, 0xe, 0x2, 0x5c, 0x5e, 0x5, 
    0x1c, 0xf, 0x2, 0x5d, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x50, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x5d, 0x56, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x5d, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 
    0x7, 0x9, 0x2, 0x2, 0x60, 0x61, 0x5, 0x26, 0x14, 0x2, 0x61, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0x16, 0x2, 0x2, 0x63, 0x68, 0x5, 0x22, 
    0x12, 0x2, 0x64, 0x65, 0x7, 0x5, 0x2, 0x2, 0x65, 0x67, 0x5, 0x22, 0x12, 
    0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 
    0x7, 0x17, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0xa, 0x2, 0x2, 0x6d, 0x76, 0x5, 
    0x26, 0x14, 0x2, 0x6e, 0x6f, 0x7, 0x17, 0x2, 0x2, 0x6f, 0x70, 0x7, 0xb, 
    0x2, 0x2, 0x70, 0x71, 0x5, 0x26, 0x14, 0x2, 0x71, 0x72, 0x7, 0xc, 0x2, 
    0x2, 0x72, 0x73, 0x7, 0xa, 0x2, 0x2, 0x73, 0x74, 0x5, 0x26, 0x14, 0x2, 
    0x74, 0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x76, 0x13, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 
    0x7, 0x17, 0x2, 0x2, 0x78, 0x7a, 0x7, 0x3, 0x2, 0x2, 0x79, 0x7b, 0x5, 
    0x24, 0x13, 0x2, 0x7a, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 
    0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x4, 0x2, 
    0x2, 0x7d, 0x15, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x7, 0xd, 0x2, 0x2, 
    0x7f, 0x80, 0x7, 0x3, 0x2, 0x2, 0x80, 0x81, 0x5, 0x28, 0x15, 0x2, 0x81, 
    0x82, 0x7, 0x4, 0x2, 0x2, 0x82, 0x8c, 0x5, 0xa, 0x6, 0x2, 0x83, 0x84, 
    0x7, 0xe, 0x2, 0x2, 0x84, 0x85, 0x7, 0xd, 0x2, 0x2, 0x85, 0x86, 0x7, 
    0x3, 0x2, 0x2, 0x86, 0x87, 0x5, 0x28, 0x15, 0x2, 0x87, 0x88, 0x7, 0x4, 
    0x2, 0x2, 0x88, 0x89, 0x5, 0xa, 0x6, 0x2, 0x89, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x83, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8e, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 
    0x7, 0xe, 0x2, 0x2, 0x90, 0x92, 0x5, 0xa, 0x6, 0x2, 0x91, 0x8f, 0x3, 
    0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0x93, 0x94, 0x7, 0xd, 0x2, 0x2, 0x94, 0x95, 0x7, 0x3, 0x2, 
    0x2, 0x95, 0x96, 0x5, 0x28, 0x15, 0x2, 0x96, 0x97, 0x7, 0x4, 0x2, 0x2, 
    0x97, 0x98, 0x5, 0xa, 0x6, 0x2, 0x98, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0x9a, 0x7, 0xd, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x3, 0x2, 0x2, 0x9b, 0x9c, 
    0x5, 0x28, 0x15, 0x2, 0x9c, 0x9d, 0x7, 0x4, 0x2, 0x2, 0x9d, 0x9e, 0x5, 
    0xa, 0x6, 0x2, 0x9e, 0x9f, 0x7, 0xe, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0xa, 
    0x6, 0x2, 0xa0, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0xa1, 0x93, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0x17, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0xf, 0x2, 0x2, 0xa4, 
    0xa5, 0x7, 0x3, 0x2, 0x2, 0xa5, 0xa6, 0x5, 0x28, 0x15, 0x2, 0xa6, 0xa7, 
    0x7, 0x4, 0x2, 0x2, 0xa7, 0xa8, 0x5, 0xa, 0x6, 0x2, 0xa8, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0x10, 0x2, 0x2, 0xaa, 0xab, 0x5, 0xa, 
    0x6, 0x2, 0xab, 0xac, 0x7, 0xf, 0x2, 0x2, 0xac, 0xad, 0x7, 0x3, 0x2, 
    0x2, 0xad, 0xae, 0x5, 0x28, 0x15, 0x2, 0xae, 0xaf, 0x7, 0x4, 0x2, 0x2, 
    0xaf, 0xb0, 0x7, 0x8, 0x2, 0x2, 0xb0, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xb2, 0x7, 0x11, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x3, 0x2, 0x2, 0xb3, 0xb4, 
    0x5, 0x1e, 0x10, 0x2, 0xb4, 0xb5, 0x7, 0x8, 0x2, 0x2, 0xb5, 0xb6, 0x5, 
    0x28, 0x15, 0x2, 0xb6, 0xb7, 0x7, 0x8, 0x2, 0x2, 0xb7, 0xb8, 0x5, 0x20, 
    0x11, 0x2, 0xb8, 0xb9, 0x7, 0x4, 0x2, 0x2, 0xb9, 0xba, 0x5, 0xa, 0x6, 
    0x2, 0xba, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbe, 0x5, 0x10, 0x9, 0x2, 
    0xbc, 0xbe, 0x5, 0x20, 0x11, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 
    0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc4, 
    0x5, 0x12, 0xa, 0x2, 0xc0, 0xc1, 0x7, 0x5, 0x2, 0x2, 0xc1, 0xc3, 0x5, 
    0x12, 0xa, 0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc6, 0x3, 0x2, 
    0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 
    0x2, 0xc5, 0x21, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 
    0xc7, 0xc8, 0x7, 0x17, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0xa, 0x2, 0x2, 0xc9, 
    0xe6, 0x5, 0x26, 0x14, 0x2, 0xca, 0xe6, 0x7, 0x17, 0x2, 0x2, 0xcb, 0xcc, 
    0x7, 0x17, 0x2, 0x2, 0xcc, 0xce, 0x7, 0xb, 0x2, 0x2, 0xcd, 0xcf, 0x7, 
    0x18, 0x2, 0x2, 0xce, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 
    0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0xc, 0x2, 
    0x2, 0xd1, 0xdf, 0x7, 0xa, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x6, 0x2, 0x2, 
    0xd3, 0xd8, 0x5, 0x26, 0x14, 0x2, 0xd4, 0xd5, 0x7, 0x5, 0x2, 0x2, 0xd5, 
    0xd7, 0x5, 0x26, 0x14, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xda, 
    0x3, 0x2, 0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 
    0x2, 0x2, 0x2, 0xd9, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xdc, 0x7, 0x7, 0x2, 0x2, 0xdc, 0xe0, 0x3, 0x2, 0x2, 
    0x2, 0xdd, 0xde, 0x7, 0x6, 0x2, 0x2, 0xde, 0xe0, 0x7, 0x7, 0x2, 0x2, 
    0xdf, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0xe6, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0x17, 0x2, 0x2, 0xe2, 0xe3, 
    0x7, 0xb, 0x2, 0x2, 0xe3, 0xe4, 0x7, 0x18, 0x2, 0x2, 0xe4, 0xe6, 0x7, 
    0xc, 0x2, 0x2, 0xe5, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0xe5, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe1, 0x3, 0x2, 0x2, 
    0x2, 0xe6, 0x23, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xec, 0x5, 0x26, 0x14, 0x2, 
    0xe8, 0xe9, 0x7, 0x5, 0x2, 0x2, 0xe9, 0xeb, 0x5, 0x26, 0x14, 0x2, 0xea, 
    0xe8, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xee, 0x3, 0x2, 0x2, 0x2, 0xec, 0xea, 
    0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0xee, 0xec, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x8, 0x14, 
    0x1, 0x2, 0xf0, 0x101, 0x5, 0x14, 0xb, 0x2, 0xf1, 0xf2, 0x7, 0x17, 0x2, 
    0x2, 0xf2, 0xf3, 0x7, 0xb, 0x2, 0x2, 0xf3, 0xf4, 0x5, 0x26, 0x14, 0x2, 
    0xf4, 0xf5, 0x7, 0xc, 0x2, 0x2, 0xf5, 0x101, 0x3, 0x2, 0x2, 0x2, 0xf6, 
    0xf7, 0x7, 0x3, 0x2, 0x2, 0xf7, 0xf8, 0x5, 0x26, 0x14, 0x2, 0xf8, 0xf9, 
    0x7, 0x4, 0x2, 0x2, 0xf9, 0x101, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x7, 
    0x19, 0x2, 0x2, 0xfb, 0x101, 0x5, 0x26, 0x14, 0x9, 0xfc, 0x101, 0x5, 
    0x12, 0xa, 0x2, 0xfd, 0x101, 0x7, 0x17, 0x2, 0x2, 0xfe, 0x101, 0x7, 
    0x18, 0x2, 0x2, 0xff, 0x101, 0x7, 0x1f, 0x2, 0x2, 0x100, 0xef, 0x3, 
    0x2, 0x2, 0x2, 0x100, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x100, 0xf6, 0x3, 0x2, 
    0x2, 0x2, 0x100, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0x100, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 
    0x100, 0xff, 0x3, 0x2, 0x2, 0x2, 0x101, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x102, 
    0x103, 0xc, 0x8, 0x2, 0x2, 0x103, 0x104, 0x7, 0x12, 0x2, 0x2, 0x104, 
    0x109, 0x5, 0x26, 0x14, 0x9, 0x105, 0x106, 0xc, 0x7, 0x2, 0x2, 0x106, 
    0x107, 0x7, 0x19, 0x2, 0x2, 0x107, 0x109, 0x5, 0x26, 0x14, 0x8, 0x108, 
    0x102, 0x3, 0x2, 0x2, 0x2, 0x108, 0x105, 0x3, 0x2, 0x2, 0x2, 0x109, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 
    0x10b, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x27, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x8, 0x15, 0x1, 0x2, 0x10e, 0x10f, 
    0x7, 0x13, 0x2, 0x2, 0x10f, 0x11d, 0x5, 0x28, 0x15, 0x8, 0x110, 0x111, 
    0x7, 0x3, 0x2, 0x2, 0x111, 0x112, 0x5, 0x28, 0x15, 0x2, 0x112, 0x113, 
    0x7, 0x4, 0x2, 0x2, 0x113, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 
    0x5, 0x26, 0x14, 0x2, 0x115, 0x116, 0x7, 0x1a, 0x2, 0x2, 0x116, 0x117, 
    0x5, 0x26, 0x14, 0x2, 0x117, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 
    0x5, 0x26, 0x14, 0x2, 0x119, 0x11a, 0x7, 0x1b, 0x2, 0x2, 0x11a, 0x11b, 
    0x5, 0x26, 0x14, 0x2, 0x11b, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x11c, 0x110, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x114, 
    0x3, 0x2, 0x2, 0x2, 0x11c, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x126, 
    0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0xc, 0x4, 0x2, 0x2, 0x11f, 0x120, 
    0x7, 0x14, 0x2, 0x2, 0x120, 0x125, 0x5, 0x28, 0x15, 0x5, 0x121, 0x122, 
    0xc, 0x3, 0x2, 0x2, 0x122, 0x123, 0x7, 0x15, 0x2, 0x2, 0x123, 0x125, 
    0x5, 0x28, 0x15, 0x4, 0x124, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x124, 0x121, 
    0x3, 0x2, 0x2, 0x2, 0x125, 0x128, 0x3, 0x2, 0x2, 0x2, 0x126, 0x124, 
    0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x3, 0x2, 0x2, 0x2, 0x127, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x2d, 0x33, 0x3d, 
    0x47, 0x5d, 0x68, 0x75, 0x7a, 0x8c, 0x91, 0xa1, 0xbd, 0xc4, 0xce, 0xd8, 
    0xdf, 0xe5, 0xec, 0x100, 0x108, 0x10a, 0x11c, 0x124, 0x126, 
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
