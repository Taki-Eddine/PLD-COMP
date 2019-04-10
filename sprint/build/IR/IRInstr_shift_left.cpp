#include "IRInstr_shift_left.h"

IRInstr_shift_left::IRInstr_shift_left(BasicBlock* bb_, string dest, string op1, string op2)
: IRInstr(bb_, shift_left)
{
	m_dest = dest;
	m_op1 = op1;
	m_op2 = op2;
	l_offset = m_bb->cfg->get_var_index(m_op1);
	r_offset = m_bb->cfg->get_var_index(m_op2);
	dest_offset = m_bb->cfg->get_var_index(m_dest);
}

IRInstr_shift_left::~IRInstr_shift_left(){}

void IRInstr_shift_left::gen_asm(ostream &o)
{
	

	o << "movl " << -l_offset << "(%rbp),  %eax" << endl;
	o << "movb " << -r_offset << "(%rbp), %cl" << endl;
	o << "sall " << "%cl, %eax" << endl;
	o << "movl %eax, " << -dest_offset << "(%rbp)" << endl;
}

void IRInstr_shift_left::print(ostream &o)
{
	o << m_dest << " <- " << m_op1 << " << " << m_op2 << endl;
}
