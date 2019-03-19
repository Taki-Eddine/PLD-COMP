#include "Symbol.h"

Symbol::Symbol(std::string name, int offset, bool initialized)
{
    this -> initialized = initialized;
    this -> offset = offset;
    this -> name = name;
};

int Symbol::getOffset(){
    return offset;
};

bool Symbol::isInitialized(){
    return initialized;
}

void Symbol::setInitialized(){
    initialized = true;
}