#include "ST.h"
#include "Variable.h"

// ST(): lastOffset(0);

// returns the Symbol if exists in the table, otherwise nullptr
Symbol * ST::getSymbol(std::string name){
    if (table.find(name)!=table.end())
      return table.find(name)->second;
    return nullptr;
}

/*
    Add a variable symbol to the ST, make sure to manage offsets in terms of the given type
    Returns: the offset of the variable in the table
*/
int ST::putVariable(std::string name, types type, bool initialized){
    // to change size after (8 for now)
    int size = 8;
    lastOffset += size;
    Variable * var = new Variable(name, type, initialized, size, lastOffset);
    // here is the error, bcz of the pointer shit fck bitch
    table.insert(std::make_pair<std::string,Symbol*>(name, var));
    return lastOffset;
}
