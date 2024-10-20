//hw 2 CS 3500 chp 2 promblem 3
/* 3.) Write a program that converts your age in years to days and displays both values. At this
point, don’t worry about fractional years and leap years.*/

//test output with calculator or using multiples of 10 for input

#include<stdio.h>

int main()
{

int age_years;
int age_days;
int day_in_years;

//ask user for input
printf("What is your age? ");

//scan user input
scanf("%d", &age_years);

//caclulate days based on 365 days in a year.
age_days = age_years * 365;

//display result 
printf("You are %d days old!\n", age_days);

return 0;


}//end of main
