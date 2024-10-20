//Chp 13 hw9
/* 35 points – Save as twofiles.c
Write a program named twofiles.c that takes two command line arguments which are both
filenames. The program should open both files, the program print line 1 of the first file, line 1
of the second file, line 2 of the first file, line 2 of the second file, and so on, until the last line of
the longer file (in terms of lines) is printed. This means once the shorter file runs out of lines to
print, only lines from the longer line are printed.
If the wrong number of command line arguments are provided by the user, print out the
following:
Usage: twofiles filename1 filename2
If the program is unable to open one of the files, print out the following and exit the program.
Unable to open file.  */

#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 256

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s file1 file2\n", argv[0]);
        return 1;
    }

    FILE *file1 = fopen(argv[1], "r");
    FILE *file2 = fopen(argv[2], "r");

    if (file1 == NULL || file2 == NULL) {
        printf("Unable to open file(s).\n");
        return 1;
    }

    char line1[MAX_LINE_LENGTH];
    char line2[MAX_LINE_LENGTH];
    int line_number = 1;

    while (1) {
        if (fgets(line1, MAX_LINE_LENGTH, file1) != NULL) {
            printf("Line %d of file1: %s", line_number, line1);
        }
        if (fgets(line2, MAX_LINE_LENGTH, file2) != NULL) {
            printf("Line %d of file2: %s", line_number, line2);
        }

        // Break if both files reach EOF
        if (feof(file1) && feof(file2)) {
            break;
        }

        line_number++;
    }

    fclose(file1);
    fclose(file2);

    return 0;
}



