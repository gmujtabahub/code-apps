#include <iostream>

#define ROW 4
#define COLUMN 1

using namespace std;

int main()
{
    system("cls");

    int arr[ROW][COLUMN] = {
        {1},
        {4},
        {7},
        {7}};

    int sum = 0, a = 0, j = 0;

    for (int i = 0; i < ROW; i++)
    {
        j = 0;
        while (j < COLUMN)
        {
            if (i >= 0 && i <= ROW - 1)
                if (j >= 0 && j <= a)
                    sum = sum + arr[i][j];

            if (i == 0 || i == ROW - 1 || j == COLUMN - 2)
            {
                a++;
                j++;
                if (j == 2)
                    a += 1;
            }
            else
                j++;
        }
        a = 0;
    }

    cout << "SUM = " << sum << endl;

    return 0;
}