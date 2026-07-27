/*
4. Take name and salary of two employees as input from the user and write them to a text file in the following format:

i. Name1, 3300

ii. Name2, 7700

*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name1[50], name2[50];
    int salary1, salary2;

    fp = fopen("employee.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter name of employee 1: ");
    scanf("%s", name1);
    printf("Enter salary of employee 1: ");
    scanf("%d", &salary1);

    printf("Enter name of employee 2: ");
    scanf("%s", name2);
    printf("Enter salary of employee 2: ");
    scanf("%d", &salary2);

    fprintf(fp, "%s, %d\n", name1, salary1);
    fprintf(fp, "%s, %d\n", name2, salary2);

    fclose(fp);

    printf("Data written successfully to employee.txt\n");

    return 0;
}