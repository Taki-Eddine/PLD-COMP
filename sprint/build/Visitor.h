#include "Sprint_1_BaseVisitor.h"
#include <fstream>
using namespace std;

class  Visitor : public Sprint_1_BaseVisitor {

public:
  ofstream assembly;

  antlrcpp::Any visitPrg(Sprint_1_Parser::PrgContext *ctx) override;

  antlrcpp::Any visitRet(Sprint_1_Parser::RetContext *ctx) override;

};
