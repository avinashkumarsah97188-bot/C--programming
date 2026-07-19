/*
5. Write your own version of strcpy() function from <string.h>
*/

#include <stdio.h>

void copy(char st[], char st2[])
{
    int i;

    for (i = 0; st2[i] != '\0'; i++)
    {
        st[i] = st2[i];
    }

    st[i] = '\0';
}

int main()
{
    char st[20];
    char st2[] = "avinash";

    copy(st, st2);

    printf("Copied string = %s\n", st);

    return 0;
}