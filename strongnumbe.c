#include <stdio.h>
#include <stdlib.h>

int strongnumber(int i);

int main()

{

    system("clear");

    int number;

    printf("Enter Number = ");
    scanf("%d", &number);

    if (strongnumber(number) == number)
        printf("Strong Number\n");

    else
        printf("Non Strong Number\n");

    return 0;
}

int strongnumber(int number)

{

    int sum = 0;

    while (number != 0)

    {

        int num = number % 10;
        int factorial = 1;

        for (int a = 1; a <= num; a++)

        {
            factorial = factorial * a;
        }

        sum = sum + factorial;
        number = number / 10;
    }

    return sum;
}