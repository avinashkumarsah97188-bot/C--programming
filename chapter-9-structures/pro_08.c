/*
8. Create a structure representing a bank account of a customer.
What fields did you use and why?
*/

#include <stdio.h>

struct BankAccount
{
    int account_no;          // Account number
    char name[50];           // Customer name
    char ifsc_code[20];      // IFSC code (contains letters and numbers)
    long long phone_no;      // Phone number
    float balance;           // Account balance
};

int main()
{
    struct BankAccount customer = {
        123456789,
        "Avinash Kumar",
        "SBIN0001234",
        9876543210,
        5000.50
    };

    printf("Account No : %d\n", customer.account_no);
    printf("Name       : %s\n", customer.name);
    printf("IFSC Code  : %s\n", customer.ifsc_code);
    printf("Phone No   : %lld\n", customer.phone_no);
    printf("Balance    : %.2f\n", customer.balance);

    return 0;
}