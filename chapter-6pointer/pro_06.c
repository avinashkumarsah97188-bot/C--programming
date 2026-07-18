/*
6. Write a program to print
 the value of a variable i
  by using "pointer to pointer" type of variable.
6. Write a program to print the value of a variable i by using "pointer to pointer" type of variable.

*/

#include<stdio.h>
int main(){
int i =10;
int *j= &i;
int **k = &j;

printf("The value of i is %d\n",i);
printf("The value of i using pointer j is %d\n",*j);
 printf("The value of i using pointer to pointer k is %d\n", **k);            // basic level trick//
printf("The value of i using pointer j is %d\n",*(&i));     //(* se &) kaat to i aya and you all know that ki i ki value kya hai //
printf("The value of i using pointer j is %d\n",**(&j));   // shortcut yaad krne ka ki **j= &i  ye ase hoga * se & hata do to *j =i  (*j value store kega i ki) //



    return 0;
}



