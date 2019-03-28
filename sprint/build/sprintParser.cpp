
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
    setState(33); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(32);
      funcDeclaration();
      setState(35); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == sprintParser::T__16);
   
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
    setState(37);
    type();
    setState(38);
    match(sprintParser::ID);
    setState(39);
    match(sprintParser::T__0);
    setState(41);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == sprintParser::T__16) {
      setState(40);
      formalParameters();
    }
    setState(43);
    match(sprintParser::T__1);
    setState(44);
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
    setState(46);
    parameter();
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sprintParser::T__2) {
      setState(47);
      match(sprintParser::T__2);
      setState(48);
      parameter();
      setState(53);
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
    setState(54);
    type();
    setState(55);
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
    setState(57);
    match(sprintParser::T__3);
    setState(61);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << sprintParser::T__3)
      | (1ULL << sprintParser::T__5)
      | (1ULL << sprintParser::T__8)
      | (1ULL << sprintParser::T__10)
      | (1ULL << sprintParser::T__11)
      | (1ULL << sprintParser::T__16)
      | (1ULL << sprintParser::ID))) != 0)) {
      setState(58);
      statement();
      setState(63);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(64);
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

sprintParser::AffectStatementContext* sprintParser::StatementContext::affectStatement() {
  return getRuleContext<sprintParser::AffectStatementContext>(0);
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
    setState(73);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case sprintParser::T__3: {
        enterOuterAlt(_localctx, 1);
        setState(66);
        block();
        break;
      }

      case sprintParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(67);
        declStatement();
        break;
      }

      case sprintParser::T__5: {
        enterOuterAlt(_localctx, 3);
        setState(68);
        retStatement();
        break;
      }

      case sprintParser::ID: {
        enterOuterAlt(_localctx, 4);
        setState(69);
        affectStatement();
        break;
      }

      case sprintParser::T__8: {
        enterOuterAlt(_localctx, 5);
        setState(70);
        ifStatement();
        break;
      }

      case sprintParser::T__10: {
        enterOuterAlt(_localctx, 6);
        setState(71);
        whileDoStatement();
        break;
      }

      case sprintParser::T__11: {
        enterOuterAlt(_localctx, 7);
        setState(72);
        doWhileStatement();
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
    setState(75);
    match(sprintParser::T__5);
    setState(76);
    expr(0);
    setState(77);
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
    setState(79);
    type();
    setState(80);
    varDeclaration();
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == sprintParser::T__2) {
      setState(81);
      match(sprintParser::T__2);
      setState(82);
      varDeclaration();
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(88);
    match(sprintParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AffectStatementContext ------------------------------------------------------------------

sprintParser::AffectStatementContext::AffectStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t sprintParser::AffectStatementContext::getRuleIndex() const {
  return sprintParser::RuleAffectStatement;
}

void sprintParser::AffectStatementContext::copyFrom(AffectStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AFFECT_STMTContext ------------------------------------------------------------------

tree::TerminalNode* sprintParser::AFFECT_STMTContext::ID() {
  return getToken(sprintParser::ID, 0);
}

sprintParser::ExprContext* sprintParser::AFFECT_STMTContext::expr() {
  return getRuleContext<sprintParser::ExprContext>(0);
}

sprintParser::AFFECT_STMTContext::AFFECT_STMTContext(AffectStatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any sprintParser::AFFECT_STMTContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<sprintVisitor*>(visitor))
    return parserVisitor->visitAFFECT_STMT(this);
  else
    return visitor->visitChildren(this);
}
sprintParser::AffectStatementContext* sprintParser::affectStatement() {
  AffectStatementContext *_localctx = _tracker.createInstance<AffectStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, sprintParser::RuleAffectStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<AffectStatementContext *>(_tracker.createInstance<sprintParser::AFFECT_STMTContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(sprintParser::ID);
    setState(91);
    match(sprintParser::T__7);
    setState(92);
    expr(0);
    setState(93);
    match(sprintParser::T__6);
   
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
  enterRule(_localctx, 18, sprintParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(130);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<IfStatementContext *>(_tracker.createInstance<sprintParser::IfElseIfElseContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(95);
      match(sprintParser::T__8);
      setState(96);
      match(sprintParser::T__0);
      setState(97);
      boolE(0);
      setState(98);
      match(sprintParser::T__1);
      setState(99);
      block();
      setState(109);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(100);
          match(sprintParser::T__9);
          setState(101);
          match(sprintParser::T__8);
          setState(102);
          match(sprintParser::T__0);
          setState(103);
          boolE(0);
          setState(104);
          match(sprintParser::T__1);
          setState(105);
          block(); 
        }
        setState(111);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      }
      setState(114);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == sprintParser::T__9) {
        setState(112);
        match(sprintParser::T__9);
        setState(113);
        block();
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<IfStatementContext *>(_tracker.createInstance<sprintParser::IfContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(116);
      match(sprintParser::T__8);
      setState(117);
      match(sprintParser::T__0);
      setState(118);
      boolE(0);
      setState(119);
      match(sprintParser::T__1);
      setState(120);
      block();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<IfStatementContext *>(_tracker.createInstance<sprintParser::IfElseContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(122);
      match(sprintParser::T__8);
      setState(123);
      match(sprintParser::T__0);
      setState(124);
      boolE(0);
      setState(125);
      match(sprintParser::T__1);
      setState(126);
      block();
      setState(127);
      match(sprintParser::T__9);
      setState(128);
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
  enterRule(_localctx, 20, sprintParser::RuleWhileDoStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<WhileDoStatementContext *>(_tracker.createInstance<sprintParser::WhileDoContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(sprintParser::T__10);
    setState(133);
    match(sprintParser::T__0);
    setState(134);
    boolE(0);
    setState(135);
    match(sprintParser::T__1);
    setState(136);
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
  enterRule(_localctx, 22, sprintParser::RuleDoWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<DoWhileStatementContext *>(_tracker.createInstance<sprintParser::DoWhileContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(sprintParser::T__11);
    setState(139);
    block();
    setState(140);
    match(sprintParser::T__10);
    setState(141);
    match(sprintParser::T__0);
    setState(142);
    boolE(0);
    setState(143);
    match(sprintParser::T__1);
    setState(144);
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
  enterRule(_localctx, 24, sprintParser::RuleVarDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VarDeclarationContext *>(_tracker.createInstance<sprintParser::InitializedDecContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(146);
      match(sprintParser::ID);
      setState(147);
      match(sprintParser::T__7);
      setState(148);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VarDeclarationContext *>(_tracker.createInstance<sprintParser::NonInitDecContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(149);
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
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, sprintParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(164);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PAREN_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(153);
      match(sprintParser::T__0);
      setState(154);
      expr(0);
      setState(155);
      match(sprintParser::T__1);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<UNARY_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(157);
      match(sprintParser::PLUS_MINUS);
      setState(158);
      expr(6);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<AFFECT_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(159);
      match(sprintParser::ID);
      setState(160);
      match(sprintParser::T__7);
      setState(161);
      expr(3);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<VAR_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(162);
      match(sprintParser::ID);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NUM_EXPRContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(163);
      match(sprintParser::INT);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(174);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(172);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MULT_EXPRContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(166);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(167);
          match(sprintParser::T__12);
          setState(168);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ADD_MINUS_EXPRContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(169);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(170);
          match(sprintParser::PLUS_MINUS);
          setState(171);
          expr(5);
          break;
        }

        } 
      }
      setState(176);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
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
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, sprintParser::RuleBoolE, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(192);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NOTContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(178);
      match(sprintParser::T__13);
      setState(179);
      boolE(6);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PAREN_BOOLEContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(180);
      match(sprintParser::T__0);
      setState(181);
      boolE(0);
      setState(182);
      match(sprintParser::T__1);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CMPLtGtContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(184);
      expr(0);
      setState(185);
      match(sprintParser::LT_GT);
      setState(186);
      expr(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CMPEqNeqContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(188);
      expr(0);
      setState(189);
      match(sprintParser::EQ_NEQ);
      setState(190);
      expr(0);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(202);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(200);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ANDContext>(_tracker.createInstance<BoolEContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBoolE);
          setState(194);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(195);
          match(sprintParser::T__14);
          setState(196);
          boolE(3);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ORContext>(_tracker.createInstance<BoolEContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBoolE);
          setState(197);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(198);
          match(sprintParser::T__15);
          setState(199);
          boolE(2);
          break;
        }

        } 
      }
      setState(204);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
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
  enterRule(_localctx, 30, sprintParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(sprintParser::T__16);
   
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
    case 13: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);
    case 14: return boolESempred(dynamic_cast<BoolEContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool sprintParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

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
  "retStatement", "declStatement", "affectStatement", "ifStatement", "whileDoStatement", 
  "doWhileStatement", "varDeclaration", "expr", "boolE", "type"
};

std::vector<std::string> sprintParser::_literalNames = {
  "", "'('", "')'", "','", "'{'", "'}'", "'return'", "';'", "'='", "'if'", 
  "'else'", "'while'", "'do'", "'*'", "'!'", "'&&'", "'||'", "'int'", "", 
  "", "", "", "", "", "", "'_'"
};

std::vector<std::string> sprintParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "ID", "INT", "PLUS_MINUS", "LT_GT", "EQ_NEQ", "LETTER", "DIGIT", "UNDER_SCORE", 
  "INLINE_COMMENT", "MULTILINE_COMMENT", "INCLUDE", "WS"
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
    0x3, 0x1f, 0xd2, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x3, 0x2, 
    0x6, 0x2, 0x24, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x25, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2c, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x34, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0x37, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x7, 0x6, 0x3e, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x41, 0xb, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x4c, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x56, 0xa, 
    0x9, 0xc, 0x9, 0xe, 0x9, 0x59, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x6e, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x71, 
    0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x75, 0xa, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x85, 
    0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x99, 0xa, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xa7, 
    0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x7, 0xf, 0xaf, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xb2, 0xb, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x5, 0x10, 0xc3, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xcb, 0xa, 0x10, 0xc, 0x10, 
    0xe, 0x10, 0xce, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x2, 0x4, 
    0x1c, 0x1e, 0x12, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x2, 0x2, 0x2, 0xdc, 0x2, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x27, 0x3, 0x2, 0x2, 0x2, 0x6, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x38, 0x3, 0x2, 0x2, 0x2, 0xa, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x4b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x51, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x14, 0x84, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0x86, 0x3, 0x2, 0x2, 0x2, 0x18, 0x8c, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xa6, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x20, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x24, 0x5, 0x4, 0x3, 0x2, 0x23, 0x22, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x25, 0x3, 0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 
    0x26, 0x3, 0x2, 0x2, 0x2, 0x26, 0x3, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 
    0x5, 0x20, 0x11, 0x2, 0x28, 0x29, 0x7, 0x14, 0x2, 0x2, 0x29, 0x2b, 0x7, 
    0x3, 0x2, 0x2, 0x2a, 0x2c, 0x5, 0x6, 0x4, 0x2, 0x2b, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0x2e, 0x7, 0x4, 0x2, 0x2, 0x2e, 0x2f, 0x5, 0xa, 0x6, 0x2, 
    0x2f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x30, 0x35, 0x5, 0x8, 0x5, 0x2, 0x31, 
    0x32, 0x7, 0x5, 0x2, 0x2, 0x32, 0x34, 0x5, 0x8, 0x5, 0x2, 0x33, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x5, 0x20, 0x11, 
    0x2, 0x39, 0x3a, 0x7, 0x14, 0x2, 0x2, 0x3a, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x3b, 0x3f, 0x7, 0x6, 0x2, 0x2, 0x3c, 0x3e, 0x5, 0xc, 0x7, 0x2, 0x3d, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x3, 
    0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0x7, 
    0x2, 0x2, 0x43, 0xb, 0x3, 0x2, 0x2, 0x2, 0x44, 0x4c, 0x5, 0xa, 0x6, 
    0x2, 0x45, 0x4c, 0x5, 0x10, 0x9, 0x2, 0x46, 0x4c, 0x5, 0xe, 0x8, 0x2, 
    0x47, 0x4c, 0x5, 0x12, 0xa, 0x2, 0x48, 0x4c, 0x5, 0x14, 0xb, 0x2, 0x49, 
    0x4c, 0x5, 0x16, 0xc, 0x2, 0x4a, 0x4c, 0x5, 0x18, 0xd, 0x2, 0x4b, 0x44, 
    0x3, 0x2, 0x2, 0x2, 0x4b, 0x45, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x46, 0x3, 
    0x2, 0x2, 0x2, 0x4b, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x48, 0x3, 0x2, 
    0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x8, 0x2, 0x2, 
    0x4e, 0x4f, 0x5, 0x1c, 0xf, 0x2, 0x4f, 0x50, 0x7, 0x9, 0x2, 0x2, 0x50, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x5, 0x20, 0x11, 0x2, 0x52, 0x57, 
    0x5, 0x1a, 0xe, 0x2, 0x53, 0x54, 0x7, 0x5, 0x2, 0x2, 0x54, 0x56, 0x5, 
    0x1a, 0xe, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 0x56, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x5b, 0x7, 0x9, 0x2, 0x2, 0x5b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x5d, 0x7, 0x14, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0xa, 0x2, 0x2, 0x5e, 0x5f, 
    0x5, 0x1c, 0xf, 0x2, 0x5f, 0x60, 0x7, 0x9, 0x2, 0x2, 0x60, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 0xb, 0x2, 0x2, 0x62, 0x63, 0x7, 0x3, 
    0x2, 0x2, 0x63, 0x64, 0x5, 0x1e, 0x10, 0x2, 0x64, 0x65, 0x7, 0x4, 0x2, 
    0x2, 0x65, 0x6f, 0x5, 0xa, 0x6, 0x2, 0x66, 0x67, 0x7, 0xc, 0x2, 0x2, 
    0x67, 0x68, 0x7, 0xb, 0x2, 0x2, 0x68, 0x69, 0x7, 0x3, 0x2, 0x2, 0x69, 
    0x6a, 0x5, 0x1e, 0x10, 0x2, 0x6a, 0x6b, 0x7, 0x4, 0x2, 0x2, 0x6b, 0x6c, 
    0x5, 0xa, 0x6, 0x2, 0x6c, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x66, 0x3, 
    0x2, 0x2, 0x2, 0x6e, 0x71, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x74, 0x3, 0x2, 0x2, 
    0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 0xc, 0x2, 0x2, 
    0x73, 0x75, 0x5, 0xa, 0x6, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 0x85, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 
    0x7, 0xb, 0x2, 0x2, 0x77, 0x78, 0x7, 0x3, 0x2, 0x2, 0x78, 0x79, 0x5, 
    0x1e, 0x10, 0x2, 0x79, 0x7a, 0x7, 0x4, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0xa, 
    0x6, 0x2, 0x7b, 0x85, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0xb, 0x2, 
    0x2, 0x7d, 0x7e, 0x7, 0x3, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x1e, 0x10, 0x2, 
    0x7f, 0x80, 0x7, 0x4, 0x2, 0x2, 0x80, 0x81, 0x5, 0xa, 0x6, 0x2, 0x81, 
    0x82, 0x7, 0xc, 0x2, 0x2, 0x82, 0x83, 0x5, 0xa, 0x6, 0x2, 0x83, 0x85, 
    0x3, 0x2, 0x2, 0x2, 0x84, 0x61, 0x3, 0x2, 0x2, 0x2, 0x84, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x85, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x86, 0x87, 0x7, 0xd, 0x2, 0x2, 0x87, 0x88, 0x7, 0x3, 0x2, 
    0x2, 0x88, 0x89, 0x5, 0x1e, 0x10, 0x2, 0x89, 0x8a, 0x7, 0x4, 0x2, 0x2, 
    0x8a, 0x8b, 0x5, 0xa, 0x6, 0x2, 0x8b, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x8d, 0x7, 0xe, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0xa, 0x6, 0x2, 0x8e, 0x8f, 
    0x7, 0xd, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x3, 0x2, 0x2, 0x90, 0x91, 0x5, 
    0x1e, 0x10, 0x2, 0x91, 0x92, 0x7, 0x4, 0x2, 0x2, 0x92, 0x93, 0x7, 0x9, 
    0x2, 0x2, 0x93, 0x19, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0x14, 0x2, 
    0x2, 0x95, 0x96, 0x7, 0xa, 0x2, 0x2, 0x96, 0x99, 0x5, 0x1c, 0xf, 0x2, 
    0x97, 0x99, 0x7, 0x14, 0x2, 0x2, 0x98, 0x94, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 
    0x8, 0xf, 0x1, 0x2, 0x9b, 0x9c, 0x7, 0x3, 0x2, 0x2, 0x9c, 0x9d, 0x5, 
    0x1c, 0xf, 0x2, 0x9d, 0x9e, 0x7, 0x4, 0x2, 0x2, 0x9e, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0x9f, 0xa0, 0x7, 0x16, 0x2, 0x2, 0xa0, 0xa7, 0x5, 0x1c, 0xf, 
    0x8, 0xa1, 0xa2, 0x7, 0x14, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0xa, 0x2, 0x2, 
    0xa3, 0xa7, 0x5, 0x1c, 0xf, 0x5, 0xa4, 0xa7, 0x7, 0x14, 0x2, 0x2, 0xa5, 
    0xa7, 0x7, 0x15, 0x2, 0x2, 0xa6, 0x9a, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x9f, 
    0x3, 0x2, 0x2, 0x2, 0xa6, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xb0, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0xa9, 0xc, 0x7, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0xf, 0x2, 
    0x2, 0xaa, 0xaf, 0x5, 0x1c, 0xf, 0x8, 0xab, 0xac, 0xc, 0x6, 0x2, 0x2, 
    0xac, 0xad, 0x7, 0x16, 0x2, 0x2, 0xad, 0xaf, 0x5, 0x1c, 0xf, 0x7, 0xae, 
    0xa8, 0x3, 0x2, 0x2, 0x2, 0xae, 0xab, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb2, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 
    0x2, 0x2, 0x2, 0xb1, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 
    0x2, 0x2, 0xb3, 0xb4, 0x8, 0x10, 0x1, 0x2, 0xb4, 0xb5, 0x7, 0x10, 0x2, 
    0x2, 0xb5, 0xc3, 0x5, 0x1e, 0x10, 0x8, 0xb6, 0xb7, 0x7, 0x3, 0x2, 0x2, 
    0xb7, 0xb8, 0x5, 0x1e, 0x10, 0x2, 0xb8, 0xb9, 0x7, 0x4, 0x2, 0x2, 0xb9, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x5, 0x1c, 0xf, 0x2, 0xbb, 0xbc, 
    0x7, 0x17, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x1c, 0xf, 0x2, 0xbd, 0xc3, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xbf, 0x5, 0x1c, 0xf, 0x2, 0xbf, 0xc0, 0x7, 0x18, 
    0x2, 0x2, 0xc0, 0xc1, 0x5, 0x1c, 0xf, 0x2, 0xc1, 0xc3, 0x3, 0x2, 0x2, 
    0x2, 0xc2, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xb6, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0xba, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc3, 
    0xcc, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0xc, 0x4, 0x2, 0x2, 0xc5, 0xc6, 
    0x7, 0x11, 0x2, 0x2, 0xc6, 0xcb, 0x5, 0x1e, 0x10, 0x5, 0xc7, 0xc8, 0xc, 
    0x3, 0x2, 0x2, 0xc8, 0xc9, 0x7, 0x12, 0x2, 0x2, 0xc9, 0xcb, 0x5, 0x1e, 
    0x10, 0x4, 0xca, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0xcb, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 
    0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xce, 
    0xcc, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x13, 0x2, 0x2, 0xd0, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x25, 0x2b, 0x35, 0x3f, 0x4b, 0x57, 0x6f, 
    0x74, 0x84, 0x98, 0xa6, 0xae, 0xb0, 0xc2, 0xca, 0xcc, 
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
