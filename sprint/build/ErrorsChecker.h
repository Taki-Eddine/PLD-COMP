#pragma once
#include "antlr4-runtime.h"
#include "sprintBaseVisitor.h"
#include "IR/IR.h"

class ErrorsChecker : public sprintBaseVisitor {
public:
    ErrorsChecker();
    virtual ~ErrorsChecker();
    antlrcpp::Any visitFuncDeclaration(sprintParser::FuncDeclarationContext *ctx) override;
    antlrcpp::Any visitInitializedDec(sprintParser::InitializedDecContext *ctx) override;
    antlrcpp::Any visitAFFECT_STMT(sprintParser::AFFECT_STMTContext *ctx) override;
    antlrcpp::Any visitAFFECT_EXPR(sprintParser::AFFECT_EXPRContext *ctx) override;
    antlrcpp::Any visitNonInitDec(sprintParser::NonInitDecContext *ctx) override;
    antlrcpp::Any visitVAR_EXPR(sprintParser::VAR_EXPRContext *ctx) override;
    
//-----------------------------------------------------

    CFG* cfg;
    bool error;
};