/*
Write a function slice() to slice a string, It should change the original string such
that it is now the sliced string. Take 'x' and 'n' as the start and ending position for slice.
*/

#include <stdio.h>

void slice(char st[], int x, int y)
{
    int i = 0;

    while (x <= y)
    {
        st[i] = st[x];
        i++;
        x++;
    }

    st[i] = '\0';
}

int main()
{
    char st[] = "avinash";
    int m = 2;
    int n = 6;

    slice(st, m, n);

    printf("Sliced string: %s\n", st);

    return 0;
}