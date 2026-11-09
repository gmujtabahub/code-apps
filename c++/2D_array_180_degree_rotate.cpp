#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int arr[3][3] = {
        {100, 20, -3},
        {-4,  50, 96},
        {70,  38, 69}};

    int arr2[3][3];

    int a = 2, b = 2;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[i][j] = arr[a][b];
            b--;
        }
        b = 2;
        a--;
    }

    for (int c = 0; c < 3; c++)
    {
        for (int d = 0; d < 3; d++)
        {
            cout << arr2[c][d] << " ";
        }
        cout << endl;
    }

    // for (int c = 2; c >= 0; c--)
    // {
    //     for (int d = 2; d >= 0; d--)
    //     {
    //         cout << arr[c][d] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}