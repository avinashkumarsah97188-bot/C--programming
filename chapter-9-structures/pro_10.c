/*
10. Solve problem 9 for time using 'typedef'J keyword.
*/

#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} sd;

int comparedate(sd d1, sd d2)
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
    sd d1 = {26 , 4 , 27};
    sd d2 = {25 ,7 , 27};

 int result = comparedate(d1, d2);

    printf("%d\n", result );
    return 0;

}