#include "IRInstr.h"

IRInstr::IRInstr(BasicBlock* bb_, iri_type itype){
    this -> m_bb = bb_;
    this -> itype = itype;
};

IRInstr::~IRInstr(){};
void IRInstr::gen_asm(ostream &o){

};

void IRInstr::print(ostream &o){
};