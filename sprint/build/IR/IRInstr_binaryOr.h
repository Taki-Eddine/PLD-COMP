#include <string>
#include "IRInstr.h"

using namespace std;

class IRInstr_binaryOr : public IRInstr{

public:
    IRInstr_binaryOr(BasicBlock* bb_, string dest, string op1, string op2);
    ~IRInstr_binaryOr();

    void gen_asm(ostream &o) override;
    void print(ostream &o) override;

private:
    string m_dest;
    string m_op1;
    string m_op2;
};