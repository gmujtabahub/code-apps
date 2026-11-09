#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int prime = 0;

    for (int a = 2; a < 20; a++)
    {
        prime = 1;
        for (int b = 2; b < a; b++)
        {
            if (a % b == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
            cout << a << endl;
    }
    return 0;
}