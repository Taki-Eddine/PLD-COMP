#include "Symbol.h"

Symbol::Symbol(std::string name, int offset, types type)
{
    this -> type = type;
    this -> offset = offset;
    this -> name = name;
};

Symbol::Symbol(std::string name, bool initialized){
    this -> name = name;
    this -> initialized = initialized;
}

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

void Symbol::setInitialized(){
    initialized = true;
}