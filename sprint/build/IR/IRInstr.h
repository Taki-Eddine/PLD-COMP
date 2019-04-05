#pragma once

#include <vector>
#include <iostream>
#include "BB.h"

class BasicBlock;
using namespace std;
typedef enum {
		ldconst,
		copy,
		wmem,
		rmem,
		add,
		sub,
		mul,
		uminus,
		binAnd,
		binOr,
		binXor,
		call,
		cmp_lt,
		cmp_gt,
		cmp_le,
		cmp_ge,
		cmp_eq,
		cmp_neq,
		ret,
		shift_left,
		shift_right
	} iri_type;
	
class IRInstr {

  public:
	IRInstr(BasicBlock* bb_, iri_type itype);
	virtual ~IRInstr();
	/** Actual code generation */
     virtual void gen_asm(ostream &o); /**< x86 assembly code generation for this IR instruction */
	 virtual void print(ostream &o); /**< print IR instruction **/
 public:
		BasicBlock* m_bb; /**< The BB this instruction belongs to, which provides a pointer to the CFG this instruction belong to */
		iri_type itype;
};
