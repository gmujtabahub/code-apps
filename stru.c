#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct students
    {
        char name[50];
        int rollno;
        char grade;
        float per;        
    } stu;

int main()
{
    
    system("cls");

    stu s;

    scanf("%s", &s.name);
    scanf("%d", &s.rollno);
    scanf(" %c", &s.grade);
    scanf("%f", &s.per);

    printf("%s\n", s.name);
    printf("%d\n", s.rollno);
    printf("%c\n", s.grade);
    printf("%f\n", s.per);
    return 0;
}