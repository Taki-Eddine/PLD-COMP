#include <string>
#include "IRInstr.h"

using namespace std;

class IRInstr_ldconst : public IRInstr{
public:
    IRInstr_ldconst(BasicBlock* bb_, string dest, string cst);
    ~IRInstr_ldconst();
    void gen_asm(ostream &o) override;
};


