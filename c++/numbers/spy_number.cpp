#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int number;

    cout << "Enter Number = ";

    cin >> number; // 1124

    int temp = number;
    int sum = 0;
    int multi = 1;

    while (temp != 0)
    {
        int num = temp % 10;
        temp = temp / 10;

        sum = sum + num;
        multi = multi * num;
    }

    if (sum == multi)
        cout << "SPY NUMBER";

    else
        cout << "NON SPY NUMBER";

    return 0;
}