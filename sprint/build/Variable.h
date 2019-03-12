#include "Symbol.h"

class Variable : public Symbol{

    public:
        Variable(std::string name, types type, bool initialized, int size, int offset);
        bool isInitialized();
        void setInitialized();
        int getSize();
        int getOffset();
    private:
        types type;
        bool initialized;
        int size;
        int offset;
};