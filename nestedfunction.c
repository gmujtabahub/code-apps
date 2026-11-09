#include <stdio.h>
#include <stdlib.h>

int reverse(int a);
int count(int b);

int main()

{

    system("clear");

    int number;

    printf("Enter Number To Reverse = ");
    scanf("%d", &number);

    int x = count(reverse(number));

    printf("Digits Count = %d\n", x);

    return 0;
}

int reverse(int a)

{

    int result = 0;

    while (a != 0)
    {
        int rem = a % 10;
        result = result * 10 + rem;
        a = a / 10;
    }

    printf("Reverse = %d\n", result);

    return result;
}

int count(int b)

{

    int c = 0;

    while (b != 0)
    {
        b = b / 10;

        c++;
    }

    return c;
}