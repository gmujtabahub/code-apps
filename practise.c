#include <stdio.h>
#include <stdlib.h>

#define SIZE 2

int main()
{
    system("cls");

    typedef struct students
    {
        char name[20];
        int rollno;
        char grade;
        float per;
    } students;

    students s[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter Name = ");
        // scanf("%46s", &s[i].name);
        fgets(s[i].name,sizeof(s[i].name),stdin);

        printf("Enter Roll No = ");
        scanf("%d", &s[i].rollno);

        printf("Enter Grade = ");
        scanf(" %c", &s[i].grade);

        printf("Enter Percentage = ");
        scanf("%f", &s[i].per);

        printf("\n");
        system("cls");
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%s\n", s[i].name);
        printf("%d\n", s[i].rollno);
        printf("%c\n", s[i].grade);
        printf("%.2f\n", s[i].per);

        printf("\n");
    }
    return 0;
}