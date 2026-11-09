#include <iostream>

using namespace std;

void straight_triangle();
void reverse_triangle();

int main()
{
    system("cls");

    // straight_triangle();
    reverse_triangle();

    return 0;
}

void straight_triangle()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << " ";
        }

        for (int a = 1; a <= i; a++)
        {
            cout << "X ";
        }
        cout << "\n";
    }
}

void reverse_triangle()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        for (int a = 5; a >= i; a--)
        {
            cout << "X ";
        }
        cout << "\n";
    }
}