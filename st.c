#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

typedef struct students
{
    char name[20];
    int rollno;
    char grade;
    float per;
} students;

int main()
{
    students s[SIZE];

    int input;
    int i = 0;

    do
    {
        system("cls");

        printf("[1] ADD STUDENT\n");
        printf("[2] DISPLAY STUDENT\n");
        printf("[3] EXIT\n");

        printf("Enter Input = ");
        scanf("%d", &input);

        getchar();

        if (input == 1)
        {
            if (i < SIZE)
            {
                system("cls");
                printf("Enter Student Name = ");
                fgets(s[i].name, sizeof(s[i]).name, stdin);

                printf("Enter Student Roll No = ");
                scanf("%d", &s[i].rollno);

                printf("Enter Student Grade = ");
                scanf(" %c", &s[i].grade);

                printf("Enter Student Percentage = ");
                scanf("%f", &s[i].per);

                i++;
            }
            else
                printf("EXCEED LIMIT\n");
        }
        else if (input == 2)
        {
            system("cls");
            for (int c = 0; c < i; c++)
            {
                printf("Student Name = %s", s[c].name);
                printf("Student Roll No = %d\n", s[c].rollno);
                printf("Student Grade = %c\n", s[c].grade);
                printf("Student Percentage = %.2f\n", s[c].per);
                printf("===================================\n");
            }

            printf("Press Enter to continue......");
            getchar();
        }

    } while (input != 3);

    return 0;
}