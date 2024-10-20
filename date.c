//hw7 chap 11
/* 25 points – Save as date.c
Writ a program named date.c that accepts a date from the user in the form mm/dd/yyyy and
then displays it in the form month dd, yyyy, where month is the name of the month. Here is a
sample run of the program:
Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date February 17, 2011
Hints: Store the month names in an array that contains pointers to string.
You can use memchr() to search for the ‘/’ characters that separate the numbers, and
then use atoi() to do the conversions. */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Array of month names
const char *months[] = {"January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December"};

int main() {
    char date[12]; // Assuming maximum date length (mm/dd/yyyy) is 10 characters
    int month, day, year;

    // Prompt user for input
    printf("Enter a date (mm/dd/yyyy): ");
    fgets(date, sizeof(date), stdin);

    // Parse input date
    char *token = strtok(date, "/");
    month = atoi(token);
    token = strtok(NULL, "/");
    day = atoi(token);
    token = strtok(NULL, "/");
    year = atoi(token);

    // Display formatted date
    printf("You entered the date %s %d, %d\n", months[month - 1], day, year);

    return 0;
}
