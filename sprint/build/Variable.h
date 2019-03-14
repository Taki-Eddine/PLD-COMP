#pragma once
#include <string>
class Variable{

    public:
        Variable(std::string name, int offset, bool initialized);
        int getOffset();
        bool isInitialized();
        void setInitialized();
    private:
        std::string name;
        bool initialized;
        int offset;
};