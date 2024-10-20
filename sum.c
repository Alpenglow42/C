//use macro
/* SUMSQ(x,y)
Which finds the sum of the squares of the 2 parameters, i.e. x*x+y*y
In the main function of the program, test the Macro with the following invocations, printing out
the value calculated by the macro for each one:
SUMSQ (4,6)
SUMSQ (5+2, 1+8)
Make sure your macro invocation shows the results you expect, and add additional test cases as
you see fit. (The above should give answers of 52 and 130).
*/

#include <stdio.h>

#define SUMSQ(x,y) ((x)*(x) + (y)*(y))

int main() {
    // Test cases
    int result1 = SUMSQ(4, 6);
    int result2 = SUMSQ(5+2, 1+8);

    // Output results
    printf("SUMSQ(4, 6) = %d\n", result1); // Expecting 4*4 + 6*6 = 52
    printf("SUMSQ(5+2, 1+8) = %d\n", result2); // Expecting (5+2)*(5+2) + (1+8)*(1+8) = 130

    return 0;
}
