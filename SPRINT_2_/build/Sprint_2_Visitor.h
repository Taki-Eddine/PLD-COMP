
// Generated from Sprint_2_.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "Sprint_2_Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Sprint_2_Parser.
 */
class  Sprint_2_Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Sprint_2_Parser.
   */
    virtual antlrcpp::Any visitPrg(Sprint_2_Parser::PrgContext *context) = 0;

    virtual antlrcpp::Any visitFuncDeclaration(Sprint_2_Parser::FuncDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFormalParameters(Sprint_2_Parser::FormalParametersContext *context) = 0;

    virtual antlrcpp::Any visitParameter(Sprint_2_Parser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitBlock(Sprint_2_Parser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitStatement(Sprint_2_Parser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitRetStatement(Sprint_2_Parser::RetStatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclStatement(Sprint_2_Parser::DeclStatementContext *context) = 0;

    virtual antlrcpp::Any visitVarDeclaration(Sprint_2_Parser::VarDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitType(Sprint_2_Parser::TypeContext *context) = 0;


};

