  /*
  Write a programa to print multiplication table of a given number n.
  */

#include <stdio.h>
int  main(){

    int n,i;
    printf("enetr the n  number");
    scanf("%d",&n);

    for(int i =1;i<=10;i++)
{
    printf("%dX%d = %d\n",n,i,n*i);

}
    return 0;
}