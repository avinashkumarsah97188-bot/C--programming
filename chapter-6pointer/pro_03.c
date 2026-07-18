/*
3. Write a program to change the value
 of a variable to ten times of its current value.

*/


#include <stdio.h>   // call by refrence se hua hai //

void address(int *x)
{
    printf("The address of i is %p\n", (void *)x);
    *x = *x * 10;
}

int main()
{
    int i = 6;

    printf("Before: %d\n", i);
    address(&i);
    printf("After: %d\n", i);

    return 0;
}