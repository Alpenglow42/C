//hw 4 chapter 6
/* 8. Write a program that requests two floating-point numbers and prints the value of their
difference divided by their product. Have the program loop through pairs of input values
until the user enters nonnumeric input.
 */

 #include <stdio.h>
 #include <stdlib.h>
 
 int main() {
     float num1, num2;
 
     while (1) {
         printf("Enter the first floating-point number (or non-numeric input to exit): ");
         if (scanf("%f", &num1) != 1) {
             printf("Non-numeric input detected. Exiting...\n");
             break;
         }//end of if
 
         printf("Enter the second floating-point number: ");
         if (scanf("%f", &num2) != 1) {
             printf("Non-numeric input detected. Exiting...\n");
             break;
         } // in of if
 
         float difference = num1 - num2;
         float product = num1 * num2;
 
         if (product != 0) {
             float result = difference / product;
             printf("The result of (%.2f - %.2f) / (%.2f * %.2f) is %.2f\n", num1, num2, num1, num2, result);
         } else {
             printf("Error: Division by zero is undefined.\n");
         }// end of else
     }//end of while
 
     return 0;
 }// end of main
 
