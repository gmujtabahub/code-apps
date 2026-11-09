#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int number;

    cout << "Enter Number = ";

    cin >> number;

    int perfect = number;
    int sum = 0;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }

    if (perfect == sum)
        cout << "PERFECT NUMBER";

    else
        cout << "NON PERFECT NUMBER";

    return 0;
}