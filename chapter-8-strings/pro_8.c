/*
Write a program to count the occurrence of a given character in a string.
*/


#include <stdio.h>

int main()
{
    char st[] = "aviansh";
    char ch = 'a';
    int count = 0;

    for (int i = 0; st[i] != '\0'; i++)
    {
        if (st[i] == ch)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}