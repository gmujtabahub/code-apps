#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int amount, currency = 0;
    int arr[10] = {5000, 1000, 500, 100, 50, 20, 10, 5, 2, 1};

    cout << "Enter Amount = ";

    cin >> amount;

    for (int i = 0; i < 10; i++)
    {
        currency = amount / arr[i];

        if (currency != 0)
            cout << arr[i] << " = " << currency << endl;

        amount = amount % arr[i];
    }

    return 0;
}