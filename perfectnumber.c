#include <stdio.h>
#include <stdlib.h>

int perfect(int p);

int main()

{

    system("clear");

    int number;

    printf("Enter Number = ");
    scanf("%d", &number);

    if (perfect(number) == number)
        printf("Perfect Number\n");

    else
        printf("Non Perfect NUmber\n");

    return 0;
}

int perfect(int number)

{

    int sum = 0;

    for (int a = 1; a < number; a++)
    {
        if (number % a == 0)
        {
            sum = sum + a;
        }
    }
    return sum;
}