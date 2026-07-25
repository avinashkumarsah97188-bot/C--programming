/*
Write a program to generate multiplication table
of given number in text format.Make sure that the file is readable 
and well formatted.  
*/


#include <stdio.h>
int main()
{
   int num, i;
FILE *fp;

printf("Enter a number: ");
scanf("%d", &num);

    fp = fopen("table.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

 fprintf(fp, "Multiplication Table of %d\n", num);
fprintf(fp, "-------------------------\n");

for (i = 1; i <= 10; i++)
{
     fprintf(fp, "%d x %d = %d\n", num, i, num * i);
}
fclose(fp);

    printf("Multiplication table has been written to table.txt\n");

    return 0;
}