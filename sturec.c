#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 3

int i = 2;

typedef struct students
{
    char name[20];
    int rollno;
    char grade;
    float per;
} students;

void add_student(students s[]);
void display_student(students s[]);
void search_record(students s[]);
void edit_record(students s[]);
void delete_record(students s[]);

int main()
{
    students s[SIZE] = {

        // 0 - location record
        {.name = "Hassan Ali\n",
         .rollno = 1,
         .grade = 'A',
         .per = 88.5},

        // 1 - location record
        {.name = "M M\n",
         .rollno = 2,
         .grade = 'A',
         .per = 99.5}

    };

    // s[i] = (struct students){
    //      .name = "Hassan",
    //      .rollno = 1,
    //      .grade = 'A',
    //      .per = 77.5
    // };

    do
    {
        system("cls");

        printf("[1] ADD STUDENT\n");
        printf("[2] DISPLAY STUDENT\n");
        printf("[3] Search RECORD\n");
        printf("[4] EDIT RECORD\n");
        printf("[5] Delete RECORD\n");
        printf("[6] EXIT\n");

        int input;
        printf("Enter Input = ");
        scanf("%d", &input); // 5

        getchar();

        switch (input)
        {
        case 1:
            add_student(s);
            break;

        case 2:
            display_student(s);
            break;

        case 3:
            search_record(s);
            break;

        case 4:
            edit_record(s);
            break;

        case 5:
            delete_record(s);
        }
    } while (input != 6);
    return 0;
}
void add_student(students s[])
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

void display_student(students s[])
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

void search_record(students s[])
{
    int roll;
    printf("Search Roll No = ");
    scanf("%d", &roll); // 1
    getchar();

    system("cls");

    int f = 0;
    for (int c = 0; c < i; c++)
    {
        if (roll == s[c].rollno)
        {
            f = 1;
            system("cls");
            printf("Student Name = %s", s[c].name);
            printf("Student Roll No = %d\n", s[c].rollno);
            printf("Student Grade = %c\n", s[c].grade);
            printf("Student Percentage = %.2f\n", s[c].per);
        }
    }

    if (f == 0)
        printf("invalid record......");

    printf("Press Enter to continue......");
    getchar();
}

void edit_record(students s[])
{
    int roll;
    printf("Search Roll No = ");
    scanf("%d", &roll); // 2
    getchar();

    system("cls");

    for (int c = 0; c < i; c++)
    {
        if (roll == s[c].rollno)
        {
            system("cls");
            printf("Enter Student Name = ");
            fgets(s[c].name, sizeof(s[c]).name, stdin);

            printf("Enter Student Roll No = ");
            scanf("%d", &s[c].rollno);

            printf("Enter Student Grade = ");
            scanf(" %c", &s[c].grade);

            printf("Enter Student Percentage = ");
            scanf("%f", &s[c].per);
        }
    }
}

void delete_record(students s[])
{
    int roll;
    printf("Search Roll No = ");
    scanf("%d", &roll); // 1
    getchar();
    int a = 0;

    system("cls");

    for (int c = 0; c < i; c++)
    {
        if (roll == s[c].rollno)
        {
            for (int d = c; d < i; d++)
            {
                s[c + a] = s[c + a + 1];
                a++;
            }
            i--;
        }
    }
}