#include "Variable.h"
Variable::Variable(std::string name, int offset, bool initialized)
{
    this -> initialized = initialized;
    this -> offset = offset;
    this -> name = name;
};

int Variable::getOffset(){
    return offset;
};

bool Variable::isInitialized(){
    return initialized;
}

void Variable::setInitialized(){
    initialized = true;
}