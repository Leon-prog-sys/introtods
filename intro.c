#include <stdio.h>

// Collaborator: LEONIDHA MEROLLI
int main() {
    int num1, num2, sum;

    // Prompting user for input
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2); // Missing ;

    // Calculating summary of numbers
    sum = num1 + num2; // Replaced * with +

    // Printing the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum); // Replaced %s with %d

    return 0; // Missing ;
}
