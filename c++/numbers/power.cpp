#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int number;
    int power;

    cout << "Enter Number = ";

    cin >> number;

    cout << "Enter Power = ";

    cin >> power;

    int multi = 1;

    for (int i = 1; i <= power; i++)
    {
        multi = multi * number;
    }

    cout << "RESULT = " << multi;

    return 0;
}