#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int arr(int arra[][SIZE],int arr2[][SIZE]);

int main()
{
    system("cls");

    int arra[][SIZE] = {
        {3, 2, 1},
        {4, 5, 6},
        {7, 8, 9}};

        int arr2[][SIZE] = {
            {},
            {},
            {}};

    arr(arra,arr2);

    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < SIZE; b++)
        {
            printf("%d\t", arr2[a][b]);
        }
        printf("\n");
    }

    return 0;
}

int arr(int arra[][SIZE],int arr2[][SIZE])
{
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < SIZE; c++)
        {
            int temp = arra[c][r];
            arra[c][r] = arra[r][c];
            arra[r][c] = temp;

            // arr2[c][r] = arra[r][c];
        }
    }
}