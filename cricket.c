#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("clear");
    char name1[50];
    char name2[50];
    char name3[50];
    
    int  s1,s2,s3;

    printf("ENTER CRICKET PLAYER NAME ");
    scanf(" %[^\n]",name1);
    printf("ENTER CRICKET PLAYER SCORE ");
    scanf("%d",&s1);
    
    
    printf("ENTER CRICKET PLAYER NAME ");
    scanf(" %[^\n]",name2);
    printf("ENTER CRICKET PLAYER SCORE ");
    scanf("%d",&s2);
    

    printf("ENTER CRICKET PLAYER NAME ");
    scanf(" %[^\n]",name3);
    printf("ENTER CRICKET PLAYER SCORE ");
    scanf("%d",&s3);
    system("clear");

    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf("\tCRICKET MASTER\n");
    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf("\t%s\t\t\t%d\n",name1,s1);
    printf("\t%s\t\t%d\n",name2,s2);
    printf("\t%s\t\t\t%d\n",name3,s3);
    
    printf("===========================================================\n");
    return 0;

}