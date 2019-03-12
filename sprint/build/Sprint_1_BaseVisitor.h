
// Generated from Sprint_2_.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "Sprint_2_Visitor.h"


/**
 * This class provides an empty implementation of Sprint_2_Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Sprint_2_BaseVisitor : public Sprint_2_Visitor {
public:

  virtual antlrcpp::Any visitPrg(Sprint_2_Parser::PrgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncDeclaration(Sprint_2_Parser::FuncDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormalParameters(Sprint_2_Parser::FormalParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(Sprint_2_Parser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(Sprint_2_Parser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(Sprint_2_Parser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRetStatement(Sprint_2_Parser::RetStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclStatement(Sprint_2_Parser::DeclStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclaration(Sprint_2_Parser::VarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(Sprint_2_Parser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }


};

