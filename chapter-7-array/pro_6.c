/*
6. Write a program containing functions Which counts the number of positiv integers in an array.

*/



#include <stdio.h>
void countpositive(int arr[], int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    printf("Number of positive integers: %d\n", count);
}

int main()
{
    int arr[] = {5, -2, 0, 8, -9, 12, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    countpositive(arr, size);

    return 0;
}