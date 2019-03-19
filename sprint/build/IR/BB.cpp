#include "BB.h"

BasicBlock::BasicBlock(CFG* cfg, string entry_label){
    this->cfg = cfg;
    this->label = entry_label;
}

void BasicBlock::gen_asm(ostream &o){
    // to add
}

void BasicBlock::add_IRInstr(IRInstr * instr){
    // to add
}