#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("clear");

    int sec;

    printf("Enter Seconds = ");
    scanf("%d"  , &sec);

    printf("Minutes = %d\n", sec / 60);
    printf("Hours   = %d\n", sec / 3600);
    printf("Days    = %d\n", sec / 86400);
    printf("Months  = %d\n", sec / 2592000);
    printf("Age     = %d\n", sec / 31536000);

    return 0;
}