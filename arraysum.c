#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main()
{
    system("cls");

    int arr1[][SIZE] = {
        {3, 2, 1},
        {4, 5, 6},
        {7, 8, 9}};

    int arr2[][SIZE] = {
        {0, 5, 1},
        {2, 3, 1},
        {4, 0, 1}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d   ", arr1[i][j]);
        }

        printf("+\t");

        for (int s = 0; s < SIZE; s++)
        {
            printf("%d   ", arr2[i][s]);
        }

        printf("=\t");

        for (int m = 0; m < SIZE; m++)
            printf("%d   ", arr1[i][m] + arr2[i][m]);


        printf("\n");
    }
    return 0;
}