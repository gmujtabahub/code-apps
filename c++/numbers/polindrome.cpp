#include <iostream>

using namespace std;

void polindrome();

int reverse = 0;
int number;

int main()
{
    system("cls");

    cout << "Enter Number = ";

    cin >> number;

    int temporary = number;

    polindrome();
    
    if (reverse == temporary)
        cout << "Polindrome Number";

    else
        cout << "Non Polindrome Number";

    return 0;
}

void polindrome()
{
    int temp = 1;

    while (number != 0)
    {
        temp = number % 10;
        number = number / 10;
        reverse = reverse * 10 + temp;
    }
}