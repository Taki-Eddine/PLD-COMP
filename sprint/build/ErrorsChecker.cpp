#include "ErrorsChecker.h"

ErrorsChecker::ErrorsChecker(){
    error = false;
    lastOffset = 0;
    functions.insert(make_pair("putchar",1));
    functions.insert(make_pair("getchar",0));
};

ErrorsChecker::~ErrorsChecker(){};

void ErrorsChecker::enter_new_scope(){
    tables.push_back(new unordered_map<string, Symbol*>());
}

void ErrorsChecker::exit_scope(){
    tables.pop_back();
}

void ErrorsChecker::add_simpleVar_to_symbol_table(string name, bool initialized){
    Symbol* symbol = new Symbol(name, initialized);
    tables.back() -> insert(make_pair(name, symbol));
};

bool ErrorsChecker::isDeclared(string name){

    for (int idx = tables.size() - 1; idx >= 0; idx--){
        if (tables[idx] -> find(name) != tables[idx] -> end()){
            return true; 
        }
    }

    return false;
};

bool ErrorsChecker::isDeclaredInCurrentScope(string name){
    return (tables.back() -> find(name)) != tables.back() -> end();
};

bool ErrorsChecker::isInitialized(string name){
    for (int idx = tables.size() - 1; idx >= 0; idx--){
        if (tables[idx] -> find(name) != tables[idx] -> end()){
            return tables[idx] -> at(name) -> isInitialized(); 
        }
    }
    
    return false; 
};

void ErrorsChecker::setInitialized(string name){
    for (int idx = tables.size() - 1; idx >= 0; idx--){
        if (tables[idx] -> find(name) != tables[idx] -> end()){
            tables[idx] -> at(name) -> setInitialized(); 
            return;
        }
    }
    
}

antlrcpp::Any ErrorsChecker::visitInitializedDec(sprintParser::InitializedDecContext *ctx){
    visit(ctx -> expr());
    string id = ctx -> ID() -> getText();
    if (isDeclaredInCurrentScope(id)){
        int line = ctx -> getStart() -> getLine();
        cerr << "[-] Error (Line " << line << ") Variable " << id << " is already declared in this scope" << endl;
        error = true;
    }
    else{
        add_simpleVar_to_symbol_table(id, true);
    }

    return nullptr;
};

antlrcpp::Any ErrorsChecker::visitNonInitDec(sprintParser::NonInitDecContext *ctx){

    string id = ctx -> ID() -> getText();
    if (isDeclaredInCurrentScope(id)){
        int line = ctx -> getStart() -> getLine();
        cerr << "[-] Error (Line " << line << ") Variable " << id << " is already declared in this scope" << endl;
        error = true;
    }
    else{
        add_simpleVar_to_symbol_table(id, false);
    }

    return nullptr;
};

antlrcpp::Any ErrorsChecker::visitFuncDeclaration(sprintParser::FuncDeclarationContext *ctx){

    enter_new_scope();
    string funcName = ctx -> ID() -> getText();
    int numberOfParams = ctx -> formalParameters() == nullptr ? 0 : ctx -> formalParameters() -> parameter().size();
    if (numberOfParams > 0){
        std::vector<sprintParser::ParameterContext*> paramsCtx = ctx -> formalParameters() -> parameter();
        for (unsigned int idx = 0; idx < paramsCtx.size(); idx++){
            string paramName = paramsCtx[idx] -> ID() -> getText();
            add_simpleVar_to_symbol_table(paramName, true);
        }          
    }
    functions.insert(make_pair(funcName, numberOfParams));
    visitChildren(ctx);
    exit_scope();
    return nullptr;  
}

antlrcpp::Any ErrorsChecker::visitBlock(sprintParser::BlockContext *ctx){
    
    enter_new_scope();
    visitChildren(ctx);
    exit_scope();
    return nullptr;

}



antlrcpp::Any ErrorsChecker::visitVAR_EXPR(sprintParser::VAR_EXPRContext *ctx){
    string id = ctx -> ID() -> getText();
    int line = ctx -> getStart() -> getLine();

    if (!isDeclared(id)){
        cerr << "[-] Error (Line " << line << "): Undefined variable " << id << endl;
        error = true;
    }
    else if (!isInitialized(id)){
        cerr << "[!] Warning (Line " << line << "): Uninitialized variable " << id << endl;
    }
    return nullptr;
};

antlrcpp::Any ErrorsChecker::visitSCALAR_ASSIGNMENT(sprintParser::SCALAR_ASSIGNMENTContext *ctx){
    visit(ctx -> expr());

    string id = ctx -> ID() -> getText();
    int line = ctx -> getStart() -> getLine();

    if (!isDeclared(id)){
        cerr << "[-] Error (Line " << line << "): Undefined variable " << id << endl;
        error = true;
    }
    else{
        if(ctx -> EQUAL_ASSIGN() != nullptr){
            setInitialized(id);
        }
        else if (!isInitialized(id)){
            cerr << "[!] Warning (Line " << line << "): Uninitialized variable " << id << endl;
        }
    }
    return nullptr;
}

antlrcpp::Any ErrorsChecker::visitCALL(sprintParser::CALLContext *ctx) {
    int numberOfArgs = 0;
    if (ctx -> arguments() != nullptr){
        visit(ctx ->  arguments());
        numberOfArgs = ctx -> arguments() -> expr().size();
    }

    string funcName = ctx -> ID() -> getText();
    int line = ctx -> getStart() -> getLine();
    if (functions.find(funcName) == functions.end()){
        cerr << "[-] Error (Line " << line << "): Undefined function " << funcName << endl;
    }else if (numberOfArgs != functions[funcName]){
        cerr << "[-] Error (Line " << line << "): Incorrect number of parameters in function " << funcName << endl;
    }

    return nullptr;
}

/*antlrcpp::Any ErrorsChecker::visitAFFECT_STMT(sprintParser::AFFECT_STMTContext *ctx){
    visit(ctx -> expr());
    string left = ctx -> ID() -> getText();
    int offset = cfg -> get_var_index(left);
    int line = ctx -> getStart() -> getLine();
    if (offset == -1){
        cerr << "[-] Error (Line " << line << "): Undefined variable " << left << endl;
        error = true;
    }else{
        cfg -> setInit(left);
    }

    return left;
};

antlrcpp::Any ErrorsChecker::visitAFFECT_EXPR(sprintParser::AFFECT_EXPRContext *ctx){
    visit(ctx -> expr());
    string left = ctx -> ID() -> getText();
    int offset = cfg -> get_var_index(left);
    int line = ctx -> getStart() -> getLine();
    if (offset == -1){
        cerr << "[-] Error (Line " << line << "): Undefined variable " << left << endl;
        error = true;
    }else{
        cfg -> setInit(left);
    }

    return left;
};
*/
