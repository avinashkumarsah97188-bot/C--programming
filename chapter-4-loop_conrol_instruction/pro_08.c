/*Write a program to calculate the 
factorial of a given number using a for loop.
*/

#include <stdio.h>
int main()
{

    int product = 1, n = 4;

    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The product of first %d natural numbers is %d\n", n, product);
    return 0;
}