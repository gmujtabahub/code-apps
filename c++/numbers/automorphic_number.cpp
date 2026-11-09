#include <iostream>

using namespace std;

void old_program(int number);
void new_program(int number);

int main()
{
    system("cls");

    size_t number;

    cout << "Enter Number = ";

    cin >> number;

    // old_program(number);
    new_program(number);

    return 0;
}

void old_program(int number)
{
    size_t square = number * number;
    int temp = number;
    int digit_counter = 0;
    int num = 0;
    size_t reverse = 0;
    int n;
    size_t r = 0;

    while (temp != 0)
    {
        temp = temp / 10;
        digit_counter++;
    }

    while (digit_counter != 0)
    {
        num = square % 10;
        square = square / 10;
        reverse = reverse * 10 + num;
        digit_counter--;

        if (digit_counter == 0)
        {
            while (reverse != 0)
            {
                n = reverse % 10;
                reverse = reverse / 10;
                r = r * 10 + n;
            }
        }
    }

    if (number == r)
        cout << "AUTOMORPHIC NUMBER";

    else
        cout << "NON AUTOMORPHIC NUMBER";
}

void new_program(int number)
{
    size_t square = number * number;
    int digit_counter = 0;
    int temp = number;
    int multi = 1;

    while (temp != 0)
    {
        temp = temp / 10;
        digit_counter++;
    }

    for (int i = 1; i <= digit_counter; i++)
    {
        multi = multi * 10;
    }

    int reminder = square % multi;

    if (reminder == number)
        cout << "AUTOMORPHIC NUMBER";

    else
        cout << "NON AUTOMORPHIC NUMBER";
}