#include <string>
#include "IRInstr.h"

using namespace std;

class IRInstr_unaryminus : public IRInstr{
public:
    IRInstr_unaryminus(BasicBlock* bb_, string dest, string source);
    ~IRInstr_unaryminus();
    void gen_asm(ostream &o) override;
    void gen_arm(ostream &o) override;

private:
    string m_dest;
    string m_source;
};
