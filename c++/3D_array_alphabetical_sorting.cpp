#include <iostream>
#include <string.h>

using namespace std;

#define RECORD 3
#define ROW 7
#define COLUMN 10

void string_copy(char destination[], char source[])
{
    int size = strlen(source); // cup
    int i;

    for (int j = 0; j < RECORD; j++)
    {
        for (i = 0; i < size; i++)
        {
            destination[i] = source[i];
        }
    }

    destination[i] = '\0';
}

int main()
{
    system("cls");

    char arr[RECORD][ROW][COLUMN] = {{{"loiness"}, {"cup"}, {"dinosaur"}, {"dog"}, {"crocodile"}, {"zebra"}, {"avocado"}},
                                     {{"giraffe"}, {"monkey"}, {"tiger"}, {"lizard"}, {"parrot"}, {"fish"}, {"shark"}},
                                     {{"hippo"}, {"rinosaurs"}, {"horse"}, {"goat"}, {"canel"}, {"sheep"}, {"T-rex"}}};
    for (int i = 0; i < ROW - 1; i++)
    {
        for (int k = 0; k < RECORD; k++)
        {
            for (int j = 0; j < ROW - 1; j++)
            {
                if (arr[k][j][0] > arr[k][j + 1][0])
                {
                    char t[10];
                    string_copy(t, arr[k][j]);
                    string_copy(arr[k][j], arr[k][j + 1]);
                    string_copy(arr[k][j + 1], t);
                }
            }
        }
    }

    for (int h = 0; h < RECORD; h++)
        for (int i = 0; i < ROW; i++)
        {
            cout << arr[h][i] << endl;
        }

    return 0;
}