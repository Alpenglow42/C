//hw9 chp 13
/* Write a program called search.c that takes two command-line arguments. The first is a string;
the second is the name of a file. The program should then search the file, printing all lines
containing the string. Because this task is line oriented rather than character oriented, use
fgets() instead of getc(). Use the standard C library function strnstr() to search each line for the
string. Assume no lines are longer than 255 characters.
If the wrong number of command line arguments are provided by the user, print out the
following:
Usage: search string filename
If the program is unable to open the file, print out the following and exit the program.
Unable to open file. */ 

#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main(int argc, char *argv[]) {
    // Check if the correct number of command-line arguments is provided
    if (argc != 3) {
        printf("Usage: search string filename\n");
        return 1;
    }

    char *searchString = argv[1];
    char *filename = argv[2];

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    char line[MAX_LINE_LENGTH];
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        if (strstr(line, searchString) != NULL) {
            printf("%s", line);
        }
    }

    fclose(file);
    return 0;
}

