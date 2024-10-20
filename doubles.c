//hw5 chp 9 problem 6
/* Write and test a function called double_sort() that takes the addresses of three double
variables as arguments and that moves the value of the smallest variable into the first variable,
the middle value to the second variable, and the largest value into the third variable.
Test it by writing a main() function which inputs the three double values from the user, one
per line, calls double_sort(), and then prints the three sorted double values. */

#include <stdio.h>

void double_sort(double *a, double *b, double *c) {
    double temp;
    // Sort the values pointed to by a, b, and c
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {
    double x, y, z;
    
    // Input three double values from the user
    printf("Enter three double values, one per line:\n");
    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);
    
    // Call double_sort() to sort the values
    double_sort(&x, &y, &z);
    
    // Print the sorted values
    printf("Sorted values: %.2lf, %.2lf, %.2lf\n", x, y, z);
    
    return 0;
}
