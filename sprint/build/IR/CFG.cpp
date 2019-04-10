#include "CFG.h"


CFG::CFG(string cfgName){
    this->nextBBnumber = 0;
    this->lastOffset = 0;
    this -> cfgName = cfgName;


};

CFG::~CFG(){
    /*for (unsigned int i=0; i<bbs.size(); i++){
        delete(bbs[i]);
    }
    unordered_map<string, Symbol*>::iterator it;
    for (it=table.begin(); it!=table.end(); it++){
        delete(it->second);
    }
    table.clear();*/
}


void CFG::add_BB(BasicBlock* bb){
    bbs.push_back(bb);
};

void CFG::enter_new_scope(){
    //cout << "before push!!" << endl << std::flush;
    tables.push_back(new unordered_map<string, Symbol*>());
    //cout << "after push" << endl << std::flush;

    //cout << tables.size() << endl << flush;

}

void CFG::exit_scope(){
    tables.pop_back();
}

void CFG::setFormalParams(vector<string> formalParams, vector<types> formalParamsTypes){
    unsigned int numberOfParams = formalParams.size();
    unsigned int numberOfRegisters = numberOfParams >= 6 ? 6 : numberOfParams;
    int offset = -16;

    for (unsigned int idx=0; idx < numberOfRegisters; idx++){
		this -> formalParams.push_back(formalParams[idx]);
        this -> add_simpleVar_to_symbol_table(formalParams[idx], formalParamsTypes[idx]);
	}

    for(unsigned int idx = 6; idx<formalParams.size(); idx++){
        this -> formalParams.push_back(formalParams[idx]);
        this -> add_simpleVar_to_symbol_table(offset, formalParams[idx], formalParamsTypes[idx]);
        offset -= 8;
    }
}

void CFG::add_simpleVar_to_symbol_table(string name, types type){
    switch (type)
    {
        case types::INT : 
            lastOffset += 4;
        break;
    }

    Symbol* symbol = new Symbol(name, lastOffset, type);

    tables.back() -> insert(make_pair(name, symbol));
};

void CFG::add_simpleVar_to_symbol_table(int offset, string name, types type){
    Symbol* symbol = new Symbol(name, offset, type);
    tables.back() -> insert(make_pair(name, symbol));
}

void CFG::add_arr_to_symbol_table(string name, types type, int numberOfElmnts){
    switch (type)
    {
       case types::INT:
        lastOffset += 4 * numberOfElmnts;
    }
    Symbol* symbol = new Symbol(name, lastOffset, type);
    tables.back() -> insert(make_pair(name, symbol));

};

string CFG::create_new_tempvar(){
    lastOffset += 4;
    string name = "!tmp" + to_string(lastOffset);
    Symbol* symbol = new Symbol(name, lastOffset, types::INT);
    tables.back() -> insert(make_pair(name, symbol));
    return name;
};

int CFG::get_var_index(string name){
   
    for (int idx = tables.size() - 1; idx >= 0; idx--){
        if (tables[idx] -> find(name) != tables[idx] -> end()){
            return tables[idx] -> at(name) -> getOffset(); 
        }
    }

    return -1;
};

string CFG::new_BB_name(){
    return to_string(nextBBnumber++);
}

types CFG::getType(string name){
    for (int idx = tables.size() - 1; idx >= 0; idx--){
        if (tables[idx] -> find(name) != tables[idx] -> end()){
            return tables[idx] -> at(name) -> getType(); 
        }
    }
}


//-----------------------------------------------
void CFG::gen_asm_prologue(ostream& o){
    o << ".text" << endl;
    o << ".global " << cfgName << endl;
    o << cfgName << ":" << endl;
    o << "pushq %rbp" << endl;
    o << "movq  %rsp, %rbp" << endl;
    o << "subq  $" << lastOffset + (16 - (lastOffset % 16)) % 16 << ",  %rsp" <<endl;

    //-----------------------------------------------------
    string regs[6] = {"edi","esi","edx","ecx","r8d","r9d"};
    unsigned int numberOfParams = formalParams.size();
    unsigned int numberOfRegs = numberOfParams >= 6 ? 6 : numberOfParams;
    for (unsigned int idx = 0; idx < numberOfRegs; idx++){
        int paramOffset = get_var_index(formalParams[idx]);
        o << "movl %" << regs[idx] << ", " << -paramOffset << "(%rbp)" << endl;
        
    }
    

};

void CFG::gen_asm_epilogue(ostream& o){
    o << ".epilo_" << cfgName << ":" << endl;
    o << "leave" << endl;
    o << "ret" << endl;
};

void CFG::gen_asm(ostream& o){
    this -> gen_asm_prologue(o);

    for (unsigned int i = 0; i < bbs.size(); i++){
        bbs[i] -> gen_asm(o);
    }

    this -> gen_asm_epilogue(o);

}

void CFG::print(ostream& o){
    for (unsigned int i = 0; i < bbs.size(); i++){
        bbs[i] -> print(o);
    }

}



