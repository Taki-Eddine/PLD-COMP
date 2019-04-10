#include "IRInstr_add.h"

IRInstr_add::IRInstr_add(BasicBlock* bb_, string dest, string op1, string op2)
: IRInstr(bb_, add)
{
	m_dest = dest;
	m_op1 = op1;
	m_op2 = op2;
	l_offset = m_bb->cfg->get_var_index(m_op1);
	r_offset = m_bb->cfg->get_var_index(m_op2);
	dest_offset = m_bb->cfg->get_var_index(m_dest);
}

IRInstr_add::~IRInstr_add(){}

void IRInstr_add::gen_asm(ostream &o)
{
	

	o << "movl " << -l_offset << "(%rbp),  %eax" << endl;
	o << "addl " << -r_offset << "(%rbp), %eax" << endl;
	o << "movl %eax, " << -dest_offset << "(%rbp)" << endl;
}

void IRInstr_add::print(ostream &o)
{
	o << m_dest << " <- " << m_op1 << " + " << m_op2 << endl;
}
