#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int words(char arr[], int l);
void reverse(char arr[], int l);

int main()
{
    system("cls");

    char arr[3][40] = {
        {"HASSAN ALI KHASKHELI"},
        {"GHULAM MUJTABA HASSAN ALI KHASKHELI"},
        {"MUHAMMAD MUDDASIR HASSAN ALI KHASKHELI"}};

    for (int i = 0; i < 3; i++)
    {
        int l = strlen(arr[i]);

        int w = words(arr[i], l);

        printf("%s ", arr[i]);

        reverse(arr[i], l);

        printf("%d = %d = %s\n", l, w, arr[i]);
    }

    return 0;
}

int words(char arr[], int l)
{
    int word = 0;
    int f = 0;
    while (arr[f] != '\0')
    {
        if (arr[f] == ' ')
            word++;
        f++;
    }
    return word + 1;
}

void reverse(char arr[], int l)
{
    for (int r = 0; r < l / 2; r++)
    {
        char s = arr[r];
        arr[r] = arr[l - 1 - r];
        arr[l - r - 1] = s;
    }
}