#include <stdio.h>
int main(){
    /*
        Calculate delta for a quadratic equation
    */
    int delta;
    int a = 1, b = -5, c = 4; // i.e. x^2 -5*x + 4 = 0
    delta = b * b - 4 * a * c;

    return delta; // 9
}