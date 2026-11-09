#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

void main(void)

{

    system("cls");

    int arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7};
    int i = 0;
    while (i < SIZE / 2)
    {
        int s = arr[i];
        arr[i] = arr[SIZE - 1 - i];
        arr[SIZE - 1 - i] = s;
        i++;
    }
    int a = 0;
    while (a < SIZE)
    {
        printf("%d ", arr[a]);
        a++;
    }
}