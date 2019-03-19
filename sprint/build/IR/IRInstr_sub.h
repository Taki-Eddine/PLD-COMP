#include <string>
#include "IRInstr.h"

using namespace std;

class IRInstr_sub : public IRInstr{
public:
    IRInstr_sub(BasicBlock* bb_, string dest, string op1, string op2);
    ~IRInstr_sub();
    void gen_asm(ostream &o) override;
    void gen_arm(ostream &o) override;

private:
    string m_dest;
    string m_op1;
    string m_op2;
};
