#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main()
{
    system("cls");

    char arr[4][10] = {
        {"  PUSH  "},
        {"  POP   "},
        {" DISPLAY"},
        {"  EXIT  "}
    };

    printf("\e[?25l");
    for (int i = 0; i < 4; i++)
    {
        printf("\033[%d;1H", i + 1);
        printf("%s", arr[i]);
    }

    int INDEX = 0;
    int ch;

    printf("\033[%d;1H", INDEX + 1);
    printf("\033[30;41m%s\033[0m", arr[INDEX]);

    while (ch != 13)
    {
        ch = _getch();

        printf("\033[%d;1H", INDEX + 1);
        printf("\033[30;0m%s\033[0m", arr[INDEX]);

        if (ch == 224)
        {
            ch = _getch();
            if (INDEX != 3 && ch == 80)
                INDEX++;

            if (INDEX != 0 && ch == 72)
                INDEX--;
        }
        printf("\033[%d;1H", INDEX + 1);
        printf("\033[30;41m%s\033[0m", arr[INDEX]);
        Beep(1047,400);
        // MessageBeep(MB_OK);
    }
    printf("\e[?25h");
    return 0;
}