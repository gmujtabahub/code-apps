#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    // for (int a = 0; a < 3; a++)
    // {
    //     for (int b = a; b < 3; b++)
    //     {
    //         int s = arr[a][b];
    //         arr[a][b] = arr[b][a];
    //         arr[b][a] = s;
    //     }
    // }

    for (int a = 0; a < 2; a++) //
    {
        for (int b = a; b < 3; b++) //
        {
            int s = arr[a][b];     //
            arr[a][b] = arr[b][a]; //
            arr[b][a] = s;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}