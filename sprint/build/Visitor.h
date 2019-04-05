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
    antlrcpp::Any visitInitializedArrDec(sprintParser::InitializedArrDecContext *ctx) override;
    antlrcpp::Any visitNonInitDec(sprintParser::NonInitDecContext *ctx) override;
    antlrcpp::Any visitNonInitArrDec(sprintParser::NonInitArrDecContext *ctx) override;
    antlrcpp::Any visitVAR_EXPR(sprintParser::VAR_EXPRContext *ctx) override;
    antlrcpp::Any visitNUM_EXPR(sprintParser::NUM_EXPRContext *ctx) override;
    antlrcpp::Any visitCHAR_EXPR(sprintParser::CHAR_EXPRContext *ctx) override;
    antlrcpp::Any visitRet(sprintParser::RetContext *ctx) override;
    antlrcpp::Any visitMULT_EXPR(sprintParser::MULT_EXPRContext *ctx) override;
    antlrcpp::Any visitADD_MINUS_EXPR(sprintParser::ADD_MINUS_EXPRContext *ctx) override;
    antlrcpp::Any visitUNARY_EXPR(sprintParser::UNARY_EXPRContext *ctx) override;
    antlrcpp::Any visitPAREN_EXPR(sprintParser::PAREN_EXPRContext *ctx) override;
    antlrcpp::Any visitARR_EXPR(sprintParser::ARR_EXPRContext *ctx) override;
    antlrcpp::Any visitASSIGNMENT_EXPR(sprintParser::ASSIGNMENT_EXPRContext *ctx) override;
    antlrcpp::Any visitSCALAR_ASSIGNMENT(sprintParser::SCALAR_ASSIGNMENTContext *ctx) override;
    antlrcpp::Any visitARR_ASSIGNMENT(sprintParser::ARR_ASSIGNMENTContext *ctx) override;
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
    antlrcpp::Any visitCALL(sprintParser::CALLContext *ctx) override;
    antlrcpp::Any visitITERATION_EXPR(sprintParser::ITERATION_EXPRContext *ctx) override;
    antlrcpp::Any visitInit_statement(sprintParser::Init_statementContext *ctx) override;
    antlrcpp::Any visitFOR(sprintParser::FORContext *ctx) override;
    antlrcpp::Any visitBITWISE_AND_EXPR(sprintParser::BITWISE_AND_EXPRContext *ctx) override;
    antlrcpp::Any visitBITWISE_XOR_EXPR(sprintParser::BITWISE_XOR_EXPRContext *ctx) override;
    antlrcpp::Any visitBITWISE_OR_EXPR(sprintParser::BITWISE_OR_EXPRContext *ctx) override;
    antlrcpp::Any visitBITWISE_SHIFT(sprintParser::BITWISE_SHIFTContext *ctx) override;
    //----------------HELPERS-------------
    int char_value(string &chr);
    //--------||
    CFG * cfg;
    BasicBlock * current_BB;
    ofstream assembly, interm;


};
