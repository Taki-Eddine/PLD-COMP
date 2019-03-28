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
	CFG(string cfgName);
	virtual ~CFG();	
	//void add_bb(BasicBlock* bb); 

	// x86 code generation: could be encapsulated in a processor class in a retargetable compiler
	void gen_asm_prologue(ostream& o);
	void gen_asm(ostream& o);
	void print(ostream& o);
	void gen_asm_epilogue(ostream& o);
	void add_BB(BasicBlock* bb);
	// symbol table methods
	void add_to_symbol_table(string name, bool initialized);
	string create_new_tempvar();
	int get_var_index(string name);
	bool isInit(string name);
	void setInit(string name);
	void setFormalParams(vector<string> formalParams);
	// basic block management
	string new_BB_name();
	string cfgName;
 protected:
	unordered_map<string, Symbol*> table;
	int nextBBnumber; /**< just for naming */	
	int lastOffset;
	vector <BasicBlock*> bbs; /**< all the basic blocks of this CFG*/
	vector <string> formalParams;
};