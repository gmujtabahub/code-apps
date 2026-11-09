#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int number;

    cout << "Enter Number = ";

    cin >> number; // 9

    int neon = number * number;
    int sum = 0;

    int temp1 = neon / 10;
    int temp2 = neon % 10;

    sum = temp1 + temp2;

    if (sum == number)
        cout << "NEON NUMBER";

    else
        cout << "NON NEON NUMBER";

    return 0;
}