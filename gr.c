#include <stdio.h>
#include <stdlib.h>
#define SIZE 7
void copyarray(int arr[], int arr2[]);

int main()
{

    system("cls");

    int arr[SIZE] = {0, 1, 2, 3, 4, 5, 6};
    int arr2[SIZE];

    copyarray(arr, arr2);

    for (int a = 0; a < SIZE; a++)
        printf("%d ", arr2[a]);

    return 0;
}

copyarray(int arr[], int arr2[])
{
    for (int i = 0; i < SIZE; i++)
    {
        arr2[i] = arr[i];
    }
}