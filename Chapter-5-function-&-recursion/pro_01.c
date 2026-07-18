/*
Write a program using function to find average of three numbers.
*/


#include <stdio.h>

int avg(int x, int y, int z)
{
    return (x + y + z) / 3; /*AVG=(all add no / total no) */
}

int main()
{
    int a = 6, b = 7, c = 9;

    printf("Average = %d\n", avg(a, b, c));

    return 0;
}