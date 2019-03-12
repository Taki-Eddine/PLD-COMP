
// Generated from ./sprint/sprint.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "sprintParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by sprintParser.
 */
class  sprintListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPrg(sprintParser::PrgContext *ctx) = 0;
  virtual void exitPrg(sprintParser::PrgContext *ctx) = 0;

  virtual void enterFuncDeclaration(sprintParser::FuncDeclarationContext *ctx) = 0;
  virtual void exitFuncDeclaration(sprintParser::FuncDeclarationContext *ctx) = 0;

  virtual void enterFormalParameters(sprintParser::FormalParametersContext *ctx) = 0;
  virtual void exitFormalParameters(sprintParser::FormalParametersContext *ctx) = 0;

  virtual void enterParameter(sprintParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(sprintParser::ParameterContext *ctx) = 0;

  virtual void enterBlock(sprintParser::BlockContext *ctx) = 0;
  virtual void exitBlock(sprintParser::BlockContext *ctx) = 0;

  virtual void enterStatement(sprintParser::StatementContext *ctx) = 0;
  virtual void exitStatement(sprintParser::StatementContext *ctx) = 0;

  virtual void enterRetStatement(sprintParser::RetStatementContext *ctx) = 0;
  virtual void exitRetStatement(sprintParser::RetStatementContext *ctx) = 0;

  virtual void enterDeclStatement(sprintParser::DeclStatementContext *ctx) = 0;
  virtual void exitDeclStatement(sprintParser::DeclStatementContext *ctx) = 0;

  virtual void enterVarDeclaration(sprintParser::VarDeclarationContext *ctx) = 0;
  virtual void exitVarDeclaration(sprintParser::VarDeclarationContext *ctx) = 0;

  virtual void enterType(sprintParser::TypeContext *ctx) = 0;
  virtual void exitType(sprintParser::TypeContext *ctx) = 0;


};

