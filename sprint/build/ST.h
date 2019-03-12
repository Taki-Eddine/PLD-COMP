#include <unordered_map>
#include "Variable.h"

class ST{
    public:
        ST();
        ~ST(){};
        int getOffset(std::string name);
        int putVariable(std::string name);
        int putDummyVariable();

    private:
        int lastOffset;
        int dummyVariables;
        std::unordered_map<std::string, Variable*> table;
};
