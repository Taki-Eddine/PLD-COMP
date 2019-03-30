#include "IRInstr_call.h"

IRInstr_call::IRInstr_call(BasicBlock* bb_, string funName, 
	string destination, vector<string> ops)
: IRInstr(bb_, sub)
{
	m_funName = funName;
	m_destination = destination;
	for (unsigned int i=0; i<ops.size(); i++){
		m_ops.push_back(ops[i]);
	}
}

IRInstr_call::~IRInstr_call(){}

void IRInstr_call::gen_asm(ostream &o)
{
	string regs[6] = {"edi","esi","edx","ecx","r8d","r9d"};
	for (unsigned int idx = 0; idx < m_ops.size(); idx++){
        int argOffset = m_bb -> cfg -> get_var_index(m_ops[idx]);
        o << "movl " << -argOffset << "(%rbp), %" << regs[idx] << endl;
    }

	o << "call " << m_funName << endl;
	int destOffset = m_bb -> cfg -> get_var_index(m_destination);
	o << "mov %eax, " << -destOffset << "(%rbp)" << endl;
}

void IRInstr_call::print(ostream &o)
{
	o << m_destination << " <- " << m_funName << "(";
	for (unsigned int i=0; i<m_ops.size(); i++){
		o << m_ops[i];
		if(i!=m_ops.size()-1)
			o << ", "; 
	}
	o << ")" << endl;
}