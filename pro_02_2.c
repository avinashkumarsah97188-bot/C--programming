
/* program to calculate the volume of a cylinder given its radius and height.*/

#include <stdio.h>

    int main()
{

    int radius = 5;
    int height = 10;
    float pi = 3.14;

    float volume = pi * radius * radius * height;

    printf("The volume of cylinder is %0.2f\n", (volume));

    return 0;
}