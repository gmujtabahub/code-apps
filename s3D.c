#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int arr[2][2][3] = {
        {{10, 2, 3},{4, 5, 1}},
        {{7, 8, 9} ,{100, 11, 12}}
    };


    int s = arr[0][0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int n = 0; n < 3; n++)
            {
                if (s < arr[i][j][n])
                {
                    s = arr[i][j][n];
                }
            }
        }
    }
    printf("%d ", s);

    return 0;
}