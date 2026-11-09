#include <stdio.h>
#include <stdlib.h>

int year_to_seconds(int i);
int seconds_to_year(int a);

int main()

{

    system("clear");

    // int birthyear;
    // printf("Enter Your Birthyear = ");
    // scanf("%d", &birthyear);
    // year_to_seconds(birthyear);

    int seconds;
    printf("Enter Seconds = ");
    scanf("%d", &seconds);
    seconds_to_year(seconds);

    return 0;
}

int year_to_seconds(int birthyear)

{

    int currentyear = 2026;

    int age = currentyear - birthyear;

    printf("Age = %d\n", age);//16

    int month = age * 12;

    printf("Month = %d\n", month);

    int day = age * 365;

    printf("Days = %d\n", day);

    int week = day / 7;

    printf("Week = %d\n", week);

    int hour = day * 24;

    printf("Hour = %d\n", hour);

    int minute = hour * 60;

    printf("Minutes = %d\n", minute);

    int second = minute * 60;

    printf("Seconds = %d\n", second);
}

int seconds_to_year(int seconds)

{

    int minute = seconds / 60;
    int hour = minute / 60;
    int day = hour / 24;
    int age = day / 365;
    int week = day / 7;
    int month = age * 12;

    printf("Minute = %d\n", minute);

    printf("Hour = %d\n", hour);
    printf("Week = %d\n", week);
    printf("Day = %d\n", day);
    printf("Month = %d\n", month);
    printf("Age = %d\n", age);

} // 504576000