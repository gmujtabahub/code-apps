#include <stdio.h>
#include <stdlib.h>

int magic(int a);

int main()

{

    system("clear");

    int number;

    printf("Enter Number = ");
    scanf("%d", &number);

    if (magic(number) == number)
        printf("Magic Number\n");

    else
        printf("Non Magic Number\n");

    return 0;
}

int magic(int number)//4
{
    int sum = 0;

    while (number != 0) 
    {
        int r = number % 10;//4
        sum = sum + r;//4
        number = number / 10;//0
    }

    int rev = sum;
    int mul = 0;

    while (rev != 0)//0
    {
        int r = rev % 10;//4
        mul = mul * 10 + r; // 4
        rev = rev / 10;//0
    }

    return mul * sum;
}
