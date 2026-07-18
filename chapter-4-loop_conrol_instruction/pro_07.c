/*
7. Write a program to calculate the sum of the numbers occurring in the multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/

#include <stdio.h>
int main()
{
    int sum = 0;
    int n = 8;

    for (int i = 1; i <= 10; i++)
    {
  sum += n * i;
    }
    printf("The sum of numbers in the multiplication table of %d is %d\n",n,sum);
   
    return 0;
}

