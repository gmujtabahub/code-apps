#include <stdio.h>
#include <stdlib.h>

int main()

{

    system("clear");

    int number;

    printf("Enter Number = ");
    scanf("%d", &number);

    int multiply = 1;
    int sum = 0;

    while (number != 0) // 123
    {
        int num = number % 10; // 3

        sum = sum + num;
        multiply = multiply * num;

        number = number / 10;
    }

    if (sum == multiply)
        printf("Spy Number\n");

    else
        printf("Non Spy Number\n");
}
