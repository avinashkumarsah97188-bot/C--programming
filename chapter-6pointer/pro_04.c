/*
4. Write a function and pass the value by reference.

*/



#include <stdio.h>

void changeValue(int *x)
{
    *x = *x * 10;
}

int main()
{
    int a = 10;

    printf("Before function call: %d\n", a);

    changeValue(&a);

    printf("After function call: %d\n", a);

    return 0;
}

