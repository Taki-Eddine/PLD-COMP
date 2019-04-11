#include <string>
#include "IRInstr.h"

using namespace std;

class IRInstr_rmem : public IRInstr{

public:
    IRInstr_rmem(BasicBlock* bb_, string addr, string dest);
    ~IRInstr_rmem();
    void gen_asm(ostream &o) override;
    void print(ostream &o) override;

private:
      string m_addr;
      string m_dest;
      int addr_offset;
      int dest_offset;
};
