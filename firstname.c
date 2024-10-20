//hw3 chp 4 
/*2. Write a program that requests your first name and does the following with it:
a. Prints it enclosed in double quotation marks
b. Prints it in a field 20 characters wide, with the whole field in quotes and the name
at the right end of the fieldProgramming Exercises
c. Prints it at the left end of a field 20 characters wide, with the whole field enclosed
in quotes
d. Prints it in a field three characters wider than the name
*/


#include <stdio.h>
#include <string.h>

int main() {

// Declare a character array to store the first name
char firstName [20];


//request user input for first name
printf("What is you first name? ");

//scans string (%s) and place in char array firstname
scanf("%s",firstName);

//a.)Prints it enclosed in double quotation marks
printf(" \"%s\"\n", firstName);

//b.) print the first name in a field 20 characters wide, with quotes and name at rightside
printf(" \"%20s\"\n", firstName);

//c.) Prints it at the left end of a field 20 characters wide, with the whole field enclosed in quotes
 printf(" \"%-20s\"\n", firstName);

//d.) Prints it in a field three characters wider than the name
 printf(" \"%*s\"\n",(int) strlen(firstName) + 3, firstName);

 return 0;


}//end of main
