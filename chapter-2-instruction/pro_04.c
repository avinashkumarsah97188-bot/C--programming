/*4. Explain step by step evaluation of 3*x/y-z+k, where x=2, y=3, z=3, k=1*/

#include <stdio.h>

int main() {
    
    int x=2, y=3, z=3, k=1;
    float result = 3*x/y-z+k;

    //3*x/y-z+k;
    //3*2/3-3+1;
    //6/3-3+1;
    //2-3+1;
    //-1+1;
   // 0;
    printf("The result of the expression 3*x/y-z+k is: %0.2f\n", result);
    return 0;
}