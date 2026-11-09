#include <iostream>
using namespace std;

typedef struct Salary
{
    int salary;

    void input()
    {
        cout << "Enter Basic Salary = ";
        cin >> salary;
        display();
    }

    void display()
    {
        system("cls");

        cout << "======================" << endl;
        cout << "    SALARY PROGRAM    " << endl;
        cout << "======================" << endl;
        cout << "----------------------" << endl;
        cout << "Basic Salary = " << salary << endl;
        cout << "Medical Allowance = " << salary * 0.10 << endl;
        cout << "House Allowance = " << 15000 << endl;
        cout << "Gross Salary = " << salary + 15000 << endl;
        cout << "Tax = " << (salary + 15000) * 0.05 << endl;
        cout << "Net Salary = " << (salary + 15000) - (salary + 15000) * 0.05 + (salary * 0.10) << endl;
        cout << "----------------------" << endl;
    }
} salary;

int main()
{
    system("cls");

    salary s;

    s.input();

    return 0;
}