#include <stdio.h>
#include <string.h>

int main() {

    /*
    be careful using empty varaiables
    if you access them before defining them
    you will run into undefined behaviour
    good practice is assigning them to zero
    or an equivalent value
    */
    
    int age = 0;
    float gpa = 0.0f; // f hints that this number is a float
    char grade = '\0'; // '\0 is a null terminator, simple clearing of the grade character
    char name[30] = ""; // set to an empty string ""

    // add a prompt asking the users age
    printf("Enter your age: ");
    // scanf(); gets user input
    // &age means at the enter value at the address of gpa
    scanf("%d", &age); 
    
    // prompt user to enter gpa
    printf("Enter your gpa: ");
    // enter value at the address of gpa 
    scanf("%f", &gpa);

    // prompt user to enter letter grade
    printf("Enter your letter grade: ");
    scanf(" %c", &grade);
    
    // prompt user to enter there name
    getchar();
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // scanf() doesn't read white space, let's use fgets();
    // sizeof() uses just the memory needed for the input
    /*
    fgets(); adds a new line by default
    to fix this #include <string.h>
    the '\0' adds a null terminator
    we then add a new line to printf()
    */
    name[strlen(name) - 1] = '\0';

    printf("\nYour name is %s.\n", name);
    printf("Your age is %d years old.\n", age);
    printf("Your gpa is %.2f.\n", gpa);
    printf("Your letter grade is %c.\n", grade);

    return 0;
}