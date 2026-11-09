#include <iostream>

#define SIZE 6

using namespace std;

int main()
{
    system("cls");

    int arr[SIZE] = {4, 3, 1, 0, 8, 2};

    // for (int i = 0; i < SIZE - 1; i++) // 5
    // {
    //     for (int j = i + 1; j < SIZE; j++) // 6
    //     {
    //         if (arr[i] > arr[j]) // 4 5
    //         {
    //             int temp = arr[i]; // 3
    //             arr[i] = arr[j];   // 2
    //             arr[j] = temp;     // 3
    //         }
    //     }
    // }

    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int a = 0; a < SIZE; a++)
    {
        cout << arr[a] << " ";
    }
    return 0;
}