#include <iostream>
#include <string.h>

using namespace std;

#define RECORD 3
#define ROW 3
#define COLUMN 10

int main()
{
    system("cls");

    int c = 0, v = 0;
    char arr[RECORD][ROW][COLUMN] = {
        {{"popo"},
         {"dodo"},
         {"ghulam"}},

        {{"did"},
         {"dad"},
         {"Madam"}},

        {{"tuc"},
         {"dEed"},
         {"ball"}}};

    for (int i = 0; i < RECORD; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            v = strlen(arr[i][j]);
            for (int a = 0; a < v; a++)
            {
                c++;
            }
        }
    }

    cout << "Count Of All Strings Words = " << c << endl;

    return 0;
}
