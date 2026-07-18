/*
Write a recursive function to calculate the sum of first 'n' natural numbers.
*/

#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;

    return sum(n - 1) + n;
}

int main()
{
    int a = 8;

    printf("Sum of first %d natural numbers = %d\n", a, sum(a));

    return 0;
}