/*
Write a program to print the address
 of a variable. Use this address to
  get the value of the variable.

*/

#include <stdio.h>
int main()
{
    int s = 10;
    int *ptr;
    ptr = &s; // store the address of variable s //

    printf(" The value of s  is %d\n", s);
    printf(" The address of s  is %p\n", &s);     // Ye line variable s ka memory address print karti hai. ///
    printf(" the  address store in  ptr  is %p\n", ptr);
    printf(" the value of s using pointer is %d\n", *ptr);   //%d krne se value ayega s ka  %p se address milega ptr ka // 

   
   return 0;
}
  
/*
s → 10 (value)
&s → s ka address
ptr = &s → address pointer me store
*ptr → 10 (value wapas mil jaati hai)

Expression	Meaning	Format                             Specifier
s	         Value of s                                 %d
&s           Address of s                               %p
ptr          Address stored in pointer              	%p
*ptr	     value at that address                  	%d

*/