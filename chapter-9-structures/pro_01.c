/*
1. Create a two-dimensional vector using structures in C.
*/


#include<stdio.h>

struct vector{

    int x;
    int y;
};
 int main(){
struct vector v={3,4};

printf("x = %d\n",v.x);
printf("y = %d\n",v.y);

return 0;

}

