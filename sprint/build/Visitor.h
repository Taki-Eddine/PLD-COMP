#pragma once
#include <iostream>
#include <fstream>
#include <unordered_map>
#include "antlr4-runtime.h"
#include "sprintBaseVisitor.h"
#include "IR/IR.h"

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
    antlrcpp::Any visitAFFECT_STMT(sprintParser::AFFECT_STMTContext *ctx) override;
    antlrcpp::Any visitCMPLtGt(sprintParser::CMPLtGtContext *ctx) override;
    antlrcpp::Any visitCMPEqNeq(sprintParser::CMPEqNeqContext *ctx) override;
    antlrcpp::Any visitIfElse(sprintParser::IfElseContext *ctx) override;
    antlrcpp::Any visitIf(sprintParser::IfContext *ctx) override;
    antlrcpp::Any visitAND(sprintParser::ANDContext *ctx) override;
    antlrcpp::Any visitOR(sprintParser::ORContext *ctx) override;
    antlrcpp::Any visitNOT(sprintParser::NOTContext *ctx) override;
    antlrcpp::Any visitPAREN_BOOLE(sprintParser::PAREN_BOOLEContext *ctx) override;
    antlrcpp::Any visitWhileDo(sprintParser::WhileDoContext *ctx) override;
    antlrcpp::Any visitDoWhile(sprintParser::DoWhileContext *ctx) override;
    antlrcpp::Any visitIfElseIfElse(sprintParser::IfElseIfElseContext *ctx) override;
    antlrcpp::Any visitCALL_EXPR(sprintParser::CALL_EXPRContext *ctx) override;
    //--------||
    CFG * cfg;
    BasicBlock * current_BB;
    ofstream assembly, interm;


};
