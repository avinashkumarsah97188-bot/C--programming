/*
Write a program using recursion to calculate nth element of Fibonacci series.
*/

#include <stdio.h>

int fibonacci(int n)  /* Fibonacci  Sequence:
0, 1, 1, 2, 3, 5, 8, 13, 21, ... */
{  
    if(n == 0 ) 
    return 0;         /* formula =  (Fn​=(Fn−1)​+(Fn−2)​)  */
    if(n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int a = 6;

    printf("fibonacci %d = %d\n", a, fibonacci(a));
    return 0;
}