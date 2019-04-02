#include "IRInstr_binaryXor.h"

IRInstr_binaryXor::IRInstr_binaryXor(BasicBlock* bb_, string dest, string op1, string op2)
: IRInstr(bb_, add)
{
	m_dest = dest;
	m_op1 = op1;
	m_op2 = op2;
}

IRInstr_binaryXor::~IRInstr_binaryXor(){}

void IRInstr_binaryXor::gen_asm(ostream &o)
{
	int l_offset = m_bb->cfg->get_var_index(m_op1);
	int r_offset = m_bb->cfg->get_var_index(m_op2);
	int dest_offset = m_bb->cfg->get_var_index(m_dest);

	o << "movl " << -l_offset << "(%rbp),  %eax" << endl;
	o << "xorl " << -r_offset << "(%rbp), %eax" << endl;
	o << "movl %eax, " << -dest_offset << "(%rbp)" << endl;
}

void IRInstr_binaryXor::print(ostream &o)
{
	o << m_dest << " <- " << m_op1 << " ^ " << m_op2 << endl;
}