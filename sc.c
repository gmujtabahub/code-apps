#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>

int main()
{
    system("cls");

    char arr[4][20] = {
        {"   PUSH   "},
        {"   POP    "},
        {"  DISPLAY "},
        {"   EXIT   "}};

    printf("\e[?25l"); // hide cursor
    do
    {
        for (int i = 0; i < 4; i++)
        {
            printf("\033[30;41m%s\033[0m", arr[i]); // \033[textcolor;backgroundcolorm %s \033[0m
            sleep(1);
            printf("\r\033[30;0m%s\033[0m", arr[i]); // \033[textcolor;backgroundcolorm %s \033[0m
            printf("\n");
            fflush(stdout);
        }
        system("cls");
    } while (_getch() != 'x');

    printf("\e[?25h"); // show cursor

    return 0;
}