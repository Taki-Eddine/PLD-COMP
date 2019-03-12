#include <iostream>

#include "antlr4-runtime.h"
#include "sprintLexer.h"
#include "sprintParser.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {

  ANTLRInputStream input(std::cin);
  sprintLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  sprintParser parser(&tokens);

  tree::ParseTree *tree = parser.prg();

  return 0;
}
