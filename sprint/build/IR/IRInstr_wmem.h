#include <string>
#include "IRInstr.h"

using namespace std;

class IRInstr_wmem : public IRInstr{

public:
    IRInstr_wmem(BasicBlock* bb_, string addr, string source);
    ~IRInstr_wmem();
    void gen_asm(ostream &o) override;
    void print(ostream &o) override;

private:
      string m_addr;
      string m_source;
      int addr_offset;
      int source_offset;
};
