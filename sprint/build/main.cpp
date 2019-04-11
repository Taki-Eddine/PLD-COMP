#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "sprintLexer.h"
#include "sprintParser.h"
#include "Visitor.h"

using namespace antlr4;

/*
  Function that based on file name gets the whole program in a string
*/
std::string getProgram(string fileName){
  ifstream f(fileName);
  std::string str;
  std::string fContent;
  while (std::getline(f,str)){
    fContent+=(str+"\n");
  }
  f.close();
  return fContent;
}

int main(int argc, const char* argv[]) {

  // finding the file name from the main arguments
  std::string fileName="";
  for (int i=1; i<argc; i++){
    if(argv[i][0]!='-'){
      fileName=argv[i];
      break;
    }
  }

  if(!fileName.length()){
    cerr << "[-] No file path given"<<endl;
    return 0;
  }

  // getting program content and checking for path and emptiness
  std::string fContent = getProgram(fileName);
  if(!fContent.length()){
    cerr << "[-] Wrong file path or empty file"<<endl;
    return 0;
  }

  ANTLRInputStream input(fContent);
  sprintLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  sprintParser parser(&tokens);
  tree::ParseTree *tree = parser.prg();
  if(parser.getNumberOfSyntaxErrors() != 0){
    cerr << "[-] Program is syntactically incorrect, no file has been generated" << endl;
  }
  else{   
    Visitor visitor;
    visitor.visit(tree);
  }
  return 0;
};