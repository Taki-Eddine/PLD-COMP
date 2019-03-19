#include <string>
#include "IRInstr.h"

using namespace std;

class IRInstr_add : public IRInstr{
public:
    IRInstr_add(BasicBlock* bb_, string dest, string op1, string op2);
    ~IRInstr_add();
    void gen_asm(ostream &o) override;
};
