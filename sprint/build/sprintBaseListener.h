
// Generated from ./sprint/sprint.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "sprintListener.h"


/**
 * This class provides an empty implementation of sprintListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  sprintBaseListener : public sprintListener {
public:

  virtual void enterPrg(sprintParser::PrgContext * /*ctx*/) override { }
  virtual void exitPrg(sprintParser::PrgContext * /*ctx*/) override { }

  virtual void enterFuncDeclaration(sprintParser::FuncDeclarationContext * /*ctx*/) override { }
  virtual void exitFuncDeclaration(sprintParser::FuncDeclarationContext * /*ctx*/) override { }

  virtual void enterFormalParameters(sprintParser::FormalParametersContext * /*ctx*/) override { }
  virtual void exitFormalParameters(sprintParser::FormalParametersContext * /*ctx*/) override { }

  virtual void enterParameter(sprintParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(sprintParser::ParameterContext * /*ctx*/) override { }

  virtual void enterBlock(sprintParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(sprintParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(sprintParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(sprintParser::StatementContext * /*ctx*/) override { }

  virtual void enterRetStatement(sprintParser::RetStatementContext * /*ctx*/) override { }
  virtual void exitRetStatement(sprintParser::RetStatementContext * /*ctx*/) override { }

  virtual void enterDeclStatement(sprintParser::DeclStatementContext * /*ctx*/) override { }
  virtual void exitDeclStatement(sprintParser::DeclStatementContext * /*ctx*/) override { }

  virtual void enterVarDeclaration(sprintParser::VarDeclarationContext * /*ctx*/) override { }
  virtual void exitVarDeclaration(sprintParser::VarDeclarationContext * /*ctx*/) override { }

  virtual void enterType(sprintParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(sprintParser::TypeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

