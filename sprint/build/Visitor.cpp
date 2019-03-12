
// Generated from sprint.g4 by ANTLR 4.7.2

#include <iostream>
#include "Visitor.h"

using namespace std;

Visitor::Visitor(){};
Visitor::~Visitor(){};

antlrcpp::Any Visitor::visitFuncDeclaration(sprintParser::FuncDeclarationContext *ctx){
  cout << ".text" << endl;
  cout << ".global main" << endl;
  cout << "main:" << endl;
  cout << "pushq  %rbp" << endl;;
  cout << "movq %rsp, %rbp" << endl;
  return visitChildren(ctx);
};

antlrcpp::Any Visitor::visitInitializedDec(sprintParser::InitializedDecContext *ctx){
  int rOffset = visit(ctx -> expr());
  int lOffset = st.putVariable(ctx -> ID() -> getText());
  cout << "movl -" << to_string(rOffset) << "(%rbp), %eax" <<endl;
  cout << "movl %eax, -" << to_string(lOffset) << "(%rbp)" << endl;
  return nullptr;
};
antlrcpp::Any Visitor::visitNonInitDec(sprintParser::NonInitDecContext *ctx){
  st.putVariable(ctx -> ID() -> getText());
  return nullptr;
};

antlrcpp::Any Visitor::visitVAR_EXPR(sprintParser::VAR_EXPRContext *ctx){
  return st.getOffset(ctx -> ID() -> getText());
};

antlrcpp::Any Visitor::visitNUM_EXPR(sprintParser::NUM_EXPRContext *ctx){
  int dummyOffeset = st.putDummyVariable();
  cout << "movl $" << ctx -> INT() -> getText() << ", -" << to_string(dummyOffeset) << "(%rbp)" << endl;
  return dummyOffeset;
};

antlrcpp::Any Visitor::visitRetStatement(sprintParser::RetStatementContext *ctx){
  int offset = visit(ctx -> expr());
  cout << "movl -" << to_string(offset) << "(%rbp), %eax" <<endl;
  cout << "popq %rbp" << endl;
  cout << "ret" << endl;
  return nullptr;
};