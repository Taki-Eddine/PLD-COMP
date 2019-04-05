
// Generated from sprint.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "sprintParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by sprintParser.
 */
class  sprintVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by sprintParser.
   */
    virtual antlrcpp::Any visitPrg(sprintParser::PrgContext *context) = 0;

    virtual antlrcpp::Any visitFuncDeclaration(sprintParser::FuncDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFormalParameters(sprintParser::FormalParametersContext *context) = 0;

    virtual antlrcpp::Any visitParameter(sprintParser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitBlock(sprintParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitStatement(sprintParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitRet(sprintParser::RetContext *context) = 0;

    virtual antlrcpp::Any visitDECLARATION(sprintParser::DECLARATIONContext *context) = 0;

    virtual antlrcpp::Any visitSCALAR_ASSIGNMENT(sprintParser::SCALAR_ASSIGNMENTContext *context) = 0;

    virtual antlrcpp::Any visitARR_ASSIGNMENT(sprintParser::ARR_ASSIGNMENTContext *context) = 0;

    virtual antlrcpp::Any visitCALL(sprintParser::CALLContext *context) = 0;

    virtual antlrcpp::Any visitIfElseIfElse(sprintParser::IfElseIfElseContext *context) = 0;

    virtual antlrcpp::Any visitIf(sprintParser::IfContext *context) = 0;

    virtual antlrcpp::Any visitIfElse(sprintParser::IfElseContext *context) = 0;

    virtual antlrcpp::Any visitWhileDo(sprintParser::WhileDoContext *context) = 0;

    virtual antlrcpp::Any visitDoWhile(sprintParser::DoWhileContext *context) = 0;

    virtual antlrcpp::Any visitFOR(sprintParser::FORContext *context) = 0;

    virtual antlrcpp::Any visitInit_statement(sprintParser::Init_statementContext *context) = 0;

    virtual antlrcpp::Any visitITERATION_EXPR(sprintParser::ITERATION_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitInitializedDec(sprintParser::InitializedDecContext *context) = 0;

    virtual antlrcpp::Any visitNonInitDec(sprintParser::NonInitDecContext *context) = 0;

    virtual antlrcpp::Any visitInitializedArrDec(sprintParser::InitializedArrDecContext *context) = 0;

    virtual antlrcpp::Any visitNonInitArrDec(sprintParser::NonInitArrDecContext *context) = 0;

    virtual antlrcpp::Any visitArguments(sprintParser::ArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitMULT_EXPR(sprintParser::MULT_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitNUM_EXPR(sprintParser::NUM_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitCHAR_EXPR(sprintParser::CHAR_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitBITWISE_SHIFT(sprintParser::BITWISE_SHIFTContext *context) = 0;

    virtual antlrcpp::Any visitARR_EXPR(sprintParser::ARR_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitUNARY_EXPR(sprintParser::UNARY_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitASSIGNMENT_EXPR(sprintParser::ASSIGNMENT_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitBITWISE_OR_EXPR(sprintParser::BITWISE_OR_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitCALL_EXPR(sprintParser::CALL_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitVAR_EXPR(sprintParser::VAR_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitBITWISE_XOR_EXPR(sprintParser::BITWISE_XOR_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitADD_MINUS_EXPR(sprintParser::ADD_MINUS_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitBITWISE_AND_EXPR(sprintParser::BITWISE_AND_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitPAREN_EXPR(sprintParser::PAREN_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitNOT(sprintParser::NOTContext *context) = 0;

    virtual antlrcpp::Any visitOR(sprintParser::ORContext *context) = 0;

    virtual antlrcpp::Any visitPAREN_BOOLE(sprintParser::PAREN_BOOLEContext *context) = 0;

    virtual antlrcpp::Any visitAND(sprintParser::ANDContext *context) = 0;

    virtual antlrcpp::Any visitCMPLtGt(sprintParser::CMPLtGtContext *context) = 0;

    virtual antlrcpp::Any visitCMPEqNeq(sprintParser::CMPEqNeqContext *context) = 0;


};

