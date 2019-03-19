#include "CFG.h"


CFG::CFG(){
    this->nextBBnumber = 0;
    this->lastOffset = 0;
};

void CFG::add_to_symbol_table(string name, bool initialized){
    lastOffset += 8;
    Symbol* symbol = new Symbol(name, lastOffset, initialized);
    table.insert(make_pair(name, symbol));
};

string CFG::create_new_tempvar(){
    lastOffset += 8;
    string name = "!tmp" + to_string(lastOffset);
    Symbol* symbol = new Symbol(name, lastOffset, true);
    table.insert(make_pair(name, symbol));
    return name;
};

int CFG::get_var_index(string name){
    if (table.find(name) != table.end()){
        return (table[name]) -> getOffset();
    }
    else{
        return -1;
    }
};

bool CFG::isInit(string name){
    return table[name] -> isInitialized();
}

string CFG::new_BB_name(){
    // to change
    return nullptr;
}

