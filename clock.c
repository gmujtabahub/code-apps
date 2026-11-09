#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()

{
    system("clear");

    for (int h = 0; h < 2; h++)
    {
        for (int m = 0; m < 5; m++)
        {
            for (int s = 0; s < 59; s++)
            {
                printf("\r%d: %d: %d", h, m, s);
                fflush(stdout);
                usleep(10000);
            }
        }
    }
    printf("\n");
    return 0;
}