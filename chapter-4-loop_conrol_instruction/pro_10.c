/*
Write a program to check whether a given number is prime or not using loops.
*/

#include <stdio.h>

int main()
{
    int n = 6;
    int isPrime = 1;

    if (n <= 1)
        isPrime = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}