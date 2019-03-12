
// Generated from Sprint_2_.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  Sprint_2_Parser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, ID = 12, INT = 13, CHAR = 14, 
    LETTER = 15, DIGIT = 16, UNDER_SCORE = 17, INCLUDE = 18, WS = 19
  };

  enum {
    RulePrg = 0, RuleFuncDeclaration = 1, RuleFormalParameters = 2, RuleParameter = 3, 
    RuleBlock = 4, RuleStatement = 5, RuleRetStatement = 6, RuleDeclStatement = 7, 
    RuleVarDeclaration = 8, RuleType = 9
  };

  Sprint_2_Parser(antlr4::TokenStream *input);
  ~Sprint_2_Parser();

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
  class RetStatementContext;
  class DeclStatementContext;
  class VarDeclarationContext;
  class TypeContext; 

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
    TypeContext *type();
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
    TypeContext *type();
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
    DeclStatementContext *declStatement();
    RetStatementContext *retStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  RetStatementContext : public antlr4::ParserRuleContext {
  public:
    RetStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *INT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetStatementContext* retStatement();

  class  DeclStatementContext : public antlr4::ParserRuleContext {
  public:
    DeclStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    std::vector<VarDeclarationContext *> varDeclaration();
    VarDeclarationContext* varDeclaration(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclStatementContext* declStatement();

  class  VarDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VarDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *CHAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarDeclarationContext* varDeclaration();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();


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

