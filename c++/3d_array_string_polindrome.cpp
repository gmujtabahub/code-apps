#include <iostream>
#include <string.h>

using namespace std;

#define RECORD 3
#define ROW 3
#define COLUMN 10

void string_polindrome(char arr[RECORD][ROW][COLUMN], int i, int j);

int main()
{
    system("cls");

    int v = 0, f = 0;
    char arr[RECORD][ROW][COLUMN] = {
        {{"popo"},
         {"momo"},
         {"ghulam"}},

        {{"did"},
         {"dada"},
         {"madam"}},

        {{"tuc"},
         {"deed"},
         {"ball"}}};

    for (int i = 0; i < RECORD; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            f = 1;
            v = strlen(arr[i][j]) - 1;

            for (int a = 0; a < v; a++)
            {
                if (arr[i][j][a] != arr[i][j][v])
                {
                    f = 0;
                    break;
                }
               
                v--;
            }
            
            if (f == 1)
                string_polindrome(arr, i, j);
        }
    }

    return 0;
}

void string_polindrome(char arr[RECORD][ROW][COLUMN], int i, int j)
{
    for (int a = 0; a < COLUMN; a++)
    {
        cout << arr[i][j][a];
    }
    cout << endl;
}