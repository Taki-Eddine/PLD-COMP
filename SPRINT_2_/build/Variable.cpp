#include "Variable.h"
Variable::Variable(std::string name, types type, bool initialized, int size, int offset)
: Symbol(name)
{
    this -> type = type;
    this -> initialized = initialized;
    this -> size = size;
    this -> offset = offset;
};

bool Variable::isInitialized(){
    return initialized;
};

void Variable::setInitialized(){
    initialized = true;
};

int Variable::getSize(){
    return size;
};

int Variable::getOffset(){
    return offset;
};