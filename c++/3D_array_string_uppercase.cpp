#include <iostream>
#include <string.h>

using namespace std;

#define RECORD 3
#define ROW 3
#define COLUMN 10

int main()
{
    system("cls");

    char arr[RECORD][ROW][COLUMN] = {
        {{"popo"},
         {"momo"},
         {"ghulam"}},

        {{"did"},
         {"dada"},
         {"Madam"}},

        {{"tuc"},
         {"deed"},
         {"ball"}}};

    for (int i = 0; i < RECORD; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            for (int a = 0; a < COLUMN; a++)
            {
                if (arr[i][j][a] >= 'a' && arr[i][j][a] <= 'z')
                    arr[i][j][a] = arr[i][j][a] - 32;

                cout << arr[i][j][a];
            }
            cout << endl;
        }
    }

    return 0;
}