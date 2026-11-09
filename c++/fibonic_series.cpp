#include <iostream>

using namespace std;

int main()
{
    system("cls"); // 1 1 2 3 5 8 13 21 34 55

    int next = 1, f = 0;

    for (int i = 0; i < 10; i++) // 3
    {
        int temp = next;     // 3
        cout << temp << " "; // 1 1 2 3
        next = f + temp;     // 5
        f = temp;            // 3
    }

    return 0;
}