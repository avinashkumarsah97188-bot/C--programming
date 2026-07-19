/*
3. Twenty integers are to be stored in memory. 
What will you prefer- Array or structure?

*/

// For storing 20 integers, an Array is the better choice //

#include <stdio.h>

int main() {
    int arr[20];

    // Input
    for (int i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    // Output
    for (int i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


/* Why not Structure?

A structure is used when you need to store different types of data together (e.g., name, age, salary). */

/*
struct Student {
    char name[50];
    int age;
    float marks;
};
*/