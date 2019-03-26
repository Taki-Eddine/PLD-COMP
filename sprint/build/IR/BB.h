#pragma once

#include <iostream>
#include "CFG.h"
#include "IRInstr.h"

using namespace std;
class CFG;
class IRInstr;

class BasicBlock {
 public:
	BasicBlock(CFG* cfg, string entry_label);
	virtual ~BasicBlock();
	void gen_asm(ostream &o); /**< x86 assembly code generation for this basic block (very simple) */
	void print(ostream &o);
	void add_IRInstr(IRInstr * instr); 

	BasicBlock* exit_true;  /**< pointer to the next basic block, true branch. If nullptr, return from procedure */ 
	BasicBlock* exit_false; /**< pointer to the next basic block, false branch. If null_ptr, the basic block ends with an unconditional jump */
	string label; /**< label of the BB, also will be the label in the generated code */
	CFG* cfg; /** < the CFG where this block belongs */
	vector<IRInstr*> instrs; /** < the instructions themselves. */
 
};