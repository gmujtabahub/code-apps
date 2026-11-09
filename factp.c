#include <stdio.h>
#include <stdlib.h>

int main()

{

    system("clear");

    int number;

    printf("Enter Number = ");
    scanf("%d", &number);

    int factorial = 1;

    for (int a = 1; a <= number; a++)
    {
        factorial = factorial * a; // 120
    }

    printf("%d\n", factorial);

    for (int a = 1; a <= number; a++)
    {
        factorial = factorial / a; // 1
    }

    printf("%d\n", factorial);

    return 0;
}