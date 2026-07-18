/*
Write a program having a variable 'i'. Print the address of 'i'. Pass this variable to a function and print its address. Are these addresses same? Why?


"Ek variable i banao. Uska address print karo.
 Phir i ko ek function me pass karo aur function
  ke andar uska address print karo. Kya dono addresses same hain? Kyon?"
*/

#include <stdio.h>
void showAddress(int);
void showAddress(int x)
{

    printf(" the adress of x is %p\n", (void *)&x);
}

int main()
{
    int i = 10;
    printf("address of i in main=%p\n", (void *)&i);
    showAddress(i);
    return 0;
}
  /*WHY
  No, addresses are not the same. Because C uses call by value,
   the function receives a copy of i in parameter x.
    Therefore, i and x are stored at different memory locations and have different addresses.*/