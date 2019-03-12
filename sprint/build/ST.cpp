#include "ST.h"

Symbol * ST::getSymbol(std::string name){
    return table[name]; 
    // Returns null if the symbol does not exist i.e. never been declared before ?
}

/*
    Add a variable symbol to the ST, make sure to manage offsets in terms of the given type
    Returns: the offset of the variable in the table
*/
int ST::putVariable(std::string name, types type, bool initialized){
    //TODO
    return -1;
}