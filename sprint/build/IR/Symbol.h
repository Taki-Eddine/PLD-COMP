#pragma once
#include <string>
#include "../types.h"
class Symbol{

    public:
        Symbol(std::string name, int offset, types type);
        Symbol(std::string name, bool initialized);
        int getOffset();
        void setOffset(int offset);
        types getType();
        bool isInitialized();
        void setInitialized();
    private:
        std::string name;
        types type;
        int offset;
        bool initialized;
};