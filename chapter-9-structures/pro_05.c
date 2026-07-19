/*
5. Write a program with a structure representing a complex number

*/

#include <stdio.h>

struct complex
{
    int Real;
    int Imaginary;
};

int main()
{
    struct complex no;

    no.Real = 6;
    no.Imaginary = 9;

    printf("%d + %di\n", no.Real, no.Imaginary);

    return 0;
}