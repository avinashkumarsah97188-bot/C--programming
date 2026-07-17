/*
6. Write a program to find greatest of four numbers entered by the user.
*/

#include <stdio.h>
int main(){
 int a,b,c,d;
 printf("Enter the four numbers: ");     
 scanf("%d %d %d %d",&a,&b,&c,&d);
 if(a>b && a>c && a>d){
  printf("%d A is the largest number.\n",a);
 }

 else if(b>a && b>c && b>d){
  printf("%d B is the largest number.\n",b);
 }
else if(c>a && c>b && c>d){
  printf("%d C is the largest number.\n",c);
 }
 else
  printf("%d D is the largest number.\n",d);
 
 return 0;
}