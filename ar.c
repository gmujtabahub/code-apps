#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    system("cls");

    int arr[SIZE] = {1, 2, 3, 4, 5};

    int rev = 0;

    for (int i = 4; i >= 0; i--) // 0
    {
        // rev = rev * 10 + arr[i]; //54321
        printf("%d ", arr[i]);
    }

    // printf("%d ", rev);

    return 0;
}