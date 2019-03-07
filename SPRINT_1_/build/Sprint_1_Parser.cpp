
// Generated from Sprint_1_.g4 by ANTLR 4.7.2


#include "Sprint_1_Visitor.h"

#include "Sprint_1_Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Sprint_1_Parser::Sprint_1_Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Sprint_1_Parser::~Sprint_1_Parser() {
  delete _interpreter;
}

std::string Sprint_1_Parser::getGrammarFileName() const {
  return "Sprint_1_.g4";
}

const std::vector<std::string>& Sprint_1_Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Sprint_1_Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- PrgContext ------------------------------------------------------------------

Sprint_1_Parser::PrgContext::PrgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Sprint_1_Parser::RetContext* Sprint_1_Parser::PrgContext::ret() {
  return getRuleContext<Sprint_1_Parser::RetContext>(0);
}


size_t Sprint_1_Parser::PrgContext::getRuleIndex() const {
  return Sprint_1_Parser::RulePrg;
}


antlrcpp::Any Sprint_1_Parser::PrgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sprint_1_Visitor*>(visitor))
    return parserVisitor->visitPrg(this);
  else
    return visitor->visitChildren(this);
}

Sprint_1_Parser::PrgContext* Sprint_1_Parser::prg() {
  PrgContext *_localctx = _tracker.createInstance<PrgContext>(_ctx, getState());
  enterRule(_localctx, 0, Sprint_1_Parser::RulePrg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(4);
    match(Sprint_1_Parser::T__0);
    setState(5);
    match(Sprint_1_Parser::T__1);
    setState(6);
    match(Sprint_1_Parser::T__2);
    setState(7);
    match(Sprint_1_Parser::T__3);
    setState(8);
    match(Sprint_1_Parser::T__4);
    setState(9);
    ret();
    setState(10);
    match(Sprint_1_Parser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetContext ------------------------------------------------------------------

Sprint_1_Parser::RetContext::RetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Sprint_1_Parser::RetContext::INT() {
  return getToken(Sprint_1_Parser::INT, 0);
}


size_t Sprint_1_Parser::RetContext::getRuleIndex() const {
  return Sprint_1_Parser::RuleRet;
}


antlrcpp::Any Sprint_1_Parser::RetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Sprint_1_Visitor*>(visitor))
    return parserVisitor->visitRet(this);
  else
    return visitor->visitChildren(this);
}

Sprint_1_Parser::RetContext* Sprint_1_Parser::ret() {
  RetContext *_localctx = _tracker.createInstance<RetContext>(_ctx, getState());
  enterRule(_localctx, 2, Sprint_1_Parser::RuleRet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(12);
    match(Sprint_1_Parser::T__6);
    setState(13);
    match(Sprint_1_Parser::INT);
    setState(14);
    match(Sprint_1_Parser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> Sprint_1_Parser::_decisionToDFA;
atn::PredictionContextCache Sprint_1_Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Sprint_1_Parser::_atn;
std::vector<uint16_t> Sprint_1_Parser::_serializedATN;

std::vector<std::string> Sprint_1_Parser::_ruleNames = {
  "prg", "ret"
};

std::vector<std::string> Sprint_1_Parser::_literalNames = {
  "", "'int'", "'main'", "'('", "')'", "'{'", "'}'", "'return'", "';'"
};

std::vector<std::string> Sprint_1_Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "INT", "DIGIT", "WS"
};

dfa::Vocabulary Sprint_1_Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Sprint_1_Parser::_tokenNames;

Sprint_1_Parser::Initializer::Initializer() {
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
    0x3, 0xd, 0x13, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x2, 0x2, 0x4, 0x2, 0x4, 
    0x2, 0x2, 0x2, 0x10, 0x2, 0x6, 0x3, 0x2, 0x2, 0x2, 0x4, 0xe, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x7, 0x7, 0x3, 0x2, 0x2, 0x7, 0x8, 0x7, 0x4, 0x2, 0x2, 
    0x8, 0x9, 0x7, 0x5, 0x2, 0x2, 0x9, 0xa, 0x7, 0x6, 0x2, 0x2, 0xa, 0xb, 
    0x7, 0x7, 0x2, 0x2, 0xb, 0xc, 0x5, 0x4, 0x3, 0x2, 0xc, 0xd, 0x7, 0x8, 
    0x2, 0x2, 0xd, 0x3, 0x3, 0x2, 0x2, 0x2, 0xe, 0xf, 0x7, 0x9, 0x2, 0x2, 
    0xf, 0x10, 0x7, 0xb, 0x2, 0x2, 0x10, 0x11, 0x7, 0xa, 0x2, 0x2, 0x11, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Sprint_1_Parser::Initializer Sprint_1_Parser::_init;
