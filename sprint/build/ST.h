#include <unordered_map>
#include "Variable.h"

class ST{
    public:
        ST();
        ~ST(){};
        Variable* getVariable(std::string name);
        bool isInitialized(std::string name);
        int allocateVariable(std::string name, bool initialized);
        int allocateDummy();

    private:
        int lastOffset;
        int dummyVariables;
        std::unordered_map<std::string, Variable*> table;
};
