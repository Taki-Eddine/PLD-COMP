#include "IRInstr_sub.h"

IRInstr_sub::IRInstr_sub(BasicBlock* bb_, string dest, string op1, string op2)
: IRInstr(bb_)
{
	m_dest = dest;
	m_op1 = op1;
	m_op2 = op2;
}

IRInstr_sub::~IRInstr_sub(){}

void IRInstr_sub::gen_asm(ostream &o)
{
	int l_offset = m_bb->cfg->get_var_index(m_op1);
	int r_offset = m_bb->cfg->get_var_index(m_op2);
	int dest_offset = m_bb->cfg->get_var_index(m_dest);

	o << "movl -" << l_offset << "(%rbp),  %eax" << endl;
	o << "subl -" << r_offset << "(%rbp), %eax" << endl;
	o << "movl %eax, -" << dest_offset << "(%rbp)" << endl;
}
