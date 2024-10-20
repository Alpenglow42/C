//hw5 chp 9 problem 5
/* Write and test a function with the following prototype:
void pay_amount(int dollars, int *twenties, int *tens,
int *fives, int *ones);
The function determines the smallest number of $20, $10, $5, and $1 bills necessary to pay the
amount represented by the dollars parameter. The twenties parameter points to a
variable in which the function will store the number of $20 bills required. The tens, fives,
and ones parameters are similar.  */

#include <stdio.h>

// Prototype for function
void pay_amount(int dollars, int *twenties, int *tens,
                int *fives, int *ones);

int main() {
    int amt;
    int twenties = 0, tens = 0, fives = 0, ones = 0;

    printf("Enter the dollar amount: ");
    scanf("%d", &amt);

    // Call pay_amount
    pay_amount(amt, &twenties, &tens, &fives, &ones);

    // Output the result
    printf("Twenties: %d\n", twenties);
    printf("Tens: %d\n", tens);
    printf("Fives: %d\n", fives);
    printf("Ones: %d\n", ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens,
                int *fives, int *ones) {
    *twenties = dollars / 20; // Determine number of twenties
    dollars %= 20; // Update dollars with the remainder

    *tens = dollars / 10; // Determine number of tens
    dollars %= 10; // Update dollars with the remainder

    *fives = dollars / 5; // Determine number of fives
    *ones = dollars % 5; // The remaining dollars are ones
}
