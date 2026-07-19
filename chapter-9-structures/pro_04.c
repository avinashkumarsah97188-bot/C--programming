/*
4. Write a program to illustrate the use of arrow operator → in C.
*/

#include <stdio.h>
struct student
{
    int roll_no;
    char name[10];
};

int main()
{
    struct student v = {21, "avinash"};
    struct student *ptr;

    ptr = &v;

    printf("student Roll No is : %d\n", ptr->roll_no);
    printf("Name of students is : %s\n", ptr->name);

    return 0;
}
