#include <stdio.h>
#include <string.h>

int main() {

    /*
    A simple shopping cart program
    that prints questions to the terminal
    and stores user replies and outputs
    input to the terminal.
    */

    // good habit: declare all variables first
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    // ask the user what they want to buy
    printf("What item would you like to buy? \n");
    fgets(item, sizeof(item), stdin);
    /*
    take into consideration that 
    fgets(item, sizeof(item), stdin);
    adds a new line. to get rid of the new line:
    item[strlen(item) - 1] = '\0';
    don't forget #include <string.h>
    the function contains functions relating to strings

    or what I did here is remove \n from the printf statement
    */

    printf("What is the price for each? \n");
    scanf("%f", &price);

    printf("How many would you like? \n");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s", quantity, item);
    printf("Your total is: %c%.2f\n", currency, total);

}