/*4. Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest*/

#include <stdio.h>

int main() {
    
    int principal = 1000,years =2,rate =5;

    float simple_interest= principal*years*rate/100;

    printf("the simple interest is %0.2f\n", simple_interest);
     
    return 0;
}