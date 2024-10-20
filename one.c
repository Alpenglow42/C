//hw 2 CS 3500 chp 2 promblem 8
/*8.) In C, one function can call another. Write a program that calls a function named one_three(). This function should display the word one on one line, call a second function
named two(), and then display the word three on one line. The function two() should
display the word two on one line. The main() function should display the phrase
starting now: before calling one_three() and display done! after calling it. Thus, the
output should look like the following:
starting now:
one
two
three
done!*/

#include <stdio.h>



// Function prototypes
void two();
void one_three();

int main() {
    printf("starting now:\n");

    // Call function one_three
    one_three();

    printf("done!\n");

    return 0;
}

// Function to display the word "one" on one line, call two(), and then display "three" on one line
void one_three() {
    printf("one\n");
    two();
    printf("three\n");
}

// Function to display the word "two" on one line
void two() {
    printf("two\n");
}
