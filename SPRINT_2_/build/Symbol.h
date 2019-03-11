#include "types.h"
#include <string>

class Symbol {
    public:
        Symbol(std::string name);
        std::string getName();
    private:
        std::string name;
};