/*
/*Write a program to calculate the 
factorial of a given number using a while loop.
*/



#include <stdio.h>
int main()
{

    int product = 1, n = 8,i =1;

    while (i <= n)
    {
        product *= i;
        i++;
    }
    printf("The product of first %d natural numbers is %d\n", n, product);
    return 0;
}