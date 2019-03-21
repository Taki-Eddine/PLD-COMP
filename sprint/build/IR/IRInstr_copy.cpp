#include "IRInstr_copy.h"

IRInstr_copy::IRInstr_copy(BasicBlock* bb_, string dest, string source)
: IRInstr(bb_)
{
	m_dest = dest;
	m_source = source;
}

IRInstr_copy::~IRInstr_copy(){}

void IRInstr_copy::gen_asm(ostream &o)
{
	int dest_offset = m_bb->cfg->get_var_index(m_dest);
	int source_offset = m_bb->cfg->get_var_index(m_source);

  o << "movl -" << source_offset << "(%rbp), %eax" << endl;
  o << "movl %eax, -" << dest_offset << "(%rbp)" << endl;
}

void IRInstr_copy::print(ostream &o)
{
	o << "copy " << m_dest << " " << m_source << endl;
}
