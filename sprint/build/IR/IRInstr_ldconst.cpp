#include "IRInstr_ldconst.h"

IRInstr_ldconst::IRInstr_ldconst(BasicBlock * bb, string dest, string cst): IRInstr(bb), m_dest(dest), m_cst(cst)
{
}

IRInstr_ldconst::~IRInstr_ldconst()
{
}

void IRInstr_ldconst::gen_arm(ostream &o)
{
    o << "mov   w0, " << m_cst << endl;
    o << "str   w0, [sp, " << bb->cfg->get_var_index(m_dest) << "]" << endl;
}