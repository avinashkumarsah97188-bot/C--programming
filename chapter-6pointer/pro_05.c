/*
5. Write a program using a function
 which calculates the sum and average
  of two numbers. Use pointers and print
   the values of sum and average in main().
*/

#include <stdio.h>

void sum_avg(int a, int b, int *sum, float *avg)
{
*sum = a + b;
*avg = (a + b) / 2.0;
}

int main(){
    int a = 9, b = 7;
  int sum;
float avg;

sum_avg(a, b, &sum , &avg);  // sum_avg function ko call kiya aur sum aur avg ke addresses pass kiye //



    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
