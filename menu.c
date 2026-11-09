#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    printf("What do you want\n");
    printf("xxxxxxxxxxxxxxxxxxxxx\n");

    printf("1. ADDITION\n");

    printf("2. SUBTRACTION\n");

    printf("3. MULTIPLICATION\n");

    printf("4. DIVISION\n");

    printf("5. REMINDER\n");

    printf("6. EXIT\n");

    int choice;
    scanf("%d",&choice);

    if(choice == 1)
    {
        int addi;
        int tion;

        printf("Enter two numbers = ");
        scanf("%d %d",&addi,&tion);

        printf("Addition = %d\n",addi + tion);
    }

    if(choice == 2)
    {
        int sub;
        int traction;

        printf("Enter two numbers = ");
        scanf("%d %d",&sub,&traction);

        printf("subtraction = %d\n",sub - traction);
    }

    if(choice == 3)
    {
        int mul;
        int tiply;

        printf("Enter two numbers = ");
        scanf("%d %d",&mul,&tiply);

        printf("Mulitiply = %d\n",mul * tiply);
    }

    if(choice == 4)
    {
        int div;
        int ision;

        printf("Enter two numbers = ");
        scanf("%d %d",&div,&ision);

        printf("Divison = %d\n",div / ision);
    }

    if(choice == 5)
    {
        int rem;
        int inder;

        printf("Enter two numbers = ");
        scanf("%d %d",&rem,&inder);

        printf("Reminder = %d\n",rem % inder);
    }

    if(choice == 6)
    {
         
    }

    return 0;

}