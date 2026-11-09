#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    system("cls");

    char arr[4][10] = {
        {"  PUSH  "},
        {"  POP   "},
        {" DISPLAY"},
        {"  EXIT  "}};

    printf("\e[?25l");
    for (int i = 0; i < 4; i++)
    {
        printf("\033[%d;1H", i + 1);
        printf("%s ", arr[i]);
    }

    int INDEX = 0;
    char ch;

    do
    {
        printf("\033[%d;1H", INDEX + 1);
        printf("\033[31;0m%s\033[0m", arr[INDEX]);

        if (INDEX != 3 && ch == 's')
            INDEX++;

        if (INDEX != 0 && ch == 'w')
            INDEX--;

        printf("\033[%d;1H", INDEX + 1);
        printf("\033[31;41m%s\033[0m", arr[INDEX]);

        ch = _getch();
    } while (ch != 'q');
    printf("\e[?25h");
    return 0;
}