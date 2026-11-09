#include <iostream>

using namespace std;

#define Record 4
#define ROW 3
#define COLOUMN 3

int main()
{
    system("cls");

    int sum = 0, sum2 = 0, t = 0;
    int arr[Record][ROW][COLOUMN] = {
        {{1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}},

        {{2, 11, 12},
         {13, 14, 15},
         {16, 17, 18}},

        {{-19, -20, -21},
         {-22, -23, -24},
         {-25, -26, -27}},

        {{1, 11, 111},
         {2, 22, -222},
         {3, -33, -333}}};

    for (int x = 0; x < ROW; x++)
    {
        for (int y = 0; y < COLOUMN; y++)
        {
            sum2 = sum2 + arr[0][x][y];
        }
    }

    for (int i = 0; i < Record; i++) // 0
    {
        for (int j = 0; j < ROW; j++) // 0
        {
            for (int a = 0; a < COLOUMN; a++) // 0
            {
                sum = sum + arr[i][j][a];

                if (j == ROW - 1 && a == COLOUMN - 1)
                {
                    if (sum2 < sum)
                    {
                        // t = i;
                        sum2 = sum;
                    }
                    else
                        t++; // 1
                }
            }
        }
        sum = 0;
    }

    for (int c = 0; c < ROW; c++)
    {
        for (int d = 0; d < COLOUMN; d++)
        {
            cout << arr[t][c][d] << " ";
        }
        cout << endl;
    }

    return 0;
}