/*
6. Write a program to encrypt a string by adding 1 to the ascii value of its characters.
*/


#include <stdio.h>

int main()
{
    char st[]="avinash";

for(int i =0 ; st[i] != '\0';i++){

st[i]++;

}
 

    printf("Encrypted string  = %s\n", st);

    return 0;
}