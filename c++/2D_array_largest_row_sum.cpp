#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int arr[3][3] = {
        {1, -1, 2},
        {4, -500, 4},
        {-1, 8, -2}};

    int sum = 0, sum2 = 0, s = 0;

    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            sum2 = sum2 + arr[a][b];

            // if (b == 2)
                if (sum < sum2)
                {
                    s = a;
                    sum = sum2;
                }
        }
        sum2 = 0;
    }

    for (int k = 0; k < 3; k++)
        cout << arr[s][k] << " ";

    return 0;
}