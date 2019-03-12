
// Generated from sprint.g4 by ANTLR 4.7.2

#include <iostream>
#include "Visitor.h"

using namespace std;

// antlrcpp::Any Visitor::visitFuncDeclaration(sprintParser::FuncDeclarationContext *ctx){
//   cout<<"Hi!"<<endl;
// }

antlrcpp::Any Visitor::visitVarDeclaration(sprintParser::VarDeclarationContext *ctx) {
  if(ctx->ID().size()==1){
    if(ctx->INT()!=0){
      // int x = 1;
      cout<<"enter x=1"<<endl;
    } else {
      // int x;
      cout<<"enter x"<<endl;
    }
  } else {
    // int x = y;
    cout<<"enter x=y"<<endl;
  }
}
