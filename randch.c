
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main()
{

    system("cls");

    // seed random number
    srand(time(NULL));

    int num = rand() % 100 + 1; // 1 to 10

    // printf("%d\n", num);

    printf("%c\n", 'a' + rand() % 26 );   
}