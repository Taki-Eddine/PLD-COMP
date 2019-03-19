#pragma once

#include <vector>
#include <iostream>
#include "BB.h"

class BasicBlock;

class IRInstr {
 
   public:
	IRInstr(BasicBlock* bb_);
	
	/** Actual code generation */
	virtual void gen_asm(ostream &o); /**< x86 assembly code generation for this IR instruction */
	virtual void gen_arm(ostream &o); 
	virtual void print(ostream &o); /** print IR instruction */
 protected:
	BasicBlock* bb; /**< The BB this instruction belongs to, which provides a pointer to the CFG this instruction belong to */
};