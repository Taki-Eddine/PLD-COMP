
// Generated from Sprint_1_.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "Sprint_1_Visitor.h"


/**
 * This class provides an empty implementation of Sprint_1_Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Sprint_1_BaseVisitor : public Sprint_1_Visitor {
public:

  virtual antlrcpp::Any visitPrg(Sprint_1_Parser::PrgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRet(Sprint_1_Parser::RetContext *ctx) override {
    return visitChildren(ctx);
  }


};

