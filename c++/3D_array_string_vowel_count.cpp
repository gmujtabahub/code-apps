#include <iostream>
#include <string.h>

using namespace std;

#define RECORD 3
#define ROW 3
#define COLUMN 10

int main()
{
    system("cls");

    int c = 0;
    char arr[RECORD][ROW][COLUMN] = {
        {{"popo"},
         {"momo"},
         {"ghulam"}},

        {{"did"},
         {"dada"},
         {"Madam"}},

        {{"tuc"},
         {"dEed"},
         {"ball"}}};

    for (int i = 0; i < RECORD; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            for (int a = 0; a < COLUMN; a++)
            {
                if (arr[i][j][a] >= 'a' && arr[i][j][a] <= 'z')
                    arr[i][j][a] = arr[i][j][a] - 32;

                if (arr[i][j][a] == 'A' || arr[i][j][a] == 'E' || arr[i][j][a] == 'I' || arr[i][j][a] == 'O' || arr[i][j][a] == 'U')
                    c++;

                cout << arr[i][j][a];
            }
            cout << " = " << c << endl;
            c = 0;
        }
    }

    return 0;
}