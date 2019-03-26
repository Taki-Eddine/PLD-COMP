#include <stdlib.h>
int main(){
    int x,y,z;
    x = 6; 
    y = 2;
    
    if (y == 2 * x || x == 2 * y){
        z = 2;
    }
    else if (y == 3 * x || x == 3 * y)
    {
        z = 3;
    }
    else{
        if (x <= y) {
            z = 0;
        }
        else{
            z = -1;
        }
        
    }
    
    return z;
}