#include "IRInstr.h"

IRInstr::IRInstr(BasicBlock* bb_){
    this->m_bb = bb_;
};

void IRInstr::gen_asm(ostream &o){

};

void IRInstr::print(ostream &o){
    cout << "Haha\n";
};