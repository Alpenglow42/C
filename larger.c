//hw5 chp 9 problem 5
/* Write and test a function called larger_of() that replaces the contents of two type double
variables with the maximum of the two values. For example, larger_of(&x,&y) would
reset both x and y to the larger of the two.
Test it by writing a main() function which inputs the two double values from the user, one per
line, calls larger_of(), and then prints the resulting x and y values. */

#include <stdio.h>

void larger_of(double *x, double *y) 
{

if (*x > *y) {
	*y = *x;
}
else {
	*x = *y;
}
	
}//end of larger_of

int main () {
	double x, y;

	//user input
	printf("Please enter the first float value. Ie. (0.00): ");
	//scan input
	scanf("%lf", &x);

    //second input
    printf("Please enter the second float value. Ie. (0.00): ");
    //scan input
    scanf("%lf", &y);


    // call larger_of
    larger_of(&x, &y);


    //print output of call .2 make output 2 decimal places
    printf("After calling larger_of(), x = %.2lf and y = %.2lf\n",x, y);

    return 0;
}//end of main
