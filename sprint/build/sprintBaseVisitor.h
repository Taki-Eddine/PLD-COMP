
// Generated from sprint.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "sprintVisitor.h"


/**
 * This class provides an empty implementation of sprintVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  sprintBaseVisitor : public sprintVisitor {
public:

  virtual antlrcpp::Any visitPrg(sprintParser::PrgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncDeclaration(sprintParser::FuncDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormalParameters(sprintParser::FormalParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(sprintParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(sprintParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(sprintParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRet(sprintParser::RetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDECLARATION(sprintParser::DECLARATIONContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSCALAR_ASSIGNMENT(sprintParser::SCALAR_ASSIGNMENTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitARR_ASSIGNMENT(sprintParser::ARR_ASSIGNMENTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCALL(sprintParser::CALLContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfElseIfElse(sprintParser::IfElseIfElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf(sprintParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfElse(sprintParser::IfElseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileDo(sprintParser::WhileDoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDoWhile(sprintParser::DoWhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializedDec(sprintParser::InitializedDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNonInitDec(sprintParser::NonInitDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitializedArrDec(sprintParser::InitializedArrDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNonInitArrDec(sprintParser::NonInitArrDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArguments(sprintParser::ArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMULT_EXPR(sprintParser::MULT_EXPRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNUM_EXPR(sprintParser::NUM_EXPRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitADD_MINUS_EXPR(sprintParser::ADD_MINUS_EXPRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitARR_EXPR(sprintParser::ARR_EXPRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUNARY_EXPR(sprintParser::UNARY_EXPRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitASSIGNMENT_EXPR(sprintParser::ASSIGNMENT_EXPRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCALL_EXPR(sprintParser::CALL_EXPRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPAREN_EXPR(sprintParser::PAREN_EXPRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVAR_EXPR(sprintParser::VAR_EXPRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNOT(sprintParser::NOTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOR(sprintParser::ORContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPAREN_BOOLE(sprintParser::PAREN_BOOLEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAND(sprintParser::ANDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCMPLtGt(sprintParser::CMPLtGtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCMPEqNeq(sprintParser::CMPEqNeqContext *ctx) override {
    return visitChildren(ctx);
  }


};

