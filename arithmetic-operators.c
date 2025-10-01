#include <stdio.h>

int main() {

    /*
    arithmetic operators:
    = + - * / % ++ --
    */

    int x = 2;
    int y = 7;
    int z = 0; 
    // z = 0 because it holds our value or x and y
    // we can't divide by int, use float variables
    float a = 10;
    float b = 2;
    float d = 0; // division testing

    // z = x + y;
    // z = x - y;
    // z = x * y;
    // d = a / b; // division requires floats
    d = y % x; // results in the remainder
    
    printf("%d\n", z);
    printf("%f\n", d);

    // increments
    // increment and decrement by 1, works with loops:
    int n = 10;
    
    n++;
    printf("%d\n", n);
    n--;
    printf("%d\n", n);

    // augmented assignment operators when re-assigning the same variables:
    n += 2;
    printf("%d\n", n);
    n -= 2;
    printf("%d\n", n);
    n *= 2;
    printf("%d\n", n);
    n /= 2;
    printf("%d\n", n);


    return 0;
}