/*3. Write a program to check whether a number is divisible by 97 or not.*/

#include <stdio.h>

int main() {
    
int num;
printf("enter a number\n");
scanf("%d", &num);

if(num%97==0){
    
    printf("the number %d is divisible by 97\n", num);
} else {
    printf("the number %d is not divisible by 97\n", num);
}
    return 0;
} 