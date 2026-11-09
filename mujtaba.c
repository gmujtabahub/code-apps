#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");

    char name[50];
    
    int age;
    int roll_no;
    int class;
    
    printf("Enter Your Name: ");
    scanf("%[^\n]",name);

    printf("Enter Your Age: ");
    scanf("%d",&age);

    printf("Enter Your Roll No: ");
    scanf("%d",&roll_no);

    printf("Enter Your Class: ");
    scanf("%d",&class);
    
    system("clear");
    
    printf("Name : %s\n",name);
    printf("Age : %d\n",age);
    printf("Roll No:%d\n",roll_no);
    printf("Class: %d\n", class);
    
    
    return 0;
}
