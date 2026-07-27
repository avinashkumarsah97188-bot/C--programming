/*
3. Write a program to read a text file
 character by character and write its content twice in separate file.
*/

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int ch;   // Better than char

    fp1 = fopen("avi.txt", "r");
    fp2 = fopen("avi2.txt", "a");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully with each character written twice.\n");

    return 0;
}