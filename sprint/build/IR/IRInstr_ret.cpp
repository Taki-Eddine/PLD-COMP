#include "IRInstr_ret.h"

IRInstr_ret::IRInstr_ret(BasicBlock* bb_, string source)
: IRInstr(bb_, ret)
{
    this -> m_source = source;
    source_offset = m_bb->cfg->get_var_index(m_source);
}

IRInstr_ret::~IRInstr_ret(){};
void IRInstr_ret::gen_asm(ostream &o)
{

  o << "movl " << -source_offset << "(%rbp), %eax" << endl;
  o << "jmp .epilo_" << m_bb -> cfg -> cfgName << endl;
}

void IRInstr_ret::print(ostream &o)
{
	
  o << "return " << m_source << endl;
}