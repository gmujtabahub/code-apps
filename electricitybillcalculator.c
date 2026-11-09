#include <stdio.h>
#include <stdlib.h>

void electricity(int i, int a);

int main()

{
    system("cls");

    int units;
    int tax;

    printf("Enter Units Consumed = ");
    scanf("%d", &units);

    electricity(units, tax);

    return 0;
}

void electricity(int units, int tax)
{
    printf("Units Consumed = %d\n", units);
    int rate1 = 100;
    int rate2 = 200;
    int rate3 = 300;
    int rate4 = 700;

    if (units > 0 && units <= 100)
    {
        units = units * rate1;
        tax = units * 0.15;
    }

    else if (units >= 101 && units <= 200)
    {
        units = 100 * rate1 + (units - rate1) * rate2;
        tax = units * 0.15;
    }
    else if (units >= 201 && units <= 300)
    {
        units = 100 * rate1 + 100 * rate2 + (units - rate2) * rate3;
        tax = units * 0.15;
    }

    else if (units >= 301 && units <= 700)
    {
        units = 100 * rate1 + 100 * rate2 + 100 * rate3 + (units - rate3) * rate4;
        tax = units * 0.15;
    }

    else
    {
        units = units * rate4;
        tax = units * 0.15;
    }

    printf("ELECTRICITY BILL\n");
    printf("===============================\n");
    printf("Bill = %d\n", units);
    printf("Tax = %d\n", tax);
    printf("===============================\n");
    printf("Total Payable Bill = %d\n", units + tax);
}