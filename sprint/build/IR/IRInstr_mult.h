#include <string>
#include "IRInstr.h"

using namespace std;

class IRInstr_mult : public IRInstr{

public:
    IRInstr_mult(BasicBlock* bb_, string dest, string op1, string op2);
    ~IRInstr_mult();

    void gen_asm(ostream &o) override;

private:
  BasicBlock* m_bb;
  string m_dest;
  string m_op1;
  string m_op2;
};
