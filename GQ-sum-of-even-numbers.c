#include <stdio.h>

int main()
{
    int n;

    // Step 1. Prompt user for a positive number
    printf("Enter a positive number: ");
    scanf("%d", &n);

    // Step 2. Error message if n is less than zero
    if (n <= 0)
    {
        printf("Error: Enter a positive number.\n");
        return 1;
    }

    // Sum is initialized to zero
    int sum = 0;
    // For loop using i as the iterator
    // Checking if i has a remainder of zero
    // If yes, sum += i;
    // If no, continue loop until i <= n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    // Printf() the answer to the user
    printf("Your number: %d\n", n);
    printf("Sum of all even numbers between zero and your number: %d\n", sum);
    

    return 0;
}