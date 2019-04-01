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
    string funcName = ctx -> ID() -> getText();
    cfg =  new CFG(funcName);
    current_BB = new BasicBlock(cfg, cfg -> new_BB_name());
    cfg -> add_BB(current_BB);
    //-------------------------------------------------------------
    vector<string> formalParams;
    if (ctx -> formalParameters() != nullptr){
        std::vector<sprintParser::ParameterContext*> paramsCtx = ctx -> formalParameters() -> parameter();
        for (unsigned int idx = 0; idx < paramsCtx.size(); idx++){
            string paramName = paramsCtx[idx] -> ID() -> getText();
            string typeToken = paramsCtx[idx] -> TYPE() -> getText();
            types type;
            if (typeToken == "int"){
                type = types::INT;
            }
            formalParams.push_back(paramName);
            cfg -> add_simpleVar_to_symbol_table(paramName, type);
        }          
    }
    cfg -> setFormalParams(formalParams);
    //-------------------------------------------------------------
    visitChildren(ctx);
    //-------------------------------------------------------------
    cfg -> gen_asm(assembly);
    cfg -> print(interm);
    delete(cfg);
    return nullptr;    
};

antlrcpp::Any Visitor::visitCALL(sprintParser::CALLContext *ctx) {
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
};

antlrcpp::Any Visitor::visitCALL_EXPR(sprintParser::CALL_EXPRContext *ctx){
    return visit(ctx -> call());
}

antlrcpp::Any Visitor::visitInitializedDec(sprintParser::InitializedDecContext *ctx){
   
    sprintParser::DECLARATIONContext* parent = dynamic_cast<sprintParser::DECLARATIONContext*> (ctx -> parent);
   
    string typeToken = parent -> TYPE() -> getText();
    types type;
    //---------------------------------------------------------------
    if (typeToken == "int"){
        type = types::INT;
    }
    //---------------------------------------------------------------
    string left = ctx -> ID() -> getText();
    cfg->add_simpleVar_to_symbol_table(left, type);
    string right = visit(ctx->expr());
    current_BB->add_IRInstr(new IRInstr_copy(current_BB,left,right));
    return left;
};

antlrcpp::Any Visitor::visitNonInitDec(sprintParser::NonInitDecContext *ctx){
    sprintParser::DECLARATIONContext* parent = dynamic_cast<sprintParser::DECLARATIONContext*> (ctx -> parent);
   
    string typeToken = parent -> TYPE() -> getText();
    types type;
    //---------------------------------------------------------------
    if (typeToken == "int"){
        type = types::INT;
    }

    string left = ctx -> ID() -> getText();
    cfg->add_simpleVar_to_symbol_table(left,type);
    return left;
};

antlrcpp::Any Visitor::visitNonInitArrDec(sprintParser::NonInitArrDecContext *ctx){
    sprintParser::DECLARATIONContext* parent = dynamic_cast<sprintParser::DECLARATIONContext*> (ctx -> parent);
    string typeToken = parent -> TYPE() -> getText();
    types type;
    if (typeToken == "int"){
        type = types::INT;
    }
    //---------------------------------------------------------------
    string id = ctx -> ID() -> getText();
    int numberOfElmnts = stoi((string )ctx -> INT() -> getText());
    cfg -> add_arr_to_symbol_table(id, type, numberOfElmnts);

    return id;
};

antlrcpp::Any Visitor::visitInitializedArrDec(sprintParser::InitializedArrDecContext *ctx){
    sprintParser::DECLARATIONContext* parent = dynamic_cast<sprintParser::DECLARATIONContext*> (ctx -> parent);
    string typeToken = parent -> TYPE() -> getText();
    types type;
    int size;
    if (typeToken == "int"){
        type = types::INT;
        size = 4;
    }
    //------------------------------------------------------------
    string id = ctx -> ID() -> getText();
    int numberOfExprs = ctx -> expr().size();
    int numberOfElements = ctx -> INT() == nullptr ? numberOfExprs : stoi(ctx -> INT() -> getText());
    cfg -> add_arr_to_symbol_table(id, type, numberOfElements);
    int offset = cfg -> get_var_index(id);
    string tempo = cfg -> create_new_tempvar();


    //-----------------------------------------------------------------------------------
    for (int idx = 0; idx < numberOfExprs; idx++){
        string src = visit(ctx -> expr(idx));
        current_BB -> add_IRInstr(new IRInstr_ldconst(current_BB, tempo, to_string(offset + idx * size)));
        current_BB -> add_IRInstr(new IRInstr_wmem(current_BB, tempo, src));
    }
    //----------------------------------------------------------------------------------------------
    string zeroCst = cfg -> create_new_tempvar();
    if (numberOfExprs < numberOfElements)
        current_BB -> add_IRInstr(new IRInstr_ldconst(current_BB, zeroCst, "0"));
    //----------------------------------------------------------------------------------------------
    for (int idx = numberOfExprs; idx < numberOfElements; idx ++){
        current_BB -> add_IRInstr(new IRInstr_ldconst(current_BB, tempo, to_string(offset + idx * size)));
        current_BB -> add_IRInstr(new IRInstr_wmem(current_BB, tempo, zeroCst));
    }

    return id;
};

antlrcpp::Any Visitor::visitRet(sprintParser::RetContext *ctx) {
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

antlrcpp::Any Visitor::visitCHAR_EXPR(sprintParser::CHAR_EXPRContext *ctx){
    string temp_num = cfg -> create_new_tempvar();
    string chr = ctx -> CHAR() -> getText();
    int value = char_value(chr); 
    cout << value << endl;
    current_BB->add_IRInstr(new IRInstr_ldconst(current_BB,
    temp_num,to_string(value)));
        
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

antlrcpp::Any Visitor::visitARR_EXPR(sprintParser::ARR_EXPRContext *ctx) {
    int idOffset = cfg -> get_var_index(ctx -> ID() -> getText());
    string tempo = cfg -> create_new_tempvar();
    string offset = cfg -> create_new_tempvar();
    string dest = cfg -> create_new_tempvar();
    //-------------------------------------------------------------------------------------
    switch (cfg -> getType(ctx -> ID() -> getText()))
    {
        case types::INT:
            current_BB -> add_IRInstr(new IRInstr_ldconst(current_BB, tempo, "4"));
            break;
    }
    string index = visit(ctx -> expr());
    current_BB -> add_IRInstr(new IRInstr_mult(current_BB, tempo, tempo, index));
    current_BB -> add_IRInstr(new IRInstr_ldconst(current_BB, offset, to_string(idOffset)));
    current_BB -> add_IRInstr(new IRInstr_add(current_BB, tempo, offset, tempo));
    //------------------------------------------------------------------------------------
    current_BB -> add_IRInstr(new IRInstr_rmem(current_BB, tempo, dest));
    return dest;
};

antlrcpp::Any Visitor::visitPAREN_EXPR(sprintParser::PAREN_EXPRContext *ctx) {
    return visit(ctx->expr());
};

antlrcpp::Any Visitor::visitSCALAR_ASSIGNMENT(sprintParser::SCALAR_ASSIGNMENTContext *ctx){
    string left = ctx -> ID() -> getText();
    string right = visit(ctx -> expr());
    current_BB->add_IRInstr(new IRInstr_copy(current_BB,left,right));
    return left;
};

antlrcpp::Any Visitor::visitASSIGNMENT_EXPR(sprintParser::ASSIGNMENT_EXPRContext *ctx) {
  return visit(ctx -> assignment());  
};

antlrcpp::Any Visitor::visitARR_ASSIGNMENT(sprintParser::ARR_ASSIGNMENTContext *ctx){
  
    int idOffset = cfg -> get_var_index(ctx -> ID() -> getText());
    string tempo = cfg -> create_new_tempvar();
    string offset = cfg -> create_new_tempvar();
    //-------------------------------------------------------------------------------------
    switch (cfg -> getType(ctx -> ID() -> getText()))
    {
        case types::INT:
            current_BB -> add_IRInstr(new IRInstr_ldconst(current_BB, tempo, "4"));
            break;
    }
    string index = visit(ctx -> expr(0));
    current_BB -> add_IRInstr(new IRInstr_mult(current_BB, tempo, tempo, index));
    current_BB -> add_IRInstr(new IRInstr_ldconst(current_BB, offset, to_string(idOffset)));
    current_BB -> add_IRInstr(new IRInstr_add(current_BB, tempo, offset, tempo));
    //------------------------------------------------------------------------------------
    string src = visit(ctx -> expr(1));
    current_BB -> add_IRInstr(new IRInstr_wmem(current_BB, tempo, src));
    return src;
    
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

antlrcpp::Any Visitor::visitITERATION_EXPR(sprintParser::ITERATION_EXPRContext *ctx){
    std::vector<sprintParser::AssignmentContext *> assignments = ctx -> assignment();
    for (unsigned int idx = 0; idx < assignments.size(); idx++){
        visit(assignments[idx]);
    }

    return nullptr;
};

antlrcpp::Any Visitor::visitInit_statement(sprintParser::Init_statementContext *ctx){
    if (ctx -> declaration() != nullptr){
        visit(ctx -> declaration());
    }
    else{
        visit(ctx -> iteration_expr());
    }
    return nullptr;
};

antlrcpp::Any Visitor::visitFOR(sprintParser::FORContext *ctx) {
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
    current_BB -> exit_true = testBB;
    current_BB -> exit_false = nullptr;
    //------------------------------------------------------------------------
    testBB -> exit_true = bodyBB;
    testBB -> exit_false = continueBB;
    //------------------------------------------------------------------------
    bodyBB -> exit_true = testBB;
    //------------------------------------------------------------------------
    visit(ctx -> init_statement());
    //------------------------------------------------------------------------
    current_BB = testBB;
    visit(ctx -> boolE());
    //------------------------------------------------------------------------
    current_BB = bodyBB;
    visit(ctx -> block());
    visit(ctx -> iteration_expr());
    //------------------------------------------------------------------------
    current_BB = continueBB;

    return nullptr;
    };





//-------------------*HELPERS*---------------------------------------------------
int Visitor::char_value(string &chr){
    if (chr[1] != '\\'){
        return chr[1];
    }
    else{
        switch (chr[2])
        {
            case 'n':
                return 10;        
            case 'r':
                return 13;
            case 't':
                return 9;
            default:
                return chr[2]; 
        }
    }
}