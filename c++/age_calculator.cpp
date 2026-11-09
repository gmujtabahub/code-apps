#include <iostream>

using namespace std;

#define CURRENT_YEAR 2026

int main()
{
    system("cls");

    int year;

    cout << "Enter Birthyear = ";

    cin >> year;

    int age = CURRENT_YEAR - year;

    cout << "Age = " << age << endl;

    int months = age * 12;

    cout << "Months = " << months << endl;

    int days = age * 365;

    cout << "Days = " << days << endl;

    int weeks = months * 4;

    cout << "Weeks = " << weeks << endl;

    int hours = days * 24;

    cout << "Hours = " << hours << endl;

    int minutes = hours * 60;

    cout << "Minutes = " << minutes << endl;

    int seconds = minutes * 60;

    cout << "Seconds = " << seconds << endl;

    return 0;
}