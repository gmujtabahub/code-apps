#include <stdio.h>
#include <stdlib.h>

void touppcase(char arr[]);
void tolowcase(char arr2[]);
void reverse(char rev[]);

int getlength(char str[]);
int strcomp(char str[], char ch[]);
int polindrome(char arr[], char arr2[]);

char ltrim(char cha[]);
char rtrim(char cha[]);
char substr(char str[], int i, int j);
char trim(char ch[]);

#define SIZE 113

int main(int c, char *arg[])
{
    system("cls");

    // char arr[SIZE] = {"dad"};
    // char arr2[SIZE];

    char ch[] = {"ali"};

    // printf("Input String = ");
    // fgets(str, sizeof(str), stdin);

    // touppcase(arr);

    // tolowcase(arr2);

    // ltrim(ch);

    touppcase(ch);
    printf("x%sx", ch);

    // rtrim(ch);

    //  reverse(rev);
    // printf("%s", rev);

    //  int r = polindrome(arr, arr2);
    // if (r)
    //     printf("Polindrome word\n");
    // else
    //     printf("Non Polindrome Word\n");

    //  substr(str, 0, 3);

    // char ch1[] = {"Ali"};
    // char ch2[] = {"Ali"};
    // int r = strcomp(ch1, ch2);
    // if (r == 1)
    //     printf("equals\n");
    // else
    //     printf("not equal\n");

    return 0;
}

void touppcase(char arr[])
{
    int i = 0;

    while (arr[i] != '\0')
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }
        i++;
    }
}

void tolowcase(char arr2[])
{
    int a = 0;
    while (arr2[a] != '\0')
    {
        if (arr2[a] >= 'A' && arr2[a] <= 'Z')
        {
            arr2[a] = arr2[a] + 32;
        }
        a++;
    }
}

char ltrim(char ch[])
{
    int a = getlength(ch);

    int b = 0;

    while (ch[b] == ' ')
        b++;

    for (int i = 0; i < a; i++, b++)
    {
        ch[i] = ch[b];
    }
}

void reverse(char rev[])
{
    int b = getlength(rev);

    for (int i = 0; i < b / 2; i++)
    {
        char s = rev[i];
        rev[i] = rev[b - 1 - i];
        rev[b - 1 - i] = s;
    }
}

int getlength(char rev[])
{
    int a = 0;
    while (rev[a] != '\0' && rev[a] != '\n')
    {
        a++;
    }
    return a;
}

int polindrome(char arr[], char arr2[])
{
    int l = getlength(arr);

    // int p = 1;
    // for (int i = 1, j = l; i < l; i++, j--)
    // {
    //     if (arr[i] != arr[j])
    //         p = 0;
    // }
    // return p;

    for (int i = 0; i < l; i++)
    {
        arr2[i] = arr[l - 1 - i];
    }

    int r = strcomp(arr, arr2);

    return r;
}

char substr(char str[], int a, int b)
{
    int s = getlength(str) - 1;

    if (a + b <= s)
    {
        for (int i = 0; i < b; i++)
        {
            printf("%c", str[a + i]);
        }
    }
    else
        printf("Invalid Input\n");
}

int strcomp(char str[], char ch[])
{
    int a = getlength(str);
    int b = getlength(ch);

    int r = 0;

    if (a == b)
    {
        for (int i = 0; i < a; i++) // Ali
        {
            if (str[i] == ch[i])
            {
                r = 1;
            }
            else
            {
                r = 0;
                break;
            }
        }
    }
    return r;
}

char rtrim(char ch[])
{
    int size = getlength(ch);

    int i = size - 1;
    int space = 0;

    while (ch[i] == ' ')
    {
        space++;
        i--;
    }

    ch[size - space] = '\0';

    size = getlength(ch);
}

char trim(char ch[])
{
    int a = getlength(ch);

    int b = 0;

    for (int i = a; i > 0; i--)
    {
        while (ch[b] == ' ')
            b++;
    }

    for (int n = 0; n < a; n++, b++)
    {
        ch[n] = ch[b];
    }

    int size = getlength(ch);

    int i = size - 1;
    int space = 0;

    while (ch[i] == ' ')
    {
        space++;
        i--;
    }

    ch[size - space] = '\0';

    size = getlength(ch);

    
}