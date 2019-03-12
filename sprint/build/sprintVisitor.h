
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

    virtual antlrcpp::Any visitRetStatement(sprintParser::RetStatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclStatement(sprintParser::DeclStatementContext *context) = 0;

    virtual antlrcpp::Any visitInitializedDec(sprintParser::InitializedDecContext *context) = 0;

    virtual antlrcpp::Any visitNonInitDec(sprintParser::NonInitDecContext *context) = 0;

    virtual antlrcpp::Any visitVAR_EXPR(sprintParser::VAR_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitNUM_EXPR(sprintParser::NUM_EXPRContext *context) = 0;

    virtual antlrcpp::Any visitType(sprintParser::TypeContext *context) = 0;


};

