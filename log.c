#include <stdio.h>
#include <stdlib.h>

int main()

{

    system("clear");

    printf("+ Addition\n");
    printf("- Subtraction\n");
    printf("* Multiplication\n");
    printf("/ Division\n");
    printf("%% Reminder\n");

    int x;
    int y;

    char choice;

    printf("Enter your choice = ");
    scanf("%c", &choice);

    switch (choice)

    {

    case '+':

        printf("Enter two numbers = ");
        scanf("%d %d", &x, &y);
        printf("ADDITION = %d\n", x + y);
        break;

    case '-':

        printf("Enter two numbers = ");
        scanf("%d %d", &x, &y);
        printf("SUBTRACTION = %d\n", x - y);

        break;

    case '*':

        printf("Enter two numbers = ");
        scanf("%d %d", &x, &y);
        printf("MULTIPLICATION = %d\n", x * y);

        break;

    case '/':

        printf("Enter two numbers = ");
        scanf("%d %d", &x, &y);
        printf("DIVISION = %d\n", x / y);

        break;

    case '%':

        printf("Enter two numbers = ");
        scanf("%d %d", &x, &y);
        printf("REMINDER = %d\n", x % y);

        break;

    default:

        printf("INVALID\n");
    }

    return 0;
}