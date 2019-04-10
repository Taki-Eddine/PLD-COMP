#include "IRInstr_cmp_gt.h"

IRInstr_cmp_gt::IRInstr_cmp_gt(BasicBlock* bb_, string dest, string op1, string op2)
:IRInstr(bb_, cmp_gt)
{

	m_dest = dest;
	m_op1 = op1;
	m_op2 = op2;
	l_offset = m_bb->cfg->get_var_index(m_op1);
	r_offset = m_bb->cfg->get_var_index(m_op2);
}
IRInstr_cmp_gt::~IRInstr_cmp_gt(){};

void IRInstr_cmp_gt::gen_asm(ostream &o){
    

	o << "movl " << -l_offset << "(%rbp),  %eax" << endl;
	o << "cmpl " << -r_offset << "(%rbp), %eax" << endl;
	o << "jle ." << m_bb->cfg->cfgName << "_BB_" << m_bb -> exit_false -> label << endl;
	o << "jmp ." << m_bb->cfg->cfgName << "_BB_" << m_bb -> exit_true -> label << endl;
};
void IRInstr_cmp_gt::print(ostream &o){
   o << m_dest << " <- " << m_op1 << " > " << m_op2 << endl;
};
