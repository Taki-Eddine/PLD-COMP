#pragma once
#include <string>
class Symbol{

    public:
        Symbol(std::string name, int offset, bool initialized);
        int getOffset();
        bool isInitialized();
        void setInitialized();
    private:
        std::string name;
        bool initialized;
        int offset;
};