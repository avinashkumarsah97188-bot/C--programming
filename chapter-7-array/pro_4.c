/*4. Repeat problem 3 for a general input provided by the user using scanf.
*/

#include <stdio.h>

int main()
{
    int arr[10];
    int n ;

    printf("enter the no: ");
    scanf("%d", &n);


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