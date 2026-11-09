#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()

{

    system("clear");
    int choice;

    printf("Enter Number ");
    scanf("%d", &choice);

    char c;

    printf("Enter character = ");
    scanf(" %c", &c);

    printf("%d\n",choice);
    printf("%c\n",c);
    //    if (choice == 10)
    // {
    //     char c;

    //     printf("Enter character = ");
    //     scanf(" %c", &c);

    //     c = toupper(c);

    //     switch (c)

    //     {

    //     case 'E':

    //     case 'I':

    //     case 'O':

    //     case 'U':

    //     case 'A':

    //         printf("It is vowel\n");

    //         break;

    //     default:

    //         printf("It is consonant\n");
    //     }
    // }

    return 0;
}