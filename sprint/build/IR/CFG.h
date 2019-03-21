#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include "BB.h"
#include "Symbol.h"

using namespace std;
class BasicBlock;
class CFG {
 public:
	CFG(string funcName);	
	//void add_bb(BasicBlock* bb); 

	// x86 code generation: could be encapsulated in a processor class in a retargetable compiler
	void gen_asm_prologue(ostream& o);
	void gen_asm(ostream& o);
	void gen_asm_epilogue(ostream& o);
	void add_BB(BasicBlock* bb);
	// symbol table methods
	void add_to_symbol_table(string name, bool initialized);
	string create_new_tempvar();
	int get_var_index(string name);
	bool isInit(string name);

	// basic block management
	string new_BB_name();
	BasicBlock* current_bb;

 protected:
	std::unordered_map<std::string, Symbol*> table;
	int nextBBnumber; /**< just for naming */	
	int lastOffset;
	string funName;
	vector <BasicBlock*> bbs; /**< all the basic blocks of this CFG*/
};