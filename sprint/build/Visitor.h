#pragma once
#include <iostream>
#include <fstream>
#include "antlr4-runtime.h"
#include "sprintBaseVisitor.h"

class Visitor : public sprintBaseVisitor {
  public:
    Visitor();
    virtual ~Visitor();
    antlrcpp::Any visitPrg(sprintParser::PrgContext *ctx) override;
    antlrcpp::Any visitFuncDeclaration(sprintParser::FuncDeclarationContext *ctx) override;
    antlrcpp::Any visitInitializedDec(sprintParser::InitializedDecContext *ctx) override;
    antlrcpp::Any visitNonInitDec(sprintParser::NonInitDecContext *ctx) override;
    antlrcpp::Any visitVAR_EXPR(sprintParser::VAR_EXPRContext *ctx) override;
    antlrcpp::Any visitNUM_EXPR(sprintParser::NUM_EXPRContext *ctx) override;
    antlrcpp::Any visitRetStatement(sprintParser::RetStatementContext *ctx) override;
    antlrcpp::Any visitMULT_EXPR(sprintParser::MULT_EXPRContext *ctx) override;
    antlrcpp::Any visitADD_MINUS_EXPR(sprintParser::ADD_MINUS_EXPRContext *ctx) override;
    antlrcpp::Any visitUNARY_EXPR(sprintParser::UNARY_EXPRContext *ctx) override;
    antlrcpp::Any visitPAREN_EXPR(sprintParser::PAREN_EXPRContext *ctx) override;
    antlrcpp::Any visitAFFECT_EXPR(sprintParser::AFFECT_EXPRContext *ctx) override;
  public:
    CFG cfg;


};
