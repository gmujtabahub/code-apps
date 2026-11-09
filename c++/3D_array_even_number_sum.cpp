#include <iostream>

using namespace std;

#define RECORD 3
#define ROW 4
#define COLUMN 4

int main()
{
    system("cls");

    int arr[RECORD][ROW][COLUMN] = {
        {{1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12},
         {13, 14, 15, 16}},

        {{17, 18, 19, 20},
         {21, 22, 23, 24},
         {25, 26, 27, 28},
         {29, 30, 31, 32}},

        {{33, 34, 35, 36},
         {37, 38, 39, 40},
         {41, 42, 43, 44},
         {45, 46, 47, 48}}};
    int sum = 0;

    for (int i = 0; i < RECORD; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            for (int k = 0; k < COLUMN; k++)
            {
                if (arr[i][j][k] % 2 == 0)
                {
                    sum = sum + arr[i][j][k];
                }
                cout << arr[i][j][k] << " ";

                if (k == COLUMN - 1)
                    cout << " = " << sum;
            }
            cout << endl;
            sum = 0;
        }
    }
    return 0;
}