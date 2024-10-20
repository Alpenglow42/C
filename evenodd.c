//chapter 7
/*  3. Write a program that reads integers until 0 is entered. After input terminates, the
program should report the total number of even integers (excluding the 0) entered, the
average value of the even integers, the total number of odd integers entered, and the
average value of the odd integers.
 */

 #include <stdio.h>
 
 int main() {
     int num, sum_even = 0, sum_odd = 0;
     int count_even = 0, count_odd = 0;
 
     printf("Enter integers (enter 0 to terminate):\n");
 
     while (1) {
         scanf("%d", &num);
         
         if (num == 0)
             break;
         
         if (num % 2 == 0) {
             sum_even += num;
             count_even++;
         } else {
             sum_odd += num;
             count_odd++;
         }
     }
 
     if (count_even > 0) {
         printf("Total number of even integers: %d\n", count_even);
         printf("Average value of even integers: %.2f\n", (float)sum_even / count_even);
     } else {
         printf("No even integers were entered.\n");
     }
 
     if (count_odd > 0) {
         printf("Total number of odd integers: %d\n", count_odd);
         printf("Average value of odd integers: %.2f\n", (float)sum_odd / count_odd);
     } else {
         printf("No odd integers were entered.\n");
     }
 
     return 0;
 }// end of main
 
