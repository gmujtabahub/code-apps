#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int number;

    cout << "Enter Number = ";

    cin >> number; // 1729

    int magic = number;
    int reverse = 0;
    int sum1 = 0;
    int sum2 = 0;

    while (number != 0)
    {
        int temp = number % 10;
        number = number / 10;
        sum1 = sum1 + temp;
        sum2 = sum2 + temp;
    }

    while (sum2 != 0)
    {
        int num = sum2 % 10;
        sum2 = sum2 / 10;
        reverse = reverse * 10 + num;
    }

    int multi = sum1 * reverse;

    if (magic == multi)
        cout << "MAGIC NUMBER";

    else
        cout << "NON MAGIC NUMBER";

    return 0;
}