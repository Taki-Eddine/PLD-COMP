#include <string>
#include "IRInstr.h"

using namespace std;

class IRInstr_shift_right : public IRInstr{

public:
    IRInstr_shift_right(BasicBlock* bb_, string dest, string op1, string op2);
    ~IRInstr_shift_right();

    void gen_asm(ostream &o) override;
    void print(ostream &o) override;

private:
    string m_dest;
    string m_op1;
    string m_op2;
};
