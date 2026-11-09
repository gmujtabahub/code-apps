#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    char character;

    printf("Enter your char = ");
    scanf("%c",&character);

    if(character == 'a' || character =='e' || character =='i' || character == 'o' || character =='u')

    {

        printf("It is a vowel");

    }

    return 0;
    
}