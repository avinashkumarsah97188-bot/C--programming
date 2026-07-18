/*
3. Write a function to calculate force 
 attraction on a body of mass 'm' exerted by earth. Consider g = 9.8m/s².
*/



#include <stdio.h>

float force(float m, float g)
{
    return m * g;   /*FORMUAL (F=mg)*/
}

int main()
{
    float m = 10;
    float g = 9.8;

    printf("Force = %.2f N\n", force(m, g));

    return 0;
}