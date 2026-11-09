#include <iostream>

using namespace std;

int main()
{
    system("cls");

    int prime = 1;

    for (int i = 2; i < 20; i++)
    {
        prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
            cout << i << " ";
    }
    return 0;
}