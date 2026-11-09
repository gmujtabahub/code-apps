#include <stdio.h>
#include <stdlib.h>

int currency(int i);

int main()
{

    system("clear");
    
    int amount;

    printf("Enter Amount = ");
    scanf("%d", &amount);

    currency(amount);

    return 0;
}

int currency(int amount)
{
    int a; // 7892

    a = amount / 5000;
    if (a != 0)
        printf("5000 = %d\n", a);

    amount = amount % 5000;
    a = amount / 1000;
    if (a != 0)
        printf("1000 = %d\n", a);

    amount = amount % 1000;
    a = amount / 500;
    if (a != 0)
        printf("500 = %d\n", a);

    amount = amount % 500;
    a = amount / 100;
    if (a != 0)
        printf("100 = %d\n", a);

    amount = amount % 100;
    a = amount / 50;
    if (a != 0)
        printf("50 = %d\n", a);

    amount = amount % 50;
    a = amount / 10;
    if (a != 0)
        printf("10 = %d\n", a);

    amount = amount % 10;
    a = amount / 5;
    if (a != 0)
        printf("5 = %d\n", a);

    amount = amount % 5;
    a = amount / 1;
    if (a != 0)
        printf("1 = %d\n", a);
}