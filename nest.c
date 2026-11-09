#include <stdio.h>
#include <stdlib.h>

void abc(int choice);

int main()
{

    system("clear");

    printf("1. A-Z Program\n");
    printf("2. Vowel Program\n");
    printf("3. Consonant Program\n");

    int choice;

    printf("Enter Choice = ");
    scanf("%d", &choice);//2
    abc(choice);//oaramwter

    return 0;
}

void abc(int choice)//arguments
{

    for (char a = 'a'; a <= 'z'; a++)
    {
        if (choice == 1)
            printf("%c\n", a);

        if (choice == 2)
            if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
            {
                printf("%c\n", a);
            }
        if (choice == 3)
        {
            if (a != 'a' && a != 'e' && a != 'i' && a != 'o' && a != 'u')
            {
                printf("%c\n", a);
            }
        }
    }
}