#include "IRInstr_ldconst.h"

IRInstr_ldconst::IRInstr_ldconst(BasicBlock* bb_, string dest, string cst)
{
	m_dest = dest;
	m_cst = cst;
}

IRInstr_ldconst::~IRInstr_ldconst(){}

void IRInstr_ldconst::gen_asm(ostream &o)
{
	int dest_offset = m_bb->cfg->get_var_index(m_dest);
	int cst_offset = m_bb->cfg->get_var_index(m_cst);

  o << "movl $" << cst_offset << ", -" << dest_offset << "(%rbp)" << endl;
}
