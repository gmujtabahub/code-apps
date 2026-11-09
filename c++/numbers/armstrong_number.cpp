#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int number;

    cout << "Enter Number = ";

    cin >> number; // 145

    int temp = number;
    int armstrong = number;
    int power = 0;
    int multi = 1;
    int sum = 0;

    while (temp != 0)
    {
        temp = temp / 10;

        power++; // 3
    }

    for (int i = 1; i <= power; i++)
    {
        int num = number % 10; // 5
        number = number / 10;  // 1

        multi = 1;

        for (int j = 1; j <= power; j++)
        {
            multi = multi * num; //
        }
        sum = sum + multi; // 27
    }

    if (sum == armstrong)
        cout << "ARMSTRONG NUMBER";

    else
        cout << "NON ARMSTRONG NUMBER";

    return 0;
}