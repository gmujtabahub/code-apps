#include <stdio.h>
#include <stdlib.h>

int strong(int i);
int factorial(int b);

int main()
{
    system("clear");

    int number;

    printf("Enter Number = ");
    scanf("%d", &number); // 145

    if (strong(number) == number)
        printf("STRONG NUMBER\n");

    else
        printf("NON STRONG NUMNBER\n");

    return 0;
}

int strong(int number) // 145
{
    int sum = 0;

    while (number != 0)
    {
        sum = sum + factorial(number % 10);//120
        number = number / 10;
    }
    return sum;
}

int factorial(int f)
{
    int factorial = 1;
    for (int a = 1; a <= f; a++)
    {
        factorial = factorial * a;
    }
    return factorial;
}