#include <iostream>

#include "antlr4-runtime.h"
#include "sprintLexer.h"
#include "sprintParser.h"
#include "Visitor.h"
#include "ErrorsChecker.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {

  ANTLRInputStream input(std::cin);
  sprintLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  sprintParser parser(&tokens);
  tree::ParseTree *tree = parser.prg();
  if(parser.getNumberOfSyntaxErrors() != 0){
    cerr << "[-] Program is syntactically incorrect, no file has been generated" << endl;
  }
  else{   
    ErrorsChecker errorsChecker;
    errorsChecker.visit(tree);
    //Visitor visitor;
    //visitor.visit(tree);
  }
return 0;
};