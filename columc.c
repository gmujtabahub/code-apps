#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void sweepRows(int arr[][SIZE]);
void sweepRows2(int arr[][SIZE]);

int main()
{
    system("cls");

    int arr[][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {14, 15, 16},
        {14, 15, 16},
        {14, 15, 16},
        {14, 15, 16},

    };

    // sweepRows(arr);
    sweepRows2(arr);

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void sweepRows(int arr[][SIZE])
{
    for (int i = 2; i >= 0; i--)
    {
        for (int j = 0; j < SIZE; j++)
        {
            int s = arr[i - i][j];
            arr[i - i][j] = arr[i][j];
            arr[i][j] = s;
        }
    }
}

void sweepRows2(int arr[][SIZE])
{
    int j = 0;
    for (int i = 1; i > 0; i--)
    {
            int s = arr[i - i][j];
            arr[i - i][j] = arr[i][j];
            arr[i][j] = s;   
            
    }
    
}