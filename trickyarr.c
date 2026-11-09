#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int main()
{
    system("cls");

    int arr[][SIZE] = {
        {3, 2, 1},
        {4, 5, 6},
        {7, 8, 9}};

    int sum = 0;
    int sum2 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j <= i; j++)
        {
            sum = sum + arr[i][j];
        }

        for (int j = SIZE -i- 1; j >= 0; j--)
        {
            sum2 = sum2 + arr[i][j];
            break;
        }
    }
    printf("\\ %d\n", sum);
    printf("/ %d\n", sum2);
    
    return 0;
}