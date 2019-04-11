#include <string>
#include "IRInstr.h"

using namespace std;

class IRInstr_call : public IRInstr{

public:
    IRInstr_call(BasicBlock* bb_, string funName, string destination,
      vector<string> ops);
    ~IRInstr_call();
    void gen_asm(ostream &o) override;
    void print(ostream &o) override;

  private:
    string m_funName;
    string m_destination;
    vector<string> m_ops;
    vector<int> offsets;
    int destOffset;
};
