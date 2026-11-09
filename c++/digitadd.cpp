#include <iostream>
using namespace std;

int main()
{
    system("cls");

    int digit;

    cout << "Enter Digit = ";
    cin >> digit;

    int temp = 1;
    size_t multi = 1;

    while (digit != 0)
    {
        temp = digit % 10;
        digit = digit / 10;
        multi = multi * temp;
    }

    cout << "Multipilcation = " << multi << endl;

    return 0;
}