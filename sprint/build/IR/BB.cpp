#include "BB.h"
#include "IRInstr.h"
BasicBlock::BasicBlock(CFG* cfg, string entry_label){
    this->cfg = cfg;
    this->label = entry_label;
}

void BasicBlock::add_IRInstr(IRInstr * instr){
    instrs.push_back(instr);
}

void BasicBlock::print(ostream &o){
    for (int i = 0; i < instrs.size(); i++){
        instrs[i] -> print(o);
    }
}

void BasicBlock::gen_asm(ostream &o){
    for (int i = 0; i < instrs.size(); i++){
        instrs[i] -> gen_asm(o);
    }
}