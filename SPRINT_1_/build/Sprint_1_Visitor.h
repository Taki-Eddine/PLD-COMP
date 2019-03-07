
// Generated from Sprint_1_.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "Sprint_1_Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Sprint_1_Parser.
 */
class  Sprint_1_Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Sprint_1_Parser.
   */
    virtual antlrcpp::Any visitPrg(Sprint_1_Parser::PrgContext *context) = 0;

    virtual antlrcpp::Any visitRet(Sprint_1_Parser::RetContext *context) = 0;


};
