#include <string>
#include "IRInstr.h"

using namespace std;

class IRInstr_ldconst : public IRInstr{

public:
    IRInstr_ldconst(BasicBlock* bb_, string dest, string cst);
    ~IRInstr_ldconst();
    void print(ostream &o) override;
    void gen_asm(ostream &o) override;

private:
    string m_dest;
    string m_cst;
    int dest_offset;
};
