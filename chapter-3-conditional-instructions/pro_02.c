/*2. Write a program to determine whether a student has passed or failed.
 To pass, a student requires a total of 40% and at least 33% in each subject.
 Assume there are three subjects and take the marks as input from the user. */

#include <stdio.h>
int main()
{
    float sub1, sub2, sub3, total;
    printf("Enter marks for three subjects\n");
    scanf("%f %f %f", &sub1, &sub2, &sub3);

    total = (sub1 + sub2 + sub3) / 3;
    if (total >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33)
    {
        printf("Congratulations! You have passed the exam.\n");
    }
    else if (total < 40 || sub1 < 33 || sub2 < 33 || sub3 < 33)
    {
        printf("Sorry! You have failed the exam.\n");
    }
    return 0;
}
