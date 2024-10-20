// Cs 3500 Chp 2 problem 6
/* 6. Write a program that creates an integer variable called toes. Have the program set toes
to 10. Also have the program calculate what twice toes is and what toes squared is. The
program should print all three values, identifying them.*/

#include <stdio.h>

//note need to declare function first or put main at end.
void setToesAndPrint(int *toes);
void multiplyAndPrint(int value, int factor);
void squareAndPrint(int toes);


int main()
{

//declare variable but don't set it to a value yet
int toes;

//call function that set and prints toes as int 10
setToesAndPrint(&toes);


//call function that multiply's toes by 2
multiplyAndPrint( toes, 2);

//
//call function that multiply's toes by 2
squareAndPrint(toes);

return 0;
	
}//end of main

//function to set toes to 10 and print NOTE: * in toes is pointer to memory value of toes
void setToesAndPrint(int *toes) {
	*toes = 10;

	printf("Toes is set to %d\n",*toes);
	
}//end of set and print

//function to multiply toes set factor to 2 in the call in main
//to test print toes value
void multiplyAndPrint(int value, int factor) {
    int result = factor * value;
    printf("Toes mulptied by %d is: %d\n", factor, result);
}


// Function to calculate and print toes squared
void squareAndPrint(int toes) {
    int squareToes = toes * toes;
    printf("Toes squared is: %d\n", squareToes);
}//end of square and print
