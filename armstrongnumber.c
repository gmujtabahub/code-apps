#include <stdio.h>
#include <stdlib.h>

int armstrong(int a);

int main()

{

    system("clear");

    int number;

    printf("Enter Number = ");
    scanf("%d", &number);

    if (armstrong(number) == number)
        printf("Armstrong Number\n");

    else
        printf("Non Armstrong Number\n");

    return 0;
}

int armstrong(int number)
{

    int n = number;

    int c = 0;
    while (n != 0)
    {
        n = n / 10;
        c++;
    }

    int sum = 0;
    while (number != 0) // 120
    {
        int r = number % 10;//1

        int p = r;

        for (int a = 1; a < c; a++)
        {
            p = p * r;//1
        }

        sum = sum + p;//9

        number = number / 10;
    }

    return sum;
}