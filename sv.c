#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    char arr[3][100] = {};//has //ghul //mud

    for (int s = 0; s < 3; s++)
    {
        printf("Enter String = ");
        fgets(arr[s], sizeof(arr[s]), stdin);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < sizeof(arr[i]); j++)
        {
            char s = arr[i][j];
            if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U')
            {
                printf("%c ", s);
            }
        }
        printf("\n");
    }
    return 0;
}