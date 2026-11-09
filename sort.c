#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main()
{
    system("cls");

    
    int arr[SIZE] = {1, 4, 2, 0, 3, 5};

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int s = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = s;
            }
        }
    }

    for (int a = 0; a < SIZE; a++)
    {
        printf("%d ", arr[a]);
    }
    return 0;
}