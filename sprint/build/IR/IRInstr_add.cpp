#include "IRInstr_add.h"

IRInstr_add::IRInstr_add(BasicBlock* bb, string dest, string op1, string op2): IRInstr(bb), m_dest(dest), m_op1(op1), m_op2(op2)
{
}

IRInstr_add::~IRInstr_add()
{
}

void IRInstr_add::gen_arm(ostream& o)
{
    o << "ldr   w1, [sp, " << bb->cfg->get_var_index(m_op1) << "]" << endl;
    o << "ldr   w0, [sp, " << bb->cfg->get_var_index(m_op2) << "]" << endl;
    o << "add   w0, w1, w0" << endl;
    o << "str   w0, [sp, " << bb->cfg->get_var_index(m_dest) << "]" << endl;
}

       ldr     w1, [sp, 12]
        ldr     w0, [sp, 8]
        add     w0, w1, w0
        str     w0, [sp, 4]