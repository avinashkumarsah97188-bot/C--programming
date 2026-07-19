/*
Write your own version of strlen() function from <string.h>
*/

#include <stdio.h>

int strlength(char st[])
{
    int count = 0;

    for (int i = 0; st[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{
    char st[20];

    printf("Enter a string: ");
    scanf("%s", st);

    int count = strlength(st);

    printf("Length of string = %d\n", count);

    return 0;
}