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
};

void ErrorsChecker::add_simpleVar_to_symbol_table(string name, bool initialized, types type){
    Symbol* symbol = new Symbol(name, initialized, type);
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

types ErrorsChecker::getType(string name){
    for (int idx = tables.size() - 1; idx >= 0; idx--){
        if (tables[idx] -> find(name) != tables[idx] -> end()){
            return tables[idx] -> at(name) -> getType(); 
        }
    }
    
    return (types)0; 
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
        add_simpleVar_to_symbol_table(id, true, types::INT);
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
        add_simpleVar_to_symbol_table(id, false, types::INT);
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
            if (isDeclaredInCurrentScope(paramName)){
                int line = ctx -> getStart() -> getLine();
                cerr << "[-] Error (Line " << line << ") Parameter name " << paramName << " is not unique" << endl;
                error = true;
            }
            add_simpleVar_to_symbol_table(paramName, true, types::INT);
        }          
    }
    if (functions.find(funcName) != functions.end()){
        int line = ctx -> getStart() -> getLine();
        cerr << "[-] Error (Line " << line << ") Function " << funcName << " is already defined" << endl;
        error = true;
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
    else if (getType(id) == types::ARR){
        cerr << "[-] Error (Line " << line << "): Type mismatch (Array instead of int) for " << id << endl;
        error = true;
    }
    else if (!isInitialized(id)){
        cerr << "[!] Warning (Line " << line << "): Uninitialized variable " << id << endl;
    }
    return nullptr;
};

antlrcpp::Any ErrorsChecker::visitARR_EXPR(sprintParser::ARR_EXPRContext *ctx){
    string id = ctx -> ID()-> getText();
    int line = ctx -> getStart() -> getLine();

    if (!isDeclared(id)){
        cerr << "[-] Error (Line " << line << "): Undefined array name " << id << endl;
        error = true;
    }
    else if (getType(id) != types::ARR){
       cerr << "[-] Error (Line " << line << "): Type mismatch (int instead of array) for " << id << endl;
        error = true; 
    }

    return nullptr;
}

antlrcpp::Any ErrorsChecker::visitSCALAR_ASSIGNMENT(sprintParser::SCALAR_ASSIGNMENTContext *ctx){
    visit(ctx -> expr());

    string id = ctx -> ID() -> getText();
    int line = ctx -> getStart() -> getLine();

    if (!isDeclared(id)){
        cerr << "[-] Error (Line " << line << "): Undefined variable " << id << endl;
        error = true;
    }
    else if (getType(id) == types::ARR){
        cerr << "[-] Error (Line " << line << "): Type mismatch (Array instead of int) for " << id << endl;
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

antlrcpp::Any ErrorsChecker::visitARR_ASSIGNMENT(sprintParser::ARR_ASSIGNMENTContext *ctx){
    visit(ctx -> expr(0));
    visit(ctx -> expr(1));

    string id = ctx -> ID() -> getText();
    int line = ctx -> getStart() -> getLine();

    if (!isDeclared(id)){
        cerr << "[-] Error (Line " << line << "): Undefined Array name " << id << endl;
        error = true;
    }
    else if (getType(id) != types::ARR){
        cerr << "[-] Error (Line " << line << "): Type mismatch (int instead of array) for " << id << endl;
        error = true; 
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
        error = true;
    }else if (numberOfArgs != functions[funcName]){
        cerr << "[-] Error (Line " << line << "): Incorrect number of parameters in function " << funcName << endl;
        error = true;
    }

    return nullptr;
}

antlrcpp::Any ErrorsChecker::visitInitializedArrDec(sprintParser::InitializedArrDecContext *ctx){
    string id = ctx -> ID() -> getText();
    int line = ctx -> getStart() -> getLine();
    if (isDeclaredInCurrentScope(id)){
        int line = ctx -> getStart() -> getLine();
        cerr << "[-] Error (Line " << line << ") Array " << id << " is already declared in this scope" << endl;
        error = true;
    }
    else{
        add_simpleVar_to_symbol_table(id, true, types::ARR);
    }

    if (ctx -> INT() != nullptr){
        int numberOfElements =  stoi(ctx -> INT() -> getText());
        if (numberOfElements == 0){
            cerr << "[-] Error (Line " << line << "): Zero length arrays are not allowed" << endl;
            error = true;
        }else if (ctx -> expr().size() > (unsigned int) numberOfElements){
            cerr << "[-] Error (Line " << line << "): too many initializers for int [" << 
                ctx -> INT() -> getText() << "]" << endl;
            error = true;
        }
    }
    for (unsigned int idx = 0; idx < ctx -> expr().size(); idx++){
        visit(ctx -> expr(idx));
    }
    return nullptr;

    

}

antlrcpp::Any ErrorsChecker::visitNonInitArrDec(sprintParser::NonInitArrDecContext *ctx) {
    string id = ctx -> ID() -> getText();
    int line = ctx -> getStart() -> getLine();
    if (isDeclaredInCurrentScope(id)){
        int line = ctx -> getStart() -> getLine();
        cerr << "[-] Error (Line " << line << ") Array " << id << " is already declared in this scope" << endl;
        error = true;
    }
    else{
        add_simpleVar_to_symbol_table(id, true, types::ARR);
    }

    int numberOfElements =  stoi(ctx -> INT() -> getText());
    if (numberOfElements == 0){
        cerr << "[-] Error (Line " << line << "): Zero length arrays are not allowed" << endl;
        error = true;
    }
    
    

    return nullptr;
}
