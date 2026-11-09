#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int number;

    cout << "Enter Number = ";

    cin >> number; 

    int temp = number;
    int sum = 0;

    while (temp != 0)
    {
        int num = temp % 10; 
        temp = temp / 10;    

        if (temp != 0)
            sum = num + temp; 
    }

    if (number % sum == 0)
        cout << "HARSHAD NUMBER";

    else
        cout << "NON HARSHAD NUMBER";

    return 0;
}