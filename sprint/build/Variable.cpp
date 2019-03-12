#include "Variable.h"
Variable::Variable(std::string name, int offset)
: Symbol(name)
{
    this -> offset = offset;
};

int Variable::getOffset(){
    return offset;
};