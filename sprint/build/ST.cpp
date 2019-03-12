#include "ST.h"
#include "Variable.h"

ST::ST(){
  lastOffset = 0;
  dummyVariables = 0;
}

// returns the Symbol if exists in the table, otherwise nullptr
int ST::getOffset(std::string name){
    if (table.find(name) != table.end()){
      return table[name] -> getOffset();
    }
    else{
      return -1;
    }
}

/*
    Add a variable symbol to the ST, make sure to manage offsets in terms of the given type
    Returns: the offset of the variable in the table
*/
int ST::putVariable(std::string name){
    int size = 8;
    lastOffset += size;
    Variable * variable = new Variable(name, lastOffset);
    // here is the error, bcz of the pointer shit fck bitch
    table.insert(std::make_pair(name, variable));
    return lastOffset;
}

int ST::putDummyVariable(){
    int size = 8;
    lastOffset += size;
    dummyVariables += size;
    return lastOffset;
}
