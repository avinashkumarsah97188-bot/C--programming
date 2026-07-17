/*3. Write a program to convert Celsius (Centigrade degrees temperature to  Fahrenheit).*/

#include <stdio.h>

int main() {
    
    int celsius;
     printf(" enter the tempertature in celsius\n"
     );
     scanf("%d", &celsius);
     float fahrenheit = (celsius * 9/5) + 32;
     printf("The temperature in Fahrenheit is %0.2f\n", fahrenheit);
     
    return 0;
}