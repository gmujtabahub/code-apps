#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int number;

    printf("Enter Number = ");
    scanf("%d", &number); // 897

    int a = number / 100;
    int b = number / 10 % 10;
    int c = number % 10;

    int d = c * 100 + b * 10 + a;

    printf("%d\n", d);

    return 0;
}