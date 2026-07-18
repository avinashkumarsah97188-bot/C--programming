/*
7. Create an array of size 3 x 10 containing multiplication tables of the numbers 5,7. 9 respectively.
*/
#include <stdio.h>

int main()
{
    int arr[3][10];
    int num[] = {5, 7, 9};

    // Store multiplication tables
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = num[i] * (j + 1);
        }
    }

    // Print multiplication tables
    for (int i = 0; i < 3; i++)
    {
        printf("Table of %d:\n", num[i]);

        for (int j = 0; j < 10; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}