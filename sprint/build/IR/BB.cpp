#include "BB.h"

BasicBlock::BasicBlock(CFG* cfg, string entry_label){
    this->cfg = cfg;
    this->label = entry_label;
    exit_true = nullptr;
    exit_false = nullptr;
}

BasicBlock::~BasicBlock(){
    for (unsigned int i=0; i<instrs.size(); i++){
        delete(instrs[i]);
    }
}

void BasicBlock::add_IRInstr(IRInstr * instr){
    instrs.push_back(instr);
}

void BasicBlock::print(ostream &o){
    o << cfg->cfgName << "_BB_" << label << " {" << endl;
    for (unsigned int i = 0; i < instrs.size(); i++){
        instrs[i] -> print(o);
    }
    
    if(exit_true == nullptr && exit_false == nullptr){
        o << "jmp: epilog_" << cfg -> cfgName << endl;
    }else if (exit_true != nullptr && exit_false == nullptr) {
        o << "jmp: " << exit_true->label << endl;
    }else{
        o << "jmp True: " << exit_true -> label << endl;
        o << "jmp False: " << exit_false -> label << endl;
    }
    
    o << "}" << endl;
}

void BasicBlock::gen_asm(ostream &o){
    o << "." << cfg->cfgName << "_BB_" << label << ":" << endl;

    for (unsigned int i = 0; i < instrs.size(); i++){
        instrs[i] -> gen_asm(o);
    }

    if (exit_true != nullptr && exit_false == nullptr) {
        o << "jmp ." << cfg->cfgName << "_BB_" << exit_true -> label << endl;
    }
    
}
