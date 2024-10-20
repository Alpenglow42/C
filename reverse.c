//Hw7 chp 11
/* Write a program named reverse.c that echoes it’s command-line arguments in reverse order.
Running the program by typing
./reverse void and null
Should produce the following output:
null and void  */

#include <stdio.h>

int main(int argc, char *argv[]) {
    // Start from the end of the argument list and print each argument in reverse order
    for (int i = argc - 1; i > 0; i--) {
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}
// run /reverse void and null
