/*
9. Write a structure capable of storing date.
 Write a function to compare those dates.

*/

#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

int comparedate(struct date d1, struct date d2)
{
   if( d1.year > d2.year)
    return 1;

if( d1.year < d2.year)
    return -1;

if (d1.month > d2.month)
    return 1;

if (d1.month < d2.month)
    return -1;

if (d1.day > d2.day)
    return 1;

if (d1.day < d2.day)
    return -1;

    else 
return 0;
}

int
main()
{
    struct date d1 = {26 , 4 , 26};
    struct date d2 = {25 ,4 , 26};

 int result = comparedate(d1, d2);

    printf("%d\n", result );
    return 0;

}