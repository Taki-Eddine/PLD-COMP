#include <iostream>

#include "antlr4-runtime.h"
#include "sprintLexer.h"
#include "sprintParser.h"
#include "Visitor.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {

  ANTLRInputStream input(std::cin);
  sprintLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  sprintParser parser(&tokens);

  tree::ParseTree *tree = parser.prg();

  // std::cout<<"Pizda masii";

  Visitor v;
  v.visit(tree);

  std::cout<<"After visit";

  return 0;
}
