/*/*
Write a program to check whether a given number is prime or not using loops.
*/

#include <stdio.h>

int main()
{
    int n = 4;
    int isPrime = 1;
    int i = 2;

    if (n <= 1)
        isPrime = 0;

    while (i < n)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
        i++;
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}

/*

 do while loop version of the above program

 #include <stdio.h>

int main()
{
    int n = 4;
    int isPrime = 1;
    int i = 2;

    if (n <= 1)
        isPrime = 0;

    do
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
        i++;
    } while (i < n);

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
    
*/