//chp 12
/* Write a function called times_called() that returns the number of times it has been called
(Hint: you need to use a Block scope Static variable).
Test it by writing a main function that calls times_called() in a loop 10 times, printing the
value returned from times_called() each time through the loop. */


#include <stdio.h>

int times_called() {
    // Define a static variable within the function
    static int counter = 0;
    
    // Increment the counter each time the function is called
    counter++;
    
    // Return the current value of the counter
    return counter;
}

int main() {
    for (int i = 0; i < 10; i++) {
        // Call times_called() and print the value returned
        printf("%d\n", times_called());
    }
    return 0;
}
