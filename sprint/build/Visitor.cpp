#include "Visitor.h"

Visitor::Visitor(){
};
Visitor::~Visitor(){};

antlrcpp::Any Visitor::visitPrg(sprintParser::PrgContext *ctx){
    visitChildren(ctx);
    ofstream assembly, interm;
    assembly.open("assembly.s");
    interm.open("interm.ir");
    current_BB -> print(interm);
    cfg -> gen_asm(assembly);
}
antlrcpp::Any Visitor::visitFuncDeclaration(sprintParser::FuncDeclarationContext *ctx){
    cfg =  new CFG(ctx -> ID() -> getText());
    string current_BB_name = cfg -> new_BB_name();
    current_BB = new BasicBlock(cfg, current_BB_name);
    cfg -> current_bb = current_BB;
    cfg -> add_BB(current_BB);
    visitChildren(ctx);
    return nullptr;    
};

antlrcpp::Any Visitor::visitInitializedDec(sprintParser::InitializedDecContext *ctx){
    string left = ctx -> ID() -> getText();
    cfg->add_to_symbol_table(left,true);
    string right = visit(ctx->expr());
    current_BB->add_IRInstr(new IRInstr_copy(current_BB,left,right));
    return left;
};

antlrcpp::Any Visitor::visitNonInitDec(sprintParser::NonInitDecContext *ctx){
    string left = ctx -> ID() -> getText();
    cfg->add_to_symbol_table(left,false);
    return left;
};

antlrcpp::Any Visitor::visitRetStatement(sprintParser::RetStatementContext *ctx){
    string ret_value = visit(ctx->expr());
    current_BB->add_IRInstr(new IRInstr_ret(current_BB,ret_value));
    return ret_value;
};

antlrcpp::Any Visitor::visitVAR_EXPR(sprintParser::VAR_EXPRContext *ctx){
    return ctx -> ID() -> getText();
};

antlrcpp::Any Visitor::visitNUM_EXPR(sprintParser::NUM_EXPRContext *ctx){
    string temp_num = cfg -> create_new_tempvar();
    current_BB->add_IRInstr(new IRInstr_ldconst(current_BB,
        temp_num,ctx->INT()->getText()));
    return temp_num;
};

antlrcpp::Any Visitor::visitMULT_EXPR(sprintParser::MULT_EXPRContext *ctx) {
    string left = visit(ctx->expr(0));
    string right = visit(ctx->expr(1));
    string actual_var = cfg -> create_new_tempvar();
    current_BB->add_IRInstr(new IRInstr_mult(current_BB, 
        actual_var,left, right));
    return actual_var;
};

antlrcpp::Any Visitor::visitADD_MINUS_EXPR(sprintParser::ADD_MINUS_EXPRContext *ctx){
    string left = visit(ctx->expr(0));
    string right = visit(ctx->expr(1));
    string actual_var = cfg -> create_new_tempvar();
    string opperation_type = ctx -> PLUS_MINUS() -> getText();
    if(opperation_type=="+"){
        current_BB->add_IRInstr(new IRInstr_add(current_BB,
            actual_var,left,right));
    } else {
        current_BB->add_IRInstr(new IRInstr_sub(current_BB,
            actual_var,left,right));   
    }
    return actual_var;
};

antlrcpp::Any Visitor::visitUNARY_EXPR(sprintParser::UNARY_EXPRContext *ctx){
    string old_var = visit(ctx->expr());
    if( (ctx->PLUS_MINUS()->getText())=="-"){
        string actual_var = cfg -> create_new_tempvar();
        current_BB->add_IRInstr(new IRInstr_unaryminus(current_BB,
            actual_var,old_var));
        return actual_var;
    }
    return old_var;
};

antlrcpp::Any Visitor::visitPAREN_EXPR(sprintParser::PAREN_EXPRContext *ctx) {
    return visit(ctx->expr());
};

antlrcpp::Any Visitor::visitAFFECT_EXPR(sprintParser::AFFECT_EXPRContext *ctx){
    string left = ctx -> ID() -> getText();
    string right = visit(ctx -> expr());
    current_BB->add_IRInstr(new IRInstr_copy(current_BB,left,right));
    return left;
};