#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int number;

    cout << "Enter Number = ";

    cin >> number;

    int temp = number;
    int sum = 0;
    int factorial = 1;

    while (temp != 0)
    {
        int num = temp % 10;
        temp = temp / 10;
        factorial = 1;
        for (int i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }
        sum = sum + factorial;
    }

    if (sum == number)
        cout << "STRONG NUMBER";

    else
        cout << "NON STRONG NUMBER";

    return 0;
}