#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int number;

    printf("Enter Number = ");
    scanf("%d", &number);
    if(number <=999)
    {

    int hundreds = number / 100;
    int tens = number / 10 % 10;
    int ones = number % 10;

    switch (hundreds)

    {

    case 1:
        printf("one hundred\t");
        break;

    case 2:
        printf("two hundred\t");
        break;

    case 3:
        printf("three hundred\t");
        break;

    case 4:
        printf("four hundred\t");
        break;

    case 5:
        printf("five hundred\t");
        break;

    case 6:
        printf("six hundred\t");
        break;

    case 7:
        printf("seven hundred\t");
        break;

    case 8:
        printf("eight hundred\t");
        break;

    case 9:
        printf("nine hundred\t");
        break;
    }
    if(tens == 1)
    {

    switch (ones)
    {

    case 0:
        printf("ten\t");
        break;
    case 1:
        printf("eleven\t");
        break;

    case 2:
        printf("twelve\t");
        break;

    case 3:
        printf("thirteen\t");
        break;

    case 4:
        printf("fourteen\t");
        break;

    case 5:
        printf("fifteen\t");
        break;

    case 6:
        printf("sixteen\t");
        break;

    case 7:
        printf("seventeen\t");
        break;

    case 8:
        printf("eighteen\t");
        break;

    case 9:
        printf("ninteen\t");
        break;
    }
}
else{
    switch (tens)
    {
    case 2:
        printf("twenty\t");
        break;

    case 3:
        printf("thirty\t");
        break;

    case 4:
        printf("forty\t");
        break;

    case 5:
        printf("fifty\t");
        break;

    case 6:
        printf("sixty\t");
        break;

    case 7:
        printf("seventy\t");
        break;

    case 8:
        printf("eighty\t");
        break;

    case 9:
        printf("ninety\t");
        break;
    }

    switch (ones)
    {

    case 1:
        printf("one\t");
        break;

    case 2:
        printf("two\t");
        break;

    case 3:
        printf("three\t");
        break;

    case 4:
        printf("four\t");
        break;

    case 5:
        printf("five\t");
        break;

    case 6:
        printf("six\t");
        break;

    case 7:
        printf("seven\t");
        break;

    case 8:
        printf("eight\t");
        break;

    case 9:
        printf("nine\t");
        break;
    }
}
}

else 
printf("INVALID INPUT\n");

    return 0;
}