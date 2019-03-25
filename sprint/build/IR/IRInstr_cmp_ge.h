#include <string>
#include "IRInstr.h"

using namespace std;

class IRInstr_cmp_ge : public IRInstr{

public:
    IRInstr_cmp_ge(BasicBlock* bb_, string dest, string op1, string op2);
    ~IRInstr_cmp_ge();

    void gen_asm(ostream &o) override;
    void print(ostream &o) override;

private:
    string m_dest;
    string m_op1;
    string m_op2;
};
