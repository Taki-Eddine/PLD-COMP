#include "IRInstr_rmem.h"

IRInstr_rmem::IRInstr_rmem(BasicBlock* bb_, string addr, string dest)
: IRInstr(bb_, iri_type::rmem)
{
	m_addr = addr;
	m_dest = dest;
	addr_offset = m_bb->cfg->get_var_index(m_addr);
	dest_offset = m_bb->cfg->get_var_index(m_dest);
}

IRInstr_rmem::~IRInstr_rmem(){}

void IRInstr_rmem::gen_asm(ostream &o)
{
	

	o << "movsxd " << -addr_offset << "(%rbp), %rax" << endl;
	o << "addq %rbp, %rax" << endl;
	o << "movl (%rax), %eax" << endl;
	o << "movl %eax, " << -dest_offset << "(%rbp)" << endl; 
}

void IRInstr_rmem::print(ostream &o)
{
	o << m_dest << " <- [ " << m_addr <<" ]" << endl;
}
