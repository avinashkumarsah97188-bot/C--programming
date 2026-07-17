/* Q1. Write a C program to calculate area of a rectangle: a. Using hard coded inputs.

b. Using inputs supplied by the user.*/

#include <stdio.h>

int main()
{

    int length, breadth;
 

    printf("enter the lenght of rectangle\n");
    scanf("%d", &length);

    printf("enter the breadth of rectangle\n");
    scanf("%d", &breadth);

       int sum = length * breadth; 
       
    printf("  the area of rectangle %d\n", (sum));

    return 0;
}