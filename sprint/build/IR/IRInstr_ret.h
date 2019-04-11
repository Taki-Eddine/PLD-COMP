#include <string>
#include "IRInstr.h"

using namespace std;

class IRInstr_ret : public IRInstr{
public:
    IRInstr_ret(BasicBlock* bb_, string source);
    ~IRInstr_ret();
    void gen_asm(ostream &o) override;
    void print(ostream &o) override;

private:
    string m_source;
    int source_offset;
};