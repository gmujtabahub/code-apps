#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int main()

{

    system("cls");

    char arr[SIZE] = {"car"};
    char arr2[SIZE];

    int i;
    for (i = 0; i < SIZE; i++)
    {
        arr2[i] = arr[SIZE - 1 - i];
    }
    int a;
    for (int a = 0; a < SIZE; a++)
    {
        
        printf("%c ", arr2[a]);
    }
    a = arr[a];

    if (arr[SIZE] == a)
        printf("polindrome\n");

    else
        printf("non polindrome\n");

    return 0;
}