#include "IRInstr_ldconst.h"

IRInstr_ldconst::IRInstr_ldconst(BasicBlock* bb_, string dest, string cst)
: IRInstr(bb_, ldconst)
{
	m_dest = dest;
	m_cst = cst;
	dest_offset = m_bb->cfg->get_var_index(m_dest);
}

IRInstr_ldconst::~IRInstr_ldconst(){}

void IRInstr_ldconst::gen_asm(ostream &o)
{
  o << "movl $" << m_cst << ", " << -dest_offset << "(%rbp)" << endl;
}

void IRInstr_ldconst::print(ostream &o)
{
	o <<  m_dest << " <- " << m_cst << endl;
}
