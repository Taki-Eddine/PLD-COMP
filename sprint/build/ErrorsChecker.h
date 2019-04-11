#pragma once
#include "antlr4-runtime.h"
#include "sprintBaseVisitor.h"
#include "IR/IR.h"
#include <unordered_map>

class ErrorsChecker : public sprintBaseVisitor {
public:
    ErrorsChecker();
    virtual ~ErrorsChecker();
    
    antlrcpp::Any visitBlock(sprintParser::BlockContext *ctx) override;
    antlrcpp::Any visitFuncDeclaration(sprintParser::FuncDeclarationContext *ctx) override;
    antlrcpp::Any visitInitializedDec(sprintParser::InitializedDecContext *ctx) override;
    antlrcpp::Any visitNonInitDec(sprintParser::NonInitDecContext *ctx) override;
    antlrcpp::Any visitVAR_EXPR(sprintParser::VAR_EXPRContext *ctx) override;
    antlrcpp::Any visitSCALAR_ASSIGNMENT(sprintParser::SCALAR_ASSIGNMENTContext *ctx) override;
    antlrcpp::Any visitCALL(sprintParser::CALLContext *ctx) override;
    antlrcpp::Any visitInitializedArrDec(sprintParser::InitializedArrDecContext *ctx) override;
    antlrcpp::Any visitNonInitArrDec(sprintParser::NonInitArrDecContext *ctx) override;
    antlrcpp::Any visitARR_EXPR(sprintParser::ARR_EXPRContext *ctx) override;
    antlrcpp::Any visitARR_ASSIGNMENT(sprintParser::ARR_ASSIGNMENTContext *ctx) override;
//-----------------------------------------------------
protected:
    vector<unordered_map<string, Symbol*>*> tables;
    unordered_map<string, int> functions;
    bool error;
    int lastOffset;
    //------------------------------------------------------------
    void enter_new_scope();
    void exit_scope();
    void add_simpleVar_to_symbol_table(string name, bool initialized, types type);
    bool isDeclared(string name);
    bool isDeclaredInCurrentScope(string name);
    bool isInitialized(string name);
    types getType(string name);
    void setInitialized(string name);
    //------------------------------------------------------------
};
