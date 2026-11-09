#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string.h>

#define SIZE 10

typedef struct position
{
    int i, j, row, coloum;
} position;

void initDashboard(char dashBoardChars[][SIZE], int selected[][SIZE])
{
    for (int a = 0; a < SIZE; a++)
        for (int b = 0; b < SIZE; b++)
        {
            dashBoardChars[a][b] = '.';
            selected[a][b] = 0;
        }
}

void initWords(char dashBoardChars[][SIZE], char words[][10])
{
    for (int a = 2; a <= 6; a++) // HOUSE
        dashBoardChars[0][a] = words[0][a - 2];

    for (int b = 0; b <= 2; b++) // CAT
        dashBoardChars[9][b] = words[1][b];

    for (int c = 1; c <= 5; c++) // WORLD
        dashBoardChars[c][1] = words[4][c - 1];

    for (int d = 2; d <= 8; d++) // CRICKET
        dashBoardChars[d][8] = words[2][d - 2];

    for (int e = 4; e <= 9; e++) // HOCKEY
        dashBoardChars[7][e] = words[3][e - 4];

    for (int f = 1; f <= 6; f++) // PARROT
        dashBoardChars[f][f + 1] = words[5][f - 1];
}

void randomChars(char dashBoardChars[][SIZE], int selected[][SIZE])
{
    for (int a = 0; a < SIZE; a++)
        for (int b = 0; b < SIZE; b++)
            if (dashBoardChars[a][b] == '.')
            {
                dashBoardChars[a][b] = 'A' + rand() % 26;
                selected[a][b] = -1;
            }
}

void showDashboard(char dashBoardChars[][SIZE])
{
    for (int r = 0; r < SIZE; r++)
        for (int c = 0, col = 1; c < SIZE; c++, col++)
        {
            printf("\033[%d;%dH", r + 1, c + col);
            printf("%c", dashBoardChars[r][c]);
        }
}

void wordlist(char words[6][10])
{
    for (int i = 0; i < 6; i++)
    {
        printf("\033[%d;31H", i + 1);
        printf("[ ] %s", words[i]);
    }
}

int match(position pos[], int s, char words[][10], char dashboard[SIZE][SIZE])
{
    int b, w = 0;

    for (b = 0; b < 6; b++)
    {
        if (s != strlen(words[b]))
            continue;
        w = 0;
        for (int f = 0; f < strlen(words[b]); f++) // WORLD
        {
            for (int a = 0; a < s; a++)
            {
                if (dashboard[pos[a].i][pos[a].j] == words[b][f])
                {
                    w++;
                    break;
                }
            }
        }

        if (w == strlen(words[b]))
            break;
    }

    if (w != 0 && w == strlen(words[b]))
    {
        printf("\033[%d;31H", b + 1);
        printf("[.]");
        return b;
    }

    return -1;
}

int match_(position pos[], int s, char words[][10], char dashboard[SIZE][SIZE])
{
    int b, f;
    int u = 0;
    int found = 0;

    for (b = 0; b < 6; b++)
    {
        if (s != strlen(words[b]))
            continue;

        found = 0;
        for (f = 0; f < strlen(words[b]); f++)
        {
            if (dashboard[pos[f].i][pos[f].j] == words[b][f]) // CAT
            {
                found = 1;
                u++;
            }
        }

        if (found && u == strlen(words[b]))
            break;
    }

    if (found && u == strlen(words[b]))
    {
        printf("\033[%d;31H", b + 1);
        printf("[.]");
        return found;
    }

    return 0;
}

int main()
{
    system("cls");

    position pos[SIZE * SIZE] = {0};

    printf("\033[1;50H");
    printf("\033[1mGame Instructions:\033[0m");
    printf("\033[2;50H");
    printf("1.Use Arrows Keys to move cursor");
    printf("\033[3;50H");
    printf("2.Press Space to select word's Char & TAB key for cross word's Char");
    printf("\033[4;50H");
    printf("3.Press Enter to save selection");
    printf("\033[5;50H");
    printf("4.Press Esc key to unselect wrong words");
    printf("\033[6;50H");
    printf("5.Press 'q' Key To Quit Game");

    srand(time(NULL)); // dmyhmsm

    char arr[SIZE][SIZE];
    int selected[SIZE][SIZE];
    char words[6][10] = {
        {"HOUSE"},
        {"CAT"},
        {"CRICKET"},
        {"HOCKEY"},
        {"WORLD"},
        {"PARROT"}};

    printf("\033[?25l");

    initDashboard(arr, selected);
    initWords(arr, words);
    randomChars(arr, selected);
    wordlist(words);
    showDashboard(arr);

    // selected[7][8] = 2;

    int row = 1, coloum = 1;
    int i = 0, j = 0, wordCount = 0, s = 0, score = 0, _KEY = 0;
    int wordsFound[6] = {0};

    printf("\033[%d;%dH", row, coloum);
    printf("\033[30;41m%c\033[0m", arr[i][j]);

    time_t start, end;
    start = time(NULL);

    do
    {
        _KEY = _getch();

        if (_KEY == 224)
        {
            _KEY = _getch();

            if (selected[i][j] == 1)
            {
                printf("\033[%d;%dH", row, coloum);
                printf("\033[30;42m%c\033[0m", arr[i][j]); // print as green
            }
            else if (selected[i][j] == 0 || selected[i][j] == -1) // || selected[i][j] == 2
            {
                printf("\033[%d;%dH", row, coloum);
                printf("\033[30;0m%c\033[0m", arr[i][j]); // print as black
            }

            if (_KEY == 77)
                coloum <= 18 ? (coloum += 2, j++) : (coloum = 1, j = 0);

            else if (_KEY == 75)
                coloum >= 2 ? (coloum -= 2, j--) : (coloum = 19, j = 9);

            else if (_KEY == 80)
                row <= 9 ? (row++, i++) : (i = 0, row = 1);

            else if (_KEY == 72)
                row >= 2 ? (row--, i--) : (row = 10, i = 9);

            printf("\033[%d;%dH", row, coloum);
            printf("\033[30;41m%c\033[0m", arr[i][j]);
        }
        else if (_KEY == ' ' && selected[i][j] == 0) // || selected[i][j] == -2
        {
            pos[s].i = i;
            pos[s].j = j;
            pos[s].row = row;
            pos[s].coloum = coloum;

            printf("\033[%d;%dH", row, coloum);
            printf("\033[30;42m%c\033[0m", arr[i][j]); // print as green

            selected[i][j] = 1; // selected as green
            s++;
        }
        // else if (_KEY == ' ' && selected[i][j] == 2)
        // {
        //     pos[s].i = i;
        //     pos[s].j = j;
        //     pos[s].row = row;
        //     pos[s].coloum = coloum;

        //     printf("\033[%d;%dH", row, coloum);
        //     printf("\033[30;42m%c\033[0m", arr[i][j]); // print as green

        //     selected[i][j] = -2;
        //     s++;
        // }
        else if (_KEY == '\t' && selected[i][j] == 1)
        {
            pos[s].i = i;
            pos[s].j = j;
            pos[s].row = row;
            pos[s].coloum = coloum;

            printf("\033[%d;%dH", row, coloum);
            printf("\033[30;42m%c\033[0m", arr[i][j]); // print as green

            selected[i][j] = 1; // selected as green
            s++;
        }

        else if (_KEY == 27)
        {
            for (int z = 0; z < s; z++)
            {
                int ii = pos[z].i;
                int jj = pos[z].j;
                int rr = pos[z].row;
                int cc = pos[z].coloum;

                printf("\033[%d;%dH", rr, cc);
                printf("\033[30;0m%c\033[0m", arr[ii][jj]); // print as default (black)
                selected[ii][jj] = 0;                       // selected as unhighlighted
            }
            s = 0;
        }
        else if (_KEY == 13 && s > 0)
        {
            int wordIndex = match(pos, s, words, arr); // 1

            if (wordIndex >= 0) // struct, sel index, wordlist, dashboard
            {
                if (!wordsFound[wordIndex]) // wordsFound [6] = 0,1,0,0,0,0
                {
                    wordsFound[wordIndex] = 1; // word found
                    wordCount++;
                    score += 10;
                    s = 0;
                }
            }
        }

    } while (wordCount != 6 && _KEY != 'q');

    end = time(NULL);

    system("cls");
    printf("WORD SEARCH = %d\n", wordCount);
    printf("SCORE = %d\n", score);
    printf("TIME = %02d:%02d\n", (long)(end - start) / 60, (long)(end - start) % 60);

    printf("\033[?25h");

    return 0;
}