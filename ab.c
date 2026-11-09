#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


void main()
{

    system("cls");
    time_t t1, t2;
    t1 = time(NULL);
    sleep(1);
    t2 = time(NULL);

    printf("%d", t2 - t1);
}