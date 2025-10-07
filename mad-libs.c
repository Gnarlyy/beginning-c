#include <stdio.h>
#include <string.h>

int main() {

    /*
    mad libs games 
    variables are of char data value stored in a array with an empty string.
    clears the new line from fgets();
    adjective1[strlen(adjective1) - 1] = '\0';
    storing user input with fgets and printing
    the value later with printf(); statements
    */

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    // clear the new line from fgets();
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("On vacation I stayed at a %s hostel.\n", adjective1);
    printf("At the bar sat %s.\n", noun);
    printf("Preaching with mind and %s!\n", adjective2);
    printf("Drink in hand while %s.\n", verb);
    printf("I was %s.\n", adjective3);


    // testing variables:
    // printf("%s %s %s %s %s\n", adjective1, noun, adjective2, verb, adjective3);
    // testing variables:
    // printf("%s\n", noun);
    // printf("%s\n", verb);
    // printf("%s\n", adjective1);
    // printf("%s\n", adjective2);
    // printf("%s\n", adjective3);

    return 0;
}