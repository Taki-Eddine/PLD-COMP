#include "ST.h"
#include "Variable.h"

ST::ST(){
  lastOffset = 0;
  dummyVariables = 0;
}

// returns the Symbol if exists in the table, otherwise nullptr
Variable* ST::getVariable(std::string name){
    if (table.find(name) != table.end()){
      return table[name];
    }
    else{
      return nullptr;
    }
}
// Return true if the corresponding variable was initialized 
bool ST::isInitialized(std::string name){
  return table[name] ->isInitialized();
}

/*
    Add a variable symbol to the ST, make sure to manage offsets in terms of the given type
    Returns: the offset of the variable in the table
*/
int ST::allocateVariable(std::string name, bool initialized){
    int size = 8;
    lastOffset += size;
    Variable * variable = new Variable(name, lastOffset, initialized);
    // here is the error, bcz of the pointer shit fck bitch
    table.insert(std::make_pair(name, variable));
    return lastOffset;
}

int ST::allocateDummy(){
    int size = 8;
    lastOffset += size;
    dummyVariables += size;
    return lastOffset;
}
