#include "Symbol.h"

Symbol::Symbol(std::string name, int offset, types type)
{
    this -> type = type;
    this -> offset = offset;
    this -> name = name;
};

Symbol::Symbol(std::string name, int offset, bool initialized)
{
    this -> initialized = initialized;
    this -> offset = offset;
    this -> name = name;
};

int Symbol::getOffset(){
    return offset;
};

types Symbol::getType(){
    return type;
}

void Symbol::setOffset(int offset){
    this -> offset = offset;
}

bool Symbol::isInitialized(){
  return initialized;
}
