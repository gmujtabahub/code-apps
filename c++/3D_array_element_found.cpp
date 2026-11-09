#include <iostream>

using namespace std;

#define Record 4
#define ROW 3
#define COLOUMN 3

void number_f(int i, int arr[Record][ROW][COLOUMN]);

int main()
{
    system("cls");

    int number, t1 = -1;
    int arr[Record][ROW][COLOUMN] = {
        {{1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}},

        {{2, 11, 12},
         {13, 14, 15},
         {16, 17, 18}},

        {{19, 20, 21},
         {22, 23, 24},
         {25, 26, 27}},

        {{2, 29, 12},
         {31, 32, 33},
         {34, 35, 36}}};

    cout << "Enter Number To Find = ";

    cin >> number;

    for (int i = 0; i < Record; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            for (int a = 0; a < COLOUMN; a++)
            {
                if (number == arr[i][j][a])
                {
                    t1 = i;
                    number_f(i, arr);
                }
            }
        }
    }

    if (t1 == -1)
        cout << "Number Not Found" << endl;

    return 0;
}

void number_f(int t1, int arr[Record][ROW][COLOUMN])
{
    for (int b = 0; b < ROW; b++)
    {
        for (int c = 0; c < COLOUMN; c++)
        {
            cout << arr[t1][b][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
}