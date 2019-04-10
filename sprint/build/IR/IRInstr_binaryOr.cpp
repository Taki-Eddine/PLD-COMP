#include "IRInstr_binaryOr.h"

IRInstr_binaryOr::IRInstr_binaryOr(BasicBlock* bb_, string dest, string op1, string op2)
: IRInstr(bb_, binOr)
{
	m_dest = dest;
	m_op1 = op1;
	m_op2 = op2;
	l_offset = m_bb->cfg->get_var_index(m_op1);
	r_offset = m_bb->cfg->get_var_index(m_op2);
	dest_offset = m_bb->cfg->get_var_index(m_dest);
}

IRInstr_binaryOr::~IRInstr_binaryOr(){}

void IRInstr_binaryOr::gen_asm(ostream &o)
{
	int l_offset = m_bb->cfg->get_var_index(m_op1);
	int r_offset = m_bb->cfg->get_var_index(m_op2);
	int dest_offset = m_bb->cfg->get_var_index(m_dest);

	o << "movl " << -l_offset << "(%rbp),  %eax" << endl;
	o << "orl " << -r_offset << "(%rbp), %eax" << endl;
	o << "movl %eax, " << -dest_offset << "(%rbp)" << endl;
}

void IRInstr_binaryOr::print(ostream &o)
{
	o << m_dest << " <- " << m_op1 << " | " << m_op2 << endl;
}