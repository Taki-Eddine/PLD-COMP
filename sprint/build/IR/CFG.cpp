#include "CFG.h"


CFG::CFG(string cfgName){
    this->nextBBnumber = 0;
    this->lastOffset = 0;
    this -> cfgName = cfgName;
};

void CFG::add_BB(BasicBlock* bb){
    bbs.push_back(bb);
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
    return to_string(nextBBnumber++);
}

void CFG::gen_asm_prologue(ostream& o){
    o << ".text" << endl;
    o << ".global " << cfgName << endl;
    o << cfgName << ":" << endl;
    o << "pushq %rbp" << endl;
    o << "movq  %rsp, %rbp" << endl;
};

void CFG::gen_asm_epilogue(ostream& o){
    o << ".epilo_" << cfgName << ":" << endl;
    o << "popq  %rbp" << endl;
    o << "ret" << endl;
};

void CFG::gen_asm(ostream& o){
    this -> gen_asm_prologue(o);

    for (int i = 0; i < bbs.size(); i++){
        bbs[i] -> gen_asm(o);
    }
    this -> gen_asm_epilogue(o);

}

void CFG::print(ostream& o){
    for (int i = 0; i < bbs.size(); i++){
        bbs[i] -> print(o);
    }

}



