/*
Write a program to check whether a given character is present in a string or not.
*/

#include <stdio.h>

int main()
{
    char st[] = "aviansh";
    char ch = 'a';
    int found = 0;

    for (int i = 0; st[i] != '\0'; i++)
    {
        if (st[i] == ch)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Character is present");
    else
        printf("Character is not present");

    return 0;
}