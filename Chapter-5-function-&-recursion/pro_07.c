/*
7. Write a program using function to print the following pattern (first n lines)
*
***
*****
*/  


#include <stdio.h>
void pattern(int n)  //call by value
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * i - 1); j++)     // here is odd no order pattern so we use (2*i-1)   //
        {
            printf("*");
        }
 printf("\n");
    }
}

int main()
{
    int n = 3;
    pattern(n);
    return 0;
} 
