#pragma once
#include <string>
#include "../types.h"
class Symbol{

    public:
        Symbol(std::string name, int offset, types type);
        Symbol(std::string name, int offset, bool initialized);
        int getOffset();
        void setOffset(int offset);
        types getType();
        bool isInitialized();
    private:
        std::string name;
        types type;
        int offset;
        bool initialized;
};
