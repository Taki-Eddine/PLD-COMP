
// Generated from sprint.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  sprintParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, TYPE = 19, ID = 20, 
    INT = 21, PLUS_MINUS = 22, LT_GT = 23, EQ_NEQ = 24, LETTER = 25, DIGIT = 26, 
    UNDER_SCORE = 27, CHAR = 28, INLINE_COMMENT = 29, MULTILINE_COMMENT = 30, 
    INCLUDE = 31, WS = 32
  };

  enum {
    RulePrg = 0, RuleFuncDeclaration = 1, RuleFormalParameters = 2, RuleParameter = 3, 
    RuleBlock = 4, RuleStatement = 5, RuleRet = 6, RuleDeclaration = 7, 
    RuleAssignment = 8, RuleCall = 9, RuleIfStatement = 10, RuleWhileDoStatement = 11, 
    RuleDoWhileStatement = 12, RuleVarDeclaration = 13, RuleArguments = 14, 
    RuleExpr = 15, RuleBoolE = 16
  };

  sprintParser(antlr4::TokenStream *input);
  ~sprintParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class PrgContext;
  class FuncDeclarationContext;
  class FormalParametersContext;
  class ParameterContext;
  class BlockContext;
  class StatementContext;
  class RetContext;
  class DeclarationContext;
  class AssignmentContext;
  class CallContext;
  class IfStatementContext;
  class WhileDoStatementContext;
  class DoWhileStatementContext;
  class VarDeclarationContext;
  class ArgumentsContext;
  class ExprContext;
  class BoolEContext; 

  class  PrgContext : public antlr4::ParserRuleContext {
  public:
    PrgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FuncDeclarationContext *> funcDeclaration();
    FuncDeclarationContext* funcDeclaration(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrgContext* prg();

  class  FuncDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FuncDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *ID();
    BlockContext *block();
    FormalParametersContext *formalParameters();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncDeclarationContext* funcDeclaration();

  class  FormalParametersContext : public antlr4::ParserRuleContext {
  public:
    FormalParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormalParametersContext* formalParameters();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *ID();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    DeclarationContext *declaration();
    RetContext *ret();
    AssignmentContext *assignment();
    CallContext *call();
    IfStatementContext *ifStatement();
    WhileDoStatementContext *whileDoStatement();
    DoWhileStatementContext *doWhileStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  RetContext : public antlr4::ParserRuleContext {
  public:
    RetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetContext* ret();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DeclarationContext() = default;
    void copyFrom(DeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DECLARATIONContext : public DeclarationContext {
  public:
    DECLARATIONContext(DeclarationContext *ctx);

    antlr4::tree::TerminalNode *TYPE();
    std::vector<VarDeclarationContext *> varDeclaration();
    VarDeclarationContext* varDeclaration(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DeclarationContext* declaration();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignmentContext() = default;
    void copyFrom(AssignmentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ARR_ASSIGNMENTContext : public AssignmentContext {
  public:
    ARR_ASSIGNMENTContext(AssignmentContext *ctx);

    antlr4::tree::TerminalNode *ID();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SCALAR_ASSIGNMENTContext : public AssignmentContext {
  public:
    SCALAR_ASSIGNMENTContext(AssignmentContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignmentContext* assignment();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CallContext() = default;
    void copyFrom(CallContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CALLContext : public CallContext {
  public:
    CALLContext(CallContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ArgumentsContext *arguments();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CallContext* call();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IfStatementContext() = default;
    void copyFrom(IfStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IfContext : public IfStatementContext {
  public:
    IfContext(IfStatementContext *ctx);

    BoolEContext *boolE();
    BlockContext *block();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfElseContext : public IfStatementContext {
  public:
    IfElseContext(IfStatementContext *ctx);

    BoolEContext *boolE();
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfElseIfElseContext : public IfStatementContext {
  public:
    IfElseIfElseContext(IfStatementContext *ctx);

    std::vector<BoolEContext *> boolE();
    BoolEContext* boolE(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IfStatementContext* ifStatement();

  class  WhileDoStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileDoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    WhileDoStatementContext() = default;
    void copyFrom(WhileDoStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WhileDoContext : public WhileDoStatementContext {
  public:
    WhileDoContext(WhileDoStatementContext *ctx);

    BoolEContext *boolE();
    BlockContext *block();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  WhileDoStatementContext* whileDoStatement();

  class  DoWhileStatementContext : public antlr4::ParserRuleContext {
  public:
    DoWhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DoWhileStatementContext() = default;
    void copyFrom(DoWhileStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DoWhileContext : public DoWhileStatementContext {
  public:
    DoWhileContext(DoWhileStatementContext *ctx);

    BlockContext *block();
    BoolEContext *boolE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DoWhileStatementContext* doWhileStatement();

  class  VarDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VarDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VarDeclarationContext() = default;
    void copyFrom(VarDeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NonInitDecContext : public VarDeclarationContext {
  public:
    NonInitDecContext(VarDeclarationContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitializedArrDecContext : public VarDeclarationContext {
  public:
    InitializedArrDecContext(VarDeclarationContext *ctx);

    antlr4::tree::TerminalNode *ID();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *INT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NonInitArrDecContext : public VarDeclarationContext {
  public:
    NonInitArrDecContext(VarDeclarationContext *ctx);

    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *INT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitializedDecContext : public VarDeclarationContext {
  public:
    InitializedDecContext(VarDeclarationContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VarDeclarationContext* varDeclaration();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentsContext* arguments();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MULT_EXPRContext : public ExprContext {
  public:
    MULT_EXPRContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NUM_EXPRContext : public ExprContext {
  public:
    NUM_EXPRContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ADD_MINUS_EXPRContext : public ExprContext {
  public:
    ADD_MINUS_EXPRContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *PLUS_MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CHAR_EXPRContext : public ExprContext {
  public:
    CHAR_EXPRContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *CHAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ARR_EXPRContext : public ExprContext {
  public:
    ARR_EXPRContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UNARY_EXPRContext : public ExprContext {
  public:
    UNARY_EXPRContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *PLUS_MINUS();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ASSIGNMENT_EXPRContext : public ExprContext {
  public:
    ASSIGNMENT_EXPRContext(ExprContext *ctx);

    AssignmentContext *assignment();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CALL_EXPRContext : public ExprContext {
  public:
    CALL_EXPRContext(ExprContext *ctx);

    CallContext *call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PAREN_EXPRContext : public ExprContext {
  public:
    PAREN_EXPRContext(ExprContext *ctx);

    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VAR_EXPRContext : public ExprContext {
  public:
    VAR_EXPRContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  BoolEContext : public antlr4::ParserRuleContext {
  public:
    BoolEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BoolEContext() = default;
    void copyFrom(BoolEContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NOTContext : public BoolEContext {
  public:
    NOTContext(BoolEContext *ctx);

    BoolEContext *boolE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ORContext : public BoolEContext {
  public:
    ORContext(BoolEContext *ctx);

    std::vector<BoolEContext *> boolE();
    BoolEContext* boolE(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PAREN_BOOLEContext : public BoolEContext {
  public:
    PAREN_BOOLEContext(BoolEContext *ctx);

    BoolEContext *boolE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ANDContext : public BoolEContext {
  public:
    ANDContext(BoolEContext *ctx);

    std::vector<BoolEContext *> boolE();
    BoolEContext* boolE(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CMPLtGtContext : public BoolEContext {
  public:
    CMPLtGtContext(BoolEContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *LT_GT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CMPEqNeqContext : public BoolEContext {
  public:
    CMPEqNeqContext(BoolEContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *EQ_NEQ();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BoolEContext* boolE();
  BoolEContext* boolE(int precedence);

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool boolESempred(BoolEContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

