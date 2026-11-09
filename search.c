#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int match(char word[], char listOfWords[5][10])
{
    int a;
    int i;
    int f;
    for (i = 0; i < 5; i++)
    {
        int b = strlen(listOfWords[i]);

        a = 0;

        f = 1;

        while (a != b)
        {
            if (word[a] != listOfWords[i][a])
                f = 0;
            a++;
        }

        if (f == 1)
            break;
    }

    // printf("%d", f);

    return f;
}
int main()
{
    system("cls");

    char listOfWords[5][10] = {
        {"HOUSE"},
        {"CAT"},
        {"CRICKET"},
        {"HOCKEY"},
        {"WORLD"}};
    int words = 0;
    char word[6] = {"CAT"};
    do
    {

        int r = match(word, listOfWords);

        if (r == 1)
            words++;

        printf("%d\n", words);
    } while (words != 1);
    return 0;
}