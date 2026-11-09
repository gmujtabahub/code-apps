#include <iostream>

using namespace std;

void decimal_to_binary(int number);
void binary_to_digit(int binary);

int main()
{
    system("cls");

    size_t number;

    cout << "Enter Number = ";

    cin >> number;

    decimal_to_binary(number);

    size_t binary_number;

    cout << "Enter Binary Number = ";

    cin >> binary_number; // 1011

    binary_to_digit(binary_number);

    return 0;
}

void decimal_to_binary(int number)
{
    size_t divide;
    size_t reminder;

    while (number != 0)
    {
        divide = number / 2;
        reminder = number % 2;

        cout << reminder;

        number = divide;
    }
}

void binary_to_digit(int binary)
{
    size_t temp = binary;
    size_t digit = 0;
    size_t sum = 0;
    size_t t = 1;

    while (temp != 0)
    {
        temp = temp / 10;

        digit++;
    }

    while (t != digit + 1)
    {
        size_t num = binary % 10;
        binary = binary / 10;

        for (int i = 1; i < t; i++)
        {
            num = num * 2;
        }
        sum = sum + num;
        t++;
    }

    cout << "DIGIT = " << sum << endl;
}