//hw3 chp 4 
/*4. Write a program that requests your height in inches and your name, and then displays
the information in the following form:
Dabney, you are 6.208 feet tall
Use type float, and use / for division. If you prefer, request the height in centimeters
and display it in meters.*/


#include <stdio.h>
#include <string.h>

int main() {

// Declare a character array to store the first name
char firstName [20];

//decalre variable to store heigh in inches and feet
float height_inches, height_feet;



//request user input for first name
printf("What is you first name? ");
scanf("%s", firstName);

//request user height in inches
printf("What is your height in inches? ");

//scans float and store in varaible height_inches (%lf is for double in scan f)need & for variable address
scanf("%f", &height_inches);

//convert to height in feet
height_feet = (height_inches / 12.0);

//output name and height in feet (.3 ensures 3 decimal places)
printf("%s, your are %.3f feet tall \n", firstName, height_feet);

return 0;

}//end of main
