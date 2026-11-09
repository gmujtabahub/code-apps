#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int main()
{
    system("cls");

    int subject[SIZE] = {3, 2, 4};
    int sum = 0;
    int ave;
    int i;

    // normal array elements print with sum and avg
    printf("SERIES = ");

    for (i = 0; i < SIZE; i++)
    {
        sum = sum + subject[i];
        printf("%d\t", subject[i]);
    }

    printf("= %d\t", sum);
    printf("= %d\t\n", sum / i);

    // odd array elements print with sum and avg
    int count = 0;
    sum = 0;
    printf("ODD =  ");
    for (i = 0; i < SIZE; i++)
    {
        if (subject[i] % 2 != 0)
        {
            printf("%d\t", subject[i]);
            sum = sum + subject[i];
            count++;
        }
    }

    printf("= %d\t", sum);
    printf("= %d\t\n", sum / count);

    // even array elements print with sum and avg
    sum = 0;
    count = 0;
    printf("EVEN =  ");
    for (i = 0; i < SIZE; i++)
    {
        if (subject[i] % 2 == 0)
        {
            printf("%d\t", subject[i]);
            sum = sum + subject[i];
            count++;
        }
    }

    printf("= %d\t", sum);
    printf("= %d\t\n", sum / count);

    return 0;
}