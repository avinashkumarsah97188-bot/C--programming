/*Write a program to print multiplication table of 10 in reversed order..*/

#include <stdio.h>
int  main(){

    int n,i;
    
    printf("enetr the n  number");
    scanf("%d",&n);

    for(int i =10;i>=1;i--)
{
    printf("%dX%d = %d\n",n,i,n*i);

}
    return 0;
}