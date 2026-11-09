#include <iostream>
#include <string.h>

using namespace std;

#define RECORD 3
#define ROW 3
#define COLUMN 10

int main()
{
    system("cls");

    int v, z, s = 0, r;
    char arr[RECORD][ROW][COLUMN] = {
        {{"p"},
         {"d"},
         {"g"}},

        {{"d"},
         {"d"},
         {"M"}},

        {{"t"},
         {"d"},
         {"b"}}};

    for (int i = 0; i < RECORD; i++) // 0
    {
        for (int j = 0; j < ROW; j++) // 0
        {
            v = strlen(arr[i][j]);      // 3
            for (int a = 0; a < v; a++) // 3
            {
                if (a == v - 1)
                {
                    if (v >= s)
                    {
                        r = v;
                        s = v;
                    }
                }
            }
        }
    }

    for (int i = 0; i < RECORD; i++) // 0
    {
        for (int j = 0; j < ROW; j++) // 0
        {
            z = strlen(arr[i][j]);      // 3
            for (int a = 0; a < z; a++) // 3
            {
                if (z == r)
                    cout << arr[i][j][a];
            }
            if (z == r)
                cout << endl;
        }
    }

    return 0;
}
