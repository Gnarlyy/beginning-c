#include <stdio.h>
#include <stdbool.h>

int main() {

    /*
    A variable is a reusable container for a value.
    Variables behave as the value it contains.
    */

    // int holds integers; whole numbers
    // typically 4 bytes in modern systems
    // examples:
    int age = 30;
    int year = 2025;
    int month = 4;

    // %d is a special character to display whole numbers
    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("The month is %d\n", month);

    // float holds numbers with decimals
    // examples:
    float gpa = 2.5;
    float price = 9.99;
    float temp = 55.3;

    // %f is a special character to display floating point numbers
    // %.2f the .2 adds only two numbers after the decimal
    printf("Your gpa is %.2f\n", gpa);
    printf("The price of rice is $%.2f\n", price);
    printf("The temperature is %.2f°F\n", temp);

    // double store 15-16 digits after the decimal
    // typically 8 bytes
    // used for high precision decimal numbers
    double pi = 3.14159265358979;

    // %lf stands for long float
    printf("The value of pi is %lf\n", pi);

    // char represents single characters such as words, letters, or symbols
    // 1 bytes
    char grade = 'A';
    char symbol = '$';

    printf("Your grade is %c\n", grade);
    printf("Symbols on display %c\n", symbol);

    // to display more than one char we must use an array []
    // variable sizes
    // printf uses %s to display a string
    char name[] = "Broman";

    printf("Hello %s\n", name);

    // booleans are true 1 or false 0
    // commonly used with if statements
    // 1 bytes (true 1 OR false 0) requires #include <stdbool.h>
    // booleans need the header file #include <stdbool.h>
    bool isOnline = true;

    printf("%d\n", isOnline);


    return 0;
}
