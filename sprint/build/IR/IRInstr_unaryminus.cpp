#include "IRInstr_unaryminus.h"

IRInstr_unaryminus::IRInstr_unaryminus(BasicBlock* bb_, string dest, string source)
: IRInstr(bb_, uminus)
{
	m_dest = dest;
	m_source = source;
  dest_offset = m_bb->cfg->get_var_index(m_dest);
	source_offset = m_bb->cfg->get_var_index(m_source);
}

IRInstr_unaryminus::~IRInstr_unaryminus(){}

void IRInstr_unaryminus::gen_asm(ostream &o)
{
	

  o << "movl " << -source_offset << "(%rbp), %eax" << endl;
  o << "negl %eax"<< endl;
  o << "movl %eax, " << -dest_offset << "(%rbp)" << endl;
}



void IRInstr_unaryminus::print(ostream &o)
{
  o << m_dest << " <- " << "-" << m_source << endl; 
}
