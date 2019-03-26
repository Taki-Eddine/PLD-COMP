#include "IRInstr_cmp_neq.h"

IRInstr_cmp_neq::IRInstr_cmp_neq(BasicBlock* bb_, string dest, string op1, string op2)
:IRInstr(bb_, cmp_neq)
{

	m_dest = dest;
	m_op1 = op1;
	m_op2 = op2;
}
IRInstr_cmp_neq::~IRInstr_cmp_neq(){};

void IRInstr_cmp_neq::gen_asm(ostream &o){
    int l_offset = m_bb->cfg->get_var_index(m_op1);
	int r_offset = m_bb->cfg->get_var_index(m_op2);
	//int dest_offset = m_bb->cfg->get_var_index(m_dest);

	o << "movl -" << l_offset << "(%rbp),  %eax" << endl;
	o << "cmpl -" << r_offset << "(%rbp), %eax" << endl;
	o << "je ." << m_bb->cfg->cfgName << "_BB_" << m_bb -> exit_false -> label << endl;
	o << "jmp ." << m_bb->cfg->cfgName << "_BB_" << m_bb -> exit_true -> label << endl;
};
void IRInstr_cmp_neq::print(ostream &o){
    o << m_dest << " <- " << m_op1 << " != " << m_op2 << endl;
};
