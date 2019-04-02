#include "IRInstr_call.h"

IRInstr_call::IRInstr_call(BasicBlock* bb_, string funName, 
	string destination, vector<string> ops)
: IRInstr(bb_, iri_type::call)
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
	int numberOfArgs = m_ops.size();
	int numberOfRegisters = numberOfArgs >= 6 ? 6 : numberOfArgs;
	int argOffset;
	int destOffset = m_bb -> cfg -> get_var_index(m_destination);
	string regs[6] = {"edi","esi","edx","ecx","r8d","r9d"};
	
	for (int idx = numberOfArgs - 1; idx >= 6; idx--){
		argOffset = m_bb -> cfg -> get_var_index(m_ops[idx]);
		o << "movl " << -argOffset << "(%rbp), %eax" <<endl;
		o << "pushq %rax" << endl;
	}

	for (int idx = 0; idx < numberOfRegisters; idx++){
		argOffset = m_bb -> cfg -> get_var_index(m_ops[idx]);
		o << "movl " << -argOffset << "(%rbp), %" << regs[idx] << endl;
	}

	o << "call " << m_funName << endl;
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
