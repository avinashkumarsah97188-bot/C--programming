/*
7. Write problem 5's structure using 'typedef' keywords.
*/

#include <stdio.h>

typedef struct complex
{
    int Real;
    int Imaginary;
} sc;

int main()
{
    sc no;

    no.Real = 6;
    no.Imaginary = 9;

    printf("%d + %di\n", no.Real, no.Imaginary);

    return 0;
}