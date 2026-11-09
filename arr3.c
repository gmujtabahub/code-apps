#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int sortarray(int arr[]);
int main()
{
    system("cls");
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 0, 9};
    // int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 0, 8, 9};
    // int arr[SIZE] = {1, 2, 3, 4, 5, 6, 0, 7, 8, 9};
    // int arr[SIZE] = {1, 2, 3, 4, 5, 0, 6, 7, 8, 9};
    // int arr[SIZE] = {1, 2, 3, 4, 0, 5, 6, 7, 8, 9};
    // int arr[SIZE] = {1, 2, 3, 0, 4, 5, 6, 7, 8, 9};
    // int arr[SIZE] = {1, 2, 0, 3, 4, 5, 6, 7, 8, 9};
    // int arr[SIZE] = {1, 0, 2, 3, 4, 5, 6, 7, 8, 9};
    // int arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    sortarray(arr);

    for (int a = 0; a < SIZE; a++)
        printf("%d ", arr[a]);
}

int sortarray(int arr[])
{
    for (int n = 0; n < SIZE - 1; n++) // 9
    {
        for (int i = 0; i < SIZE - n - 1; i++) // 0
        {
            if (arr[i] > arr[i + 1])
            {
                int s = arr[i];      // 1
                arr[i] = arr[i + 1]; // 0
                arr[i + 1] = s;      // 1
            }
        }
    }
}