#include "IRInstr_ret.h"

IRInstr_ret::IRInstr_ret(BasicBlock* bb_, string source)
: IRInstr(bb_)
{
    this -> m_source = source;
}

void IRInstr_ret::gen_asm(ostream &o)
{
	int source_offset = m_bb->cfg->get_var_index(m_source);

  o << "movl -" << source_offset << "(%rbp), %eax" << endl;
}

void IRInstr_ret::print(ostream &o)
{
	
  o << "ret " << m_source << endl;
}