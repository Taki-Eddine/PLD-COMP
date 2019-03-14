
// Generated from sprint.g4 by ANTLR 4.7.2

#include <iostream>
#include "Visitor.h"

using namespace std;

Visitor::Visitor(){
  error = false;
};
Visitor::~Visitor(){};

antlrcpp::Any Visitor::visitPrg(sprintParser::PrgContext *ctx){
  visitChildren(ctx);
  if (!error){
    assembly.open("assembly.s");
    assembly << tempo_ss.rdbuf() << endl; 
    assembly.close();
  }
 
  return -1;
}

antlrcpp::Any Visitor::visitFuncDeclaration(sprintParser::FuncDeclarationContext *ctx){
  writePrologue();
  return visitChildren(ctx);
};

antlrcpp::Any Visitor::visitInitializedDec(sprintParser::InitializedDecContext *ctx){
  string name = ctx -> ID()-> getText();
  Variable* id = st.getVariable(name);
  if (id != nullptr){
    int line = ctx -> getStart() -> getLine();
    cerr << "[-] Error (Line " << line << ") Variable " << name << " is already declared in this scope" << endl;
    error = true;
  }
  else{
    int rOffset = visit(ctx -> expr());
    int lOffset = st.allocateVariable(name, true);
    writeAffectExpr(lOffset, rOffset);
  }

  return -1;

};
antlrcpp::Any Visitor::visitNonInitDec(sprintParser::NonInitDecContext *ctx){
  string name = ctx -> ID()-> getText();
  Variable* id = st.getVariable(name);
  if (id != nullptr){
    int line = ctx -> getStart() -> getLine();
    cerr << "[-] Error (Line " << line << ") Variable " << name << " is already declared in this scope" << endl;
    error = true;
  }
  else{
    st.allocateVariable(name, false);
  }
  return -1;
};

antlrcpp::Any Visitor::visitVAR_EXPR(sprintParser::VAR_EXPRContext *ctx){
  string name = ctx -> ID() -> getText();
  Variable* id = st.getVariable(name);
  int line  = ctx -> getStart() -> getLine();
  if (id == nullptr){
    cerr << "[-] Error (Line " << to_string(line) << "): Undefined variable " << name << endl;
    error = true;
    return -1;
  }
  else if(!id->isInitialized()){
    cerr << "[!] Warning (Line " << to_string(line) << "): Uninitialized variable " << name << endl;
  }
  return id -> getOffset();
};

antlrcpp::Any Visitor::visitNUM_EXPR(sprintParser::NUM_EXPRContext *ctx){
    int dummyOffeset = st.allocateDummy();
    tempo_ss << "movl $" << ctx -> INT() -> getText() << ", -" << to_string(dummyOffeset) << "(%rbp)" << endl;
    return dummyOffeset;
  
};

antlrcpp::Any Visitor::visitRetStatement(sprintParser::RetStatementContext *ctx){
    int offset = visit(ctx -> expr());
    writeRetStmt(offset);
    return offset;
};

antlrcpp::Any Visitor::visitMULT_EXPR(sprintParser::MULT_EXPRContext *ctx){
    int lOffset = visit(ctx -> expr(0));
    int rOffset = visit(ctx -> expr(1));
    int offset = st.allocateDummy();
    writeBinaryOP(offset, rOffset, lOffset, "*");  
    return offset;
};

antlrcpp::Any Visitor::visitADD_MINUS_EXPR(sprintParser::ADD_MINUS_EXPRContext *ctx){
    int lOffset = visit(ctx -> expr(0));
    int rOffset = visit(ctx -> expr(1));
    int offset = st.allocateDummy();
    writeBinaryOP(offset, rOffset, lOffset, ctx -> PLUS_MINUS() -> getText());
    
    return offset;
};

antlrcpp::Any Visitor::visitUNARY_EXPR(sprintParser::UNARY_EXPRContext *ctx){
      int exprOffset = visit(ctx -> expr());
      if (ctx -> PLUS_MINUS() -> getText() == "-"){
        int offset = st.allocateDummy();
        writeUnaryOP(offset, exprOffset, "-");
        return offset;
      }
      return exprOffset;
};

antlrcpp::Any Visitor::visitPAREN_EXPR(sprintParser::PAREN_EXPRContext *ctx){
   return visit(ctx -> expr());
};

antlrcpp::Any Visitor::visitAFFECT_EXPR(sprintParser::AFFECT_EXPRContext *ctx){
  string name = ctx -> ID() ->  getText();
  Variable* id = st.getVariable(name);
  if(id == nullptr){
    int line = ctx -> getStart() -> getLine();
    cerr << "[-] Error (Line " << to_string(line) << "): Undefined variable " << name << endl;
    error = true;
    return -1;
  }
  else{
    int lOffset = id -> getOffset();
    int rOffset = visit(ctx -> expr());
    id->setInitialized();
    if (!error) writeAffectExpr(lOffset, rOffset);
    return lOffset;
  }  
  
};

//---------------------------------------------------------------------------------
void Visitor::writePrologue(){
  tempo_ss << ".text" << endl;
  tempo_ss << ".global main" << endl;
  tempo_ss << "main:" << endl;
  tempo_ss << "pushq  %rbp" << endl;;
  tempo_ss << "movq %rsp, %rbp" << endl;
}

void Visitor::writeBinaryOP(int offset, int rOffset, int lOffset, string op){
  tempo_ss << "movl -" << to_string(lOffset) << "(%rbp),  %eax" << endl;

  if(op == "*")
    tempo_ss << "imul -" << to_string(rOffset) << "(%rbp), %eax" << endl;
  else if (op == "+")
    tempo_ss << "addl -" << to_string(rOffset) << "(%rbp), %eax" << endl;
  else if (op == "-")
    tempo_ss << "subl -" << to_string(rOffset) << "(%rbp), %eax" << endl;


  tempo_ss << "movl %eax, -" << to_string(offset) << "(%rbp)" << endl;

}

void Visitor::writeUnaryOP(int offset, int exprOffset, string op){
  if (op == "-"){
    tempo_ss << "movl -" << to_string(exprOffset) << "(%rbp), %eax" << endl;
    tempo_ss << "negl %eax"<< endl;
    tempo_ss << "movl %eax, -" << to_string(offset) << "(%rbp)" << endl;
  }

}

void Visitor::writeAffectExpr(int lOffset, int rOffset){
  tempo_ss << "movl -" << to_string(rOffset) << "(%rbp), %eax" << endl;
  tempo_ss << "movl %eax, -" << to_string(lOffset) << "(%rbp)" << endl;
}

void Visitor::writeRetStmt(int offset){
  tempo_ss << "movl -" << to_string(offset) << "(%rbp), %eax" <<endl;
  tempo_ss << "popq %rbp" << endl;
  tempo_ss << "ret" << endl;
}