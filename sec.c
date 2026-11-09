#include <stdio.h>
#include <stdlib.h>

int main()

{

    system("clear");

    int seconds;

    printf("Enter Seconds = ");
    scanf("%d", &seconds); // 1

    int hour = seconds / 3600;//1/3600=
    seconds  = seconds % 3600;//61%3600=61
    int minutes = seconds / 60;//61/60=1
    int sec = seconds % 60;//61%60=1
    if(hour != 0)
    {
    printf("Hours   = %d\n", hour);
    }
    if(minutes != 0)
    {
    printf("Minutes = %d\n", minutes);
    }
    if(seconds != 0)
    {
    printf("Seconds = %d\n", sec);
    }
    return 0;
}