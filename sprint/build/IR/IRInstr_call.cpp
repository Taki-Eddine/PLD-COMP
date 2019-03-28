#include "IRInstr_call.h"

IRInstr_call::IRInstr_call(BasicBlock* bb_, string label, 
	string destination, vector<string> ops)
: IRInstr(bb_, sub)
{
	m_label = label;
	m_destination = destination;
	for (unsigned int i=0; i<ops.size(); i++){
		m_ops.push_back(ops[i]);
	}
}

IRInstr_call::~IRInstr_call(){}

void IRInstr_call::gen_asm(ostream &o)
{
	// int l_offset = m_bb->cfg->get_var_index(m_op1);
	// int r_offset = m_bb->cfg->get_var_index(m_op2);
	// int dest_offset = m_bb->cfg->get_var_index(m_dest);

	// o << "movl -" << l_offset << "(%rbp),  %eax" << endl;
	// o << "subl -" << r_offset << "(%rbp), %eax" << endl;
	// o << "movl %eax, -" << dest_offset << "(%rbp)" << endl;
}

void IRInstr_call::print(ostream &o)
{
	o << m_destination << " <- " << m_label << "(";
	for (unsigned int i=0; i<m_ops.size(); i++){
		o << m_ops[i];
		if(i!=m_ops.size()-1)
			o << ", "; 
	}
	o << ")" << endl;
}
