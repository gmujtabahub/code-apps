#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main()
{
    system("cls");

    int num[SIZE] = {8, 4, 11, 33, 6, 2, 1, 1};
    int a = num[0];
    for (int i = 0; i < SIZE; i++)
    {

        if (num[i] > a)
        {

            a = num[i];
        }
    }
    printf("%d\n", a);
    return 0;
}
