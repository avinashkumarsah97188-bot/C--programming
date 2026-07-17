
/*3.Calculate income tax paid by an employee to the government as per the slabs mentioned below:
Income Slab
Tax
2.5-5.0L
5%
5.0L-10.0L
20%
Above 10.0L
30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/

#include <stdio.h>

int main()
{
    float income, tax = 0;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income <= 500000)
    {                                   // 2.5L to 5.0L
        tax = (income - 250000) * 0.05; /*5% tax on the amount above 2.5L  to yha hm 250000 ko
                                           minus kr rheh ta ki 25000 pe jo 0 % hai vo minus kr tax value ko 5% tax  calculate kr ske! */
    }
    else if (income <= 1000000)
    {
        tax = 12500 + (income - 500000) * 0.20;
    }
    else
    {
        tax = 112500 + (income - 1000000) * 0.30;
    }

    printf("Income = %.2f\n", income);
    printf("Tax = %.2f\n", tax);

    return 0;
}
