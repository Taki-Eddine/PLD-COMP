#include <iostream>

#include "antlr4-runtime.h"
#include "Sprint_1_Lexer.h"
#include "Sprint_1_Parser.h"
#include "Visitor.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {

  ANTLRInputStream input(std::cin);
  Sprint_1_Lexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  Sprint_1_Parser parser(&tokens);

  tree::ParseTree *tree = parser.prg();
  Visitor visitor;
  visitor.visit(tree);
  return 0;
}