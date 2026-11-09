#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int number;

    cout << "Enter Number = ";

    cin >> number;//19

    int sum = 0;
    int temp = number;

    while (number != 0)
    {
        int num = number % 10;//1
        number = number / 10;//0

        int square = num * num;//82
        sum = sum + square;

        if (sum == 1)
            break;

        if (sum == temp)
            break;

        if (number == 0)
        {
            number = sum;
            sum = 0;
        }
    }

    if (sum == 1)
        cout << "HAPPY NUMBER";

    else
        cout << "UNHAPPY NUMBER";

    return 0;
}