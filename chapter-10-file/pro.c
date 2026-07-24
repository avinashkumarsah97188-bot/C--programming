/*Write a program to read three intgers frama file*/


#include <stdio.h>

int main()
{
    FILE *fp;
    int a, b, c;

    fp = fopen("number.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fscanf(fp, "%d %d %d", &a, &b, &c);

    fclose(fp);

    printf("First Integer : %d\n", a);
    printf("Second Integer: %d\n", b);
    printf("Third Integer : %d\n", c);

    return 0;
}