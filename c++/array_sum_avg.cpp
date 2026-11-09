#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    float avg = 0;

    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / 10;

    cout << "SUM " << sum << endl;
    cout << "AVERAGE " << avg << endl;

    return 0;
}