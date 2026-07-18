/*
8. Repeat problem 7 for a custom input given by the user.

*/

#include <stdio.h>

int main()
{
    int arr[3][10];
    int num[3];

    printf("Enter 3 numbers for multiplication tables: ");
    scanf("%d %d %d", &num[0], &num[1], &num[2]);


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

        printf("\n\n");
    }

    return 0;
}