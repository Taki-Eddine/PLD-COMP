#pragma once
#include <iostream>
#include "antlr4-runtime.h"
#include "sprintBaseVisitor.h"
#include "ST.h"

class Visitor : public sprintBaseVisitor {
  public:
    Visitor();
    virtual ~Visitor();
    antlrcpp::Any visitFuncDeclaration(sprintParser::FuncDeclarationContext *ctx) override;
    antlrcpp::Any visitInitializedDec(sprintParser::InitializedDecContext *ctx) override;
    antlrcpp::Any visitNonInitDec(sprintParser::NonInitDecContext *ctx) override;
    antlrcpp::Any visitVAR_EXPR(sprintParser::VAR_EXPRContext *ctx) override;
    antlrcpp::Any visitNUM_EXPR(sprintParser::NUM_EXPRContext *ctx) override;
    antlrcpp::Any visitRetStatement(sprintParser::RetStatementContext *ctx) override;
  private:
    ST st;
};
