#pragma once
#include <string>
#include "../types.h"
class Symbol{

    public:
        Symbol(std::string name, int offset, types type);
        int getOffset();
        void setOffset(int offset);
        types getType();
    private:
        std::string name;
        types type;
        int offset;
};