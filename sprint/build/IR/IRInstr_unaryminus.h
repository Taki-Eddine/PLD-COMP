#include <string>
#include "IRInstr.h"

using namespace std;

class IRInstr_unaryminus : public IRInstr{
public:
    IRInstr_unaryminus(BasicBlock* bb_, string dest, string source);
    ~IRInstr_unaryminus();
    void gen_asm(ostream &o) override;
};
