#include "ErrorsChecker.h"

ErrorsChecker::ErrorsChecker(){
    error = false;
    lastOffset = 0;
};

ErrorsChecker::~ErrorsChecker(){};

int ErrorsChecker::get_index(string name){
    if (symbol_table.find(name) != symbol_table.end()){
        return (symbol_table[name]) -> getOffset();
    }
    else{
        return -1;
    }
};

void ErrorsChecker::add_simpleVar_to_symbol_table(string name, types type){
    switch (type)
    {
        case types::INT :
            lastOffset += 4;
        break;
    }

    Symbol* symbol = new Symbol(name, lastOffset, type);
    symbol_table.insert(make_pair(name, symbol));
};

bool ErrorsChecker::isInit(string name){
  return symbol_table[name] -> isInitialized();
};

antlrcpp::Any ErrorsChecker::visitFuncDeclaration(sprintParser::FuncDeclarationContext *ctx){
  //  cfg =  new CFG(ctx -> ID() -> getText());
    return visitChildren(ctx);
}

antlrcpp::Any ErrorsChecker::visitInitializedDec(sprintParser::InitializedDecContext *ctx){
    string id = ctx -> ID() -> getText();
    int offset = get_index(id);
    if (offset != -1){
        int line = ctx -> getStart() -> getLine();
        cerr << "[-] Error (Line " << line << ") Variable " << id << " is already declared in this scope" << endl;
        error = true;
    }
    else{
        add_simpleVar_to_symbol_table(id, types::INT);
    }

    return nullptr;
};

antlrcpp::Any ErrorsChecker::visitNonInitDec(sprintParser::NonInitDecContext *ctx){

    string id = ctx -> ID() -> getText();
    int offset = get_index(id);
    if (offset != -1){
        int line = ctx -> getStart() -> getLine();
        cerr << "[-] Error (Line " << line << ") Variable " << id << " is already declared in this scope" << endl;
        error = true;
    }
    else{
        add_simpleVar_to_symbol_table(id, types::INT);
    }
    return nullptr;
};

antlrcpp::Any ErrorsChecker::visitVAR_EXPR(sprintParser::VAR_EXPRContext *ctx){
    string id = ctx -> ID() -> getText();
    int offset = get_index(id);
    int line = ctx -> getStart() -> getLine();
    if (offset == -1){
        cerr << "[-] Error (Line " << line << "): Undefined variable " << id << endl;
        error = true;
    }
    else if (!isInit(id)){
        cerr << "[!] Warning (Line " << line << "): Uninitialized variable " << id << endl;
    }
    return nullptr;
};

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
