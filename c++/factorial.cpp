#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int factorial_number;

    cout << "Enter Factorial Number = ";
    cin >> factorial_number;

    int factorial = factorial_number;

    for (int i = 1; i < factorial; i++)
    {
        factorial_number = factorial_number * i;
    }

    cout << factorial_number << endl;

    return 0;
}