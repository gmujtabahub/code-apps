#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int amount, currency;

    printf("Enter Amount = ");
    scanf("%d", &amount);

    currency = amount / 5000;
    if (currency != 0)
        printf("5000 = %d\n", currency);
    amount = amount % 5000;

    currency = amount / 1000;
    if (currency != 0)
        printf("1000 = %d\n", currency);
    amount = amount % 1000;

    currency = amount / 500;
    if (currency != 0)
        printf("500 = %d\n", currency);
    amount = amount % 500;

    currency = amount / 100;
    if (currency != 0)
        printf("100 = %d\n", currency);
    amount = amount % 100;

    currency = amount / 50;
    if (currency != 0)
        printf("50 = %d\n", currency);
    amount = amount % 50;

    currency = amount / 10;
    if (currency != 0)
        printf("10 = %d\n", currency);
    amount = amount % 10;

    currency = amount / 1;
    if (currency != 0)
        printf("1 = %d\n", currency);
    amount = amount % 1;

    return 0;
}