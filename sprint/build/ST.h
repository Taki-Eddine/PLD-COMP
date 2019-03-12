#include <unordered_map>
#include "Symbol.h"

class ST{
    public:
        ST();
        ~ST(){};
        Symbol* getSymbol(std::string name);
        int putVariable(std::string name, types type, bool initialized);

    private:
        int lastOffset;
        std::unordered_map<std::string, Symbol*> table;
};
