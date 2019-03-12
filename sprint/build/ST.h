#include <map>
#include "Symbol.h"
class ST{
    public:
        ST();
        ~ST(){};
        Symbol* getSymbol(std::string name);
        int putVariable(std::string name, types type, bool initialized);

    private:
        std::map<std::string, Symbol*> table;
};