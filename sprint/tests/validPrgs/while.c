#include <stdlib.h>
int main(){
    //Calculate GCD(a,b)
    int a = 21, b = 18;
    if (a == 0 && b == 0){
        return 0; // You can remark we are supporting multiple returns.
    }

    while (a != b){
        if (a < b){
            b = b - a;
        }
        else{
            a = a - b;
        }
    }

    return a; // 3
}