#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    system("clear");

    char c;

    printf("Enter character = ");
    scanf("%c", &c);

    c = toupper(c); // A

    switch (c)

    {

    case 'E':

    case 'I':

    case 'O':

    case 'U':

    case 'A':

        printf("It is vowel\n");

        break;

    default:

        printf("It is consonant\n");
    }

    return 0;
}