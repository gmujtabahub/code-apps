#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char replace(char ch[], char ch2[], char ch3[]);
int main()
{
    system("cls");

    char ch[] = {"HASSAN"};
    char ch2[] = {"HAS"};
    char ch3[] = {"X"};

    replace(ch, ch2, ch3);

    printf("%s", ch);
    return 0;
}

char replace(char ch[], char ch2[], char ch3[])
{
    int a = 0;

    int len = strlen(ch);
    int len2 = strlen(ch2);
    int len3 = strlen(ch3);

    int i = 0;

    for (i = 0; i < len; i++)
    {
        int m = 1;
        for (int g = 0; g < len2; g++)
        {
            if (ch[i + g] != ch2[g])
            {
                m = 0;
            }
        }
        if (m)
        {
            for (int l = 0; l < len3; l++)
            {
                ch[i + l] = ch3[l];
            }
        }
    }

    ch[i] = '\0';
}