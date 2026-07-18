/*Write a function to convert Celsius temperature into Fahrenheit.

*/

#include <stdio.h>

float function(float x)
{
    return (9.0 / 5.0) * x + 32; /*FEHRENHEIR =((9/5)*c+32)*/
}

int main()
{
    int celsius = 37;

    printf(" %f\n", function(celsius));

    return 0;
}