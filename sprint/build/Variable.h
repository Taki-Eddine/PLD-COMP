#pragma once
#include "Symbol.h"

class Variable : public Symbol{

    public:
        Variable(std::string name, int offset);
        int getOffset();
    private:
        int offset;
};