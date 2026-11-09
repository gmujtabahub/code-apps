#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    system("cls");

    int arr[][SIZE] = {
        {10, 20, 30, 40, 50},
        {1, 2, 3, 4, 5},
        {4, 2, 1, 0, 2},
        {8, 7, 6, 5, 3}};

    int sum = 0;
    int asum = 0;

    for (int i = 0; i < 4; i++)
    {
        sum = 0;
        for (int j = 0; j < SIZE; j++)
        {
            sum = sum + arr[i][j];
            printf("%d\t", arr[i][j]);
        }
        printf("=====%d/%.2f\n", sum, (float)sum / 5);
        asum = asum + sum;
    }

    printf("%d/%.2f\n", asum, (float)asum / 4);

    return 0;
}