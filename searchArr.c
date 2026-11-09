#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

int main()
{
    system("cls");

    int num[SIZE] = {1, 2, 3, 0, 5, 4, 7};

    for (int i = 0; i < SIZE; i++)
        printf("%d ", num[i]); //1 0 3 4 2

    int number;
    printf("\nEnter Number To Find ELEMENT in Array = ");
    scanf("%d", &number); // 10

    int save = -1;

    for (int a = 0; a < SIZE; a++)
        if (number == num[a])
        {
            save = a;
            break;
        }

    if (!(save == -1))
        printf("Number Found at %d Location", save+1);
    else
        printf("No Number Found");

    return 0;
}