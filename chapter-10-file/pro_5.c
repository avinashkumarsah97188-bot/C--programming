/*
5. Write a program to modify a
 file containing an integer to double its value
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int num;

    // Open file in read mode
    fp = fopen("numberss.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read integer from file
    fscanf(fp, "%d", &num);
    fclose(fp);

    // Double the value
    num = num * 2;

    // Open file in write mode
    fp = fopen("numberss.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Write updated value to file
    fprintf(fp, "%d", num);
    fclose(fp);

    printf("Updated value: %d\n", num);

    return 0;
}