#include "IRInstr_shift_right.h"

IRInstr_shift_right::IRInstr_shift_right(BasicBlock* bb_, string dest, string op1, string op2)
: IRInstr(bb_, shift_right)
{
	m_dest = dest;
	m_op1 = op1;
	m_op2 = op2;
}

IRInstr_shift_right::~IRInstr_shift_right(){}

void IRInstr_shift_right::gen_asm(ostream &o)
{
	int l_offset = m_bb->cfg->get_var_index(m_op1);
	int r_offset = m_bb->cfg->get_var_index(m_op2);
	int dest_offset = m_bb->cfg->get_var_index(m_dest);

	o << "movl " << -l_offset << "(%rbp),  %eax" << endl;
	o << "movb " << -r_offset << "(%rbp), %cl" << endl;
	o << "sarl " << "%cl, %eax" << endl;
	o << "movl %eax, " << -dest_offset << "(%rbp)" << endl;
}

void IRInstr_shift_right::print(ostream &o)
{
	o << m_dest << " <- " << m_op1 << " >> " << m_op2 << endl;
}
