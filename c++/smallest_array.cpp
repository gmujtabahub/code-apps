#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int arr[] = {0, 1, 4, 5, 6, 7, 4, 10};
    int s = arr[0]; // 0
    int i;

    for (i = 0; i < 10; i++) // 3
    {
        if (s > arr[i]) // 0 >= 5
        {
            s = i; // 0
        }
    }

    cout << s << endl;

    return 0;
}