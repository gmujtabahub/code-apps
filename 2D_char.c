#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    system("cls");
    char arr[][4] = {
        {"   "},
        {"   "},
        {"   "}};

    printf("\e[?25l");

    int i, j, c;

    for (i = 0; i < 3; i++)
    {
        c = 0;

        for (j = 0; j < 3; j++)
        {
            printf("\033[%d;%dH", i + 3 + i, j + 1 + c);
            printf("\033[33;42m %c \033[0m", arr[i][j]);
            c += 4;
        }
    }

    int row = 3;
    int coloum = 1;
    int ch = 1;

    i = 0;
    j = 0;
    c = 0;

    printf("\033[3;1H");
    printf("\033[30;41m %c \033[0m", arr[i][j]);

    do
    {
        while (ch != 80 && ch != 72)
        {
            if (c == 1)
                ch = _getch();

            if (ch == 'x' || ch == 'o')
            {
                if (arr[i][j] != 'x' || arr[i][j] != 'o')
                {
                    arr[i][j] = ch;
                }
            }

            printf("\033[%d;%dH", row, coloum);
            printf("\033[30;42m %c \033[0m", arr[i][j]);

            if (ch == 224)
            {
                ch = _getch();

                if (ch == 77 && coloum < 10)
                {
                    coloum += 5;
                    j++;
                }

                if (ch == 75 && coloum > 3)
                {
                    coloum -= 5;
                    j--;
                }
            }

            printf("\033[%d;%dH", row, coloum);
            printf("\033[30;41m %c \033[0m", arr[i][j]);

            c = 1;
        }

        printf("\033[%d;%dH", row, coloum);
        printf("\033[30;42m %c \033[0m", arr[i][j]);

        if (ch == 80 && row != 7)
        {
            row += 2;
            i++;
        }

        if (ch == 72 && row >= 5)
        {
            row -= 2;
            i--;
        }

        printf("\033[%d;%dH", row, coloum);
        printf("\033[30;41m %c \033[0m", arr[i][j]);

        ch = _getch();

    } while (ch != 13);

    printf("\e[?25h");
    printf("\n\n\n\n\n\n\n\n\n");

    return 0;
}