/*
7..7. Write a program to decrypt the string encrypted using encrypt function in problem 6.

*/

#include <stdio.h>

int main()
{
    char st[]="dcb";

for(int i =0 ; st[i] != '\0';i++){

st[i]--;

}
 

    printf("Encrypted string  = %s\n", st);

    return 0;
}

