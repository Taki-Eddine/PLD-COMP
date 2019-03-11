#include "Symbol.h"

Symbol::Symbol(std::string name){
    this -> name = name;
}

std::string Symbol::getName(){
    return name;
}

