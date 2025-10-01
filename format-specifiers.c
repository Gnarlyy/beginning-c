#include <stdio.h>

int main() {

    /*
    Format specefiers begin with % symbol
    followed by a char specifying the data type
    and/or modifiers for width, precision, and flags
    they control how data is displayed or interpreted
    */
    
    // decalare variables
    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Dev Pat";

    printf("%d\n", age);
    // %d represents a decimal number
    printf("%f\n", price); 
    // %f represents floating point numbers
    printf("%lf\n", pi);
    // %lf (long float) is used for user input such with scanf()
    // good practice to distinguish doubles and floats
    printf("%c\n", currency);
    // a single character
    printf("%s\n", name);
    // represents a string of characters

    /*
    working with the width of number/characters
    */
    // declare variables
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
 
    // by adding a number before d, %3d
    // will add spacing to numbers not 3 digits
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    /*
    output without width:
    1
    10
    100
    */
    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);
    /*
    output with width control:
      1
     10
    100
    %-3 will left justify characters
    */
    
    // precision numbers
    float price1 = 19.99;
    float price2 = 9.99;
    float price3 = 59.99;
    
    // default is floats display 6 digits after the decimal
    // use %.2f to display only 2 digits after the decimal
    // i display how we can use different digits after the
    // decimal but it's best to use just two for currency %.2f 
    printf("%+7.2f\n", price1);
    printf("%+7.3f\n", price2);
    printf("%+7.5f\n", price3);

    return 0;
}