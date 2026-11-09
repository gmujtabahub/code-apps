#include <iostream>

using namespace std;

int add_two_numbers(int num1, int num2)
{
    return num1 + num2;
}

int add_two_numbers(float num1, float num2)
{
    return num1 + num2;
}

int add_two_numbers(long num1, long num2)
{
    return num1 + num2;
}

int add_two_numbers(double num1, double num2)
{
    return num1 + num2;
}

int main()
{
    system("cls");

    int s = add_two_numbers(10, 10);
    cout << s << endl;
    int su = add_two_numbers(10.5, 10.5);
    cout << su << endl;
    int sum = add_two_numbers(1000, 1000);
    cout << sum << endl;
    int sume = add_two_numbers(10.555, 10.555);
    cout << sume << endl;

    return 0;
}