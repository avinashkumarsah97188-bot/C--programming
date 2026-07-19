
/*
6. Create an array of 5 complex numbers created in Problem 5  
and display them with the help of a display function. 
 The values must be taken as an input from the user.

*/

#include <stdio.h>

struct complex
{
    int Real;
    int Imaginary;
};

void display(struct complex c)
{
    printf("%d + %di\n", c.Real, c.Imaginary);
}

int main()
{
    struct complex num[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Real and Imaginary part of complex number %d: ", i + 1);
        scanf("%d %d", &num[i].Real, &num[i].Imaginary);
    }

    
    printf("\nComplex Numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        display(num[i]);
    }

    return 0;
}