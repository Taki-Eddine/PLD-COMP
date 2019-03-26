#include <stdlib.h>
int main(){
    //Calculate factorial(N);
    
    int N = 5;
    if (N == 0 || N == 1){
        return 1;
    }

    int n = 1, result = 1;
    
    do{
        result = result * n;
        n = n + 1;
    }while(n <= N);
    
    return result;
}