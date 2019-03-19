#include "IRInstr_copy.h"

IRInstr_copy::IRInstr_copy(BasicBlock* bb_, string dest, string source): IRInstr(bb), m_dest(dest), m_source(source)
{
}

IRInstr_copy::~IRInstr_copy()
{
}

void IRInstr_copy::gen_arm(ostream &o)
{
    o << "ldr   w0, [sp, " << bb->cfg->get_var_index(m_source) << "]" << endl;
    o << "str   w0, [sp, " << bb->cfg->get_var_index(m_dest) << "]" << endl;
}