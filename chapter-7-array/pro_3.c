/*
Write a program to create an array of 10 integers and store multiplication table of 5 in it?

*/




#include <stdio.h>

int main()
{
    int arr[10];
    int n = 5;

    // Store multiplication table in array
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }

    // Print the array
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", n, i + 1, arr[i]);
    }

    return 0;
}