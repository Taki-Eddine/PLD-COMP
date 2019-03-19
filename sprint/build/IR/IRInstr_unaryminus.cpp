#include "IRInstr_unaryminus.h"

IRInstr_unaryminus::IRInstr_unaryminus(BasicBlock* bb_, string dest, string source): IRInstr(bb), m_dest(dest), m_source(source)
{
}

IRInstr_unaryminus::~IRInstr_unaryminus()
{
}

void IRInstr_unaryminus::gen_arm(ostream &o)
{
    o << "ldr   w0, [sp, " << bb->cfg->get_var_index(m_source) << "]" << endl;
    o << "str   w0, [sp, " << bb->cfg->get_var_index(m_dest) << "]" << endl;
}