#include "IRInstr_wmem.h"

IRInstr_wmem::IRInstr_wmem(BasicBlock* bb_, string addr, string source)
: IRInstr(bb_, iri_type::wmem)
{
	m_addr = addr;
	m_source = source;
}

IRInstr_wmem::~IRInstr_wmem(){}

void IRInstr_wmem::gen_asm(ostream &o)
{
	int addr_offset = m_bb->cfg->get_var_index(m_addr);
	int source_offset = m_bb->cfg->get_var_index(m_source);
	o << "movsxd " << -addr_offset << "(%rbp), %rax" << endl;
	o << "addq %rbp, %rax" << endl;
	o << "movl " << -source_offset << "(%rbp), %r10d" << endl;
	o << "movl %r10d, (%rax)" << endl;

}

void IRInstr_wmem::print(ostream &o)
{
	o << "[ " << m_addr <<" ] <- " << m_source << endl;
}
