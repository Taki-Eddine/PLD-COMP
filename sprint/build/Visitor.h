#pragma once
#include <iostream>
#include "antlr4-runtime.h"
#include "sprintBaseVisitor.h"

class Visitor : public sprintBaseVisitor {
public:
  // antlrcpp::Any visitFuncDeclaration(sprintParser::FuncDeclarationContext *ctx) override;
  antlrcpp::Any visitVarDeclaration(sprintParser::VarDeclarationContext *ctx) override;
  // antlrcpp::Any visitPrg(sprintParser::PrgContext *ctx);
   // virtual ~Visitor(){};
};
