#include "Visitor.h"

Visitor::Visitor(){
};
Visitor::~Visitor(){};

antlrcpp::Any Visitor::visitPrg(sprintParser::PrgContext *ctx){
    assembly.open("assembly.s");
    interm.open("interm.ir");
    visitChildren(ctx);
    interm.close();
    assembly.close();
    return nullptr;
}

antlrcpp::Any Visitor::visitFuncDeclaration(sprintParser::FuncDeclarationContext *ctx){

    cfg =  new CFG(ctx -> ID() -> getText());
    string current_BB_name = cfg -> new_BB_name();
    current_BB = new BasicBlock(cfg, current_BB_name);
    cfg -> add_BB(current_BB);
    visitChildren(ctx);
    cfg -> gen_asm(assembly);
    cfg -> print(interm);
    delete(cfg);
    return nullptr;    
};

antlrcpp::Any Visitor::visitCALL_EXPR(sprintParser::CALL_EXPRContext *ctx){
    vector<sprintParser::ExprContext *> vectExpr = ctx->arguments()->expr();
    string label = ctx->ID()->getText();
    string destination = cfg -> create_new_tempvar();
    vector<string> ops;
    for (unsigned int i=0; i<vectExpr.size(); i++){
        ops.push_back(visit(vectExpr[i]));
    }
    current_BB->add_IRInstr(new IRInstr_call(current_BB, label, 
        destination, ops));
    return destination;
}

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

antlrcpp::Any Visitor::visitAFFECT_STMT(sprintParser::AFFECT_STMTContext *ctx){
    string left = ctx -> ID() -> getText();
    string right = visit(ctx -> expr());
    current_BB->add_IRInstr(new IRInstr_copy(current_BB,left,right));
    return left;
}
antlrcpp::Any Visitor::visitCMPLtGt(sprintParser::CMPLtGtContext *ctx){
    string boolVal = cfg -> create_new_tempvar(); 
    string left = visit(ctx -> expr(0));
    string right = visit(ctx -> expr(1));
    string op = ctx -> LT_GT() -> getText();
    if (op == "<"){
        current_BB->add_IRInstr(new IRInstr_cmp_lt(current_BB, boolVal, left, right));
    }else if (op == ">"){
        current_BB->add_IRInstr(new IRInstr_cmp_gt(current_BB, boolVal, left, right));
    }
    else if(op == "<="){
        current_BB->add_IRInstr(new IRInstr_cmp_le(current_BB, boolVal, left, right));
    }
    else
    {
        current_BB->add_IRInstr(new IRInstr_cmp_ge(current_BB, boolVal, left, right));
    }
    

    return boolVal;
};

antlrcpp::Any Visitor::visitCMPEqNeq(sprintParser::CMPEqNeqContext *ctx){
    string boolVal = cfg -> create_new_tempvar(); 
    string left = visit(ctx -> expr(0));
    string right = visit(ctx -> expr(1));
    string op = ctx -> EQ_NEQ() -> getText();
    if (op == "=="){
        current_BB->add_IRInstr(new IRInstr_cmp_eq(current_BB, boolVal, left, right));
    }else{
        current_BB->add_IRInstr(new IRInstr_cmp_neq(current_BB, boolVal, left, right)); 
    }

    return boolVal;
};

antlrcpp::Any Visitor::visitIfElse(sprintParser::IfElseContext *ctx){
    BasicBlock* trueBB = new BasicBlock(cfg, cfg -> new_BB_name());
    BasicBlock* falseBB = new BasicBlock(cfg, cfg -> new_BB_name());
    BasicBlock* continueBB = new BasicBlock(cfg, cfg -> new_BB_name());
    cfg -> add_BB(trueBB);
    cfg -> add_BB(falseBB);
    cfg -> add_BB(continueBB);
    //------------------------------------------------------------
    continueBB -> exit_true = current_BB -> exit_true;
    continueBB -> exit_false = current_BB -> exit_false;
    //------------------------------------------------------------
    current_BB -> exit_true = trueBB;
    current_BB -> exit_false = falseBB;
    //------------------------------------------------------------
    trueBB -> exit_true = continueBB;
    //------------------------------------------------------------
    falseBB -> exit_true = continueBB;
    //-----------------------------------------------------------
    visit(ctx -> boolE());
    //------------------------------------------------------------
    current_BB = trueBB;
    visit(ctx -> block(0));
    //------------------------------------------------------------
    current_BB = falseBB;
    visit(ctx -> block(1));
    //------------------------------------------------------------
    current_BB = continueBB;
    return nullptr;
}

antlrcpp::Any Visitor::visitIf(sprintParser::IfContext *ctx) {
    BasicBlock* trueBB = new BasicBlock(cfg, cfg -> new_BB_name());
    BasicBlock* continueBB = new BasicBlock(cfg, cfg -> new_BB_name());
    cfg -> add_BB(trueBB);
    cfg -> add_BB(continueBB);
    //------------------------------------------------------------
    continueBB -> exit_true = current_BB -> exit_true;
    continueBB -> exit_false = current_BB -> exit_false;
    //------------------------------------------------------------
    current_BB -> exit_true = trueBB;
    current_BB -> exit_false = continueBB;
    //------------------------------------------------------------
    trueBB -> exit_true = continueBB;
    //-----------------------------------------------------------
    visit(ctx -> boolE());
    //------------------------------------------------------------
    current_BB = trueBB;
    visit(ctx -> block());
    //------------------------------------------------------------
    current_BB = continueBB;
    return nullptr;

}

antlrcpp::Any Visitor::visitAND(sprintParser::ANDContext *ctx){
  
        BasicBlock* NTB = new BasicBlock(cfg, cfg -> new_BB_name());
        cfg -> add_BB(NTB);
        NTB -> exit_true = current_BB -> exit_true;
        NTB -> exit_false = current_BB -> exit_false;
        current_BB -> exit_true = NTB;
        visit(ctx -> boolE(0));
        current_BB = NTB;
        visit(ctx -> boolE(1));
        return nullptr;
};


antlrcpp::Any Visitor::visitOR(sprintParser::ORContext *ctx) {
    BasicBlock* NTB = new BasicBlock(cfg, cfg -> new_BB_name());
    cfg -> add_BB(NTB);
    NTB -> exit_true = current_BB -> exit_true;
    NTB -> exit_false = current_BB -> exit_false;
    current_BB -> exit_false = NTB;
    visit(ctx -> boolE(0));
    current_BB = NTB;
    visit(ctx -> boolE(1));
    return nullptr;
};

antlrcpp::Any Visitor::visitNOT(sprintParser::NOTContext *ctx){
    BasicBlock* save_ET = current_BB -> exit_true;
    BasicBlock* save_EF = current_BB -> exit_false;
    current_BB ->exit_true = save_EF;
    current_BB -> exit_false = save_ET;
    visit(ctx -> boolE());
    return nullptr;
};

antlrcpp::Any Visitor::visitPAREN_BOOLE(sprintParser::PAREN_BOOLEContext *ctx){
    visit(ctx -> boolE());
    return nullptr;
};

antlrcpp::Any Visitor::visitWhileDo(sprintParser::WhileDoContext *ctx){
    BasicBlock* testBB = new BasicBlock(cfg, cfg -> new_BB_name());
    BasicBlock* bodyBB = new BasicBlock(cfg, cfg -> new_BB_name());
    BasicBlock* continueBB = new BasicBlock(cfg, cfg -> new_BB_name());
    cfg -> add_BB(testBB);
    cfg -> add_BB(bodyBB);
    cfg -> add_BB(continueBB);
    //--------------------------------------------------------
    continueBB -> exit_true = current_BB -> exit_true;
    continueBB -> exit_false = current_BB -> exit_false;
    //--------------------------------------------------------
    current_BB -> exit_true = testBB;
    current_BB -> exit_false = nullptr;
    //--------------------------------------------------------
    testBB -> exit_true = bodyBB;
    testBB -> exit_false = continueBB;
    //--------------------------------------------------------
    bodyBB -> exit_true = testBB;
    //--------------------------------------------------------
    current_BB = testBB;
    visit(ctx -> boolE());
    //--------------------------------------------------------
    current_BB = bodyBB;
    visit(ctx -> block());
    //--------------------------------------------------------
    current_BB = continueBB;
    return nullptr;

};

antlrcpp::Any Visitor::visitDoWhile(sprintParser::DoWhileContext *ctx){
    BasicBlock* bodyBB = new BasicBlock(cfg, cfg -> new_BB_name());
    BasicBlock* testBB = new BasicBlock(cfg, cfg -> new_BB_name());
    BasicBlock* continueBB = new BasicBlock(cfg, cfg -> new_BB_name());
    cfg -> add_BB(bodyBB);
    cfg -> add_BB(testBB);
    cfg -> add_BB(continueBB);
    //------------------------------------------------------------------------
    continueBB -> exit_true = current_BB -> exit_true;
    continueBB -> exit_false = current_BB -> exit_false;
    //------------------------------------------------------------------------
    current_BB -> exit_true = bodyBB;
    current_BB -> exit_false = nullptr;
    //------------------------------------------------------------------------
    bodyBB -> exit_true = testBB;
    //------------------------------------------------------------------------
    testBB -> exit_true = bodyBB;
    testBB -> exit_false = continueBB;
    //------------------------------------------------------------------------
    current_BB = bodyBB;
    visit(ctx -> block());
    //------------------------------------------------------------------------
    current_BB = testBB;
    visit(ctx -> boolE());
    //------------------------------------------------------------------------
    current_BB = continueBB;
    return nullptr;


};

antlrcpp::Any Visitor::visitIfElseIfElse(sprintParser::IfElseIfElseContext *ctx){
    BasicBlock* continueBB = new BasicBlock(cfg, cfg -> new_BB_name());
    cfg -> add_BB(continueBB);
    unsigned int numberOfBoolEs = ctx -> boolE().size();
    bool elsePresent = numberOfBoolEs < (ctx -> block().size());
    unsigned int currentBoolE = 0;
    //--------------------------------------------------------------------
    continueBB -> exit_true = current_BB -> exit_true;
    continueBB -> exit_false = current_BB -> exit_false;
    //--------------------------------------------------------------------
    while(currentBoolE < numberOfBoolEs - 1){
        BasicBlock* trueBB = new BasicBlock(cfg, cfg -> new_BB_name());
        BasicBlock* falseBB = new BasicBlock(cfg, cfg -> new_BB_name());
        cfg -> add_BB(trueBB);
        cfg -> add_BB(falseBB);
        current_BB -> exit_true = trueBB;
        current_BB -> exit_false = falseBB;
        //------------------------------------------
        visit(ctx -> boolE(currentBoolE));
        //------------------------------------------
        trueBB -> exit_true = continueBB;
        current_BB = trueBB;
        visit(ctx->block(currentBoolE));
        //------------------------------------------
        current_BB = falseBB;
        currentBoolE++;
    }

    BasicBlock* trueBB = new BasicBlock(cfg, cfg -> new_BB_name());
    BasicBlock* falseBB = new BasicBlock(cfg, cfg -> new_BB_name());
    current_BB -> exit_true = trueBB;
    cfg -> add_BB(trueBB);
    if (elsePresent){
      falseBB -> exit_true = continueBB;
      current_BB -> exit_false = falseBB;
      cfg -> add_BB(falseBB);
    }else{
        current_BB -> exit_false = continueBB;
    }
    //------------------------------------------
        visit(ctx -> boolE().back());
    //------------------------------------------
        trueBB -> exit_true = continueBB;
        current_BB = trueBB;
        visit(ctx->block(numberOfBoolEs - 1));
    //------------------------------------------
        if (elsePresent){

            current_BB = falseBB;
            visit(ctx -> block().back());
        }
    //------------------------------------------
    current_BB = continueBB;
    return nullptr; 
};