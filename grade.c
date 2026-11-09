#include<stdio.h>
#include<stdlib.h>

int main()

{

    system("clear");

    int grade;

    printf("Enter Percentage = ");
    scanf("%d",&grade);

    if(grade>=90 && grade<=100)
    {
        printf("Your grade is A+\n");
    }

    if(grade>=80 && grade<=89)
    {
        printf("Your grade is A\n");
    }

    if(grade>=70 && grade<=79)
    {
        printf("Your grade is B+\n");
    }

    if(grade>=60 && grade<=69)
    {
        printf("Your grade is B\n");
    }

    if(grade>=50 && grade<=59)
    {
        printf("Your grade is C\n");
    }

    if(grade<=50)
    {
        printf("Your grade is Failed!\n");
    }

    return 0;

}