#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define DOWN 80
#define UP 72
#define RIGHT 77
#define LEFT 75

int getWin(char arr[][3], char ch);

int main()
{
    system("cls");

    char arr[][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    printf("\033[?25l");

    char x[50];
    printf("Enter X Player = ");
    scanf("%49s", x);

    char o[50];
    printf("Enter O Player = ");
    scanf("%49s", o);

    system("cls");
    printf("X: %s\tO: %s", x, o);

    int a = 0;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        a = 0;
        for (j = 0; j < 3; j++)
        {
            printf("\033[%d;%dH", i + 3 + i, j + 1 + a);
            printf("\033[33;42m %c \033[0m", arr[i][j]);
            a += 4;
        }
    }

    int r = 3;
    int col = 1;

    int key = 1;
    char player;

    int moves = 0;
    i = j = 0;

    printf("\033[%d;%dH", r, col);
    printf("\033[30;41m %c \033[0m", arr[i][j]);

    do
    {
        key = _getch(); // x

        if (key == 224)
        {
            key = _getch();

            printf("\033[%d;%dH", r, col);
            printf("\033[30;42m %c \033[0m", arr[i][j]);

            switch (key)
            {
            case DOWN:
                if (r != 7)
                {
                    r += 2;
                    i++;
                }
                break;
            case UP:
                if (r >= 5)
                {
                    r -= 2;
                    i--;
                }
                break;
            case RIGHT:
                if (col < 10)
                {
                    col += 5;
                    j++;
                }
                break;
            case LEFT:
                if (col > 3)
                {
                    col -= 5;
                    j--;
                }
                break;
            }
            printf("\033[%d;%dH", r, col);
            printf("\033[30;41m %c \033[0m", arr[i][j]);
        }

        if (key > 'a' && key < 'z')
            key -= 32; // X

        if (player != key)
        {
            if (key == 88 || key == 79)
            {
                if (arr[i][j] != 88 && arr[i][j] != 79)
                {
                    arr[i][j] = key;
                    moves++;
                    player = key;
                    printf("\033[%d;%dH", r, col);
                    printf("\033[30;41m %c \033[0m", arr[i][j]);
                }
            }
        }

        if (getWin(arr, 'X'))
        {
            system("cls");
            printf("%s won !\n", x);
            break;
        }
        else if (getWin(arr, 'O'))
        {
            system("cls");
            printf("%s won !\n", o);
            break;
        }
        else if (moves == 9)
        {
            system("cls");
            printf("DRAWN !\n");
            break;
        }

    } while (key != 27);

    if (key == 27)
        system("cls");

    printf("\033[?25h");

    return 0;
}

int getWin(char arr[][3], char ch)
{
    for (int c = 0; c < 3; c++)
    {
        if (arr[c][0] == ch && arr[c][1] == ch && arr[c][2] == ch) // check rows
            return 1;

        else if (arr[0][c] == ch && arr[1][c] == ch && arr[2][c] == ch) // check cols
            return 1;
    }

    if (arr[0][0] == ch && arr[1][1] == ch && arr[2][2] == ch)
        return 1;
    else if (arr[0][2] == ch && arr[1][1] == ch && arr[2][0] == ch)
        return 1;

    return 0;
}