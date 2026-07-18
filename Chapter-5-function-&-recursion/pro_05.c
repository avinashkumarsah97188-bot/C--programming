/*
5. What will the following line produce in a C program:
printf("%d %d %d \n", a, ++a, a++);
*/

#include<stdio.h>
int main()
{
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // 6 6 4                                // Undefined Behavior:
    // 4   5   5                            // Ek hi expression me variable 'a' ko multiple baar modify
                                            // (++a aur a++) kiya ja raha hai aur saath hi uski value read
                                            // bhi ho rahi hai. Output compiler par depend karega.
    return 0;
}