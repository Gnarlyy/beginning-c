#include <stdio.h>
#include <math.h>
// <math.h> library lets us use math functions like sqrt

int main() {

    float x = 3;

    // square root
    x = sqrt(x);
    // power of, in this case 4
    x = pow(x, 4);
    // round to a flat number, 3.14 = 3.00
    x = round(x);
    // round to the next highest number
    x = ceil(x);
    // round to the next lowest number
    x = floor(x);
    // absolute value
    x = abs(x);
    // logarithms
    x = log(x);
    // trigonometry
    x = sin(x);
    x = cosin(x);
    x = tan(x);

    printf("%f", x);

    return 0;
}