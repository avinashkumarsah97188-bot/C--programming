/*
7. Try problem 3 using call by
 value and verify that it does
  not change the value of the said variable.
*/


#include <stdio.h>   //using call by value//

void address(int x)
{
     x=x*10;
      printf("Inside function: %d\n", x);
   
}

int main()
{
    int i = 6;

    printf("Before: %d\n", i);
    address(i);
    printf("After: %d\n", i);

    return 0;
}