#include "Visitor.h"
#include <string>

antlrcpp::Any Visitor::visitPrg(Sprint_1_Parser::PrgContext *ctx)
{
  assembly.open("assembly.s");
  assembly << ".text" << endl;
  assembly << ".global main" << endl;
  assembly << "main:" << endl;

  return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitRet(Sprint_1_Parser::RetContext *ctx)
{
  string value = ctx -> INT() -> getText();
  assembly << "movl $" << value << ", %eax" << endl;
  assembly << "ret" << endl;
  assembly.close();
  return visitChildren(ctx);
}
