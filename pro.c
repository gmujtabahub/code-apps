#include <stdio.h>
#include <stdlib.h>

int main()

{
    system("clear");

    int password = 0;
    printf("Enter Password = ");
    scanf("%d", &password);
if(password != 123){
    do
    {

        printf("Invalid Password Try Again!\n");

        printf("Enter Password = ");
        scanf("%d", &password);
    } while (password != 123);
}
    printf("Welcome\n");
    return 0;
}