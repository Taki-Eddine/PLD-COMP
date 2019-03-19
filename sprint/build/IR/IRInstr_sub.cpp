#include "IRInstr_sub.h"

IRInstr_sub::IRInstr_sub(BasicBlock* bb, string dest, string op1, string op2): IRInstr(bb), m_dest(dest), m_op1(op1), m_op2(op2)
{
}

IRInstr_sub::~IRInstr_sub()
{
}

void IRInstr_sub::gen_arm(ostream& o)
{
    o << "ldr   w1, [sp, " << bb->cfg->get_var_index(m_op1) << "]" << endl;
    o << "ldr   w0, [sp, " << bb->cfg->get_var_index(m_op2) << "]" << endl;
    o << "sub   w0, w1, w0" << endl;
    o << "str   w0, [sp, " << bb->cfg->get_var_index(m_dest) << "]" << endl;
}
