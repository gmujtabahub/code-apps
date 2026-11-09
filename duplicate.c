#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int arr[] = {0, 1, 0, 1};

    int i = 0;
    int m;

    while (i < sizeof(arr) / 4)
    {
        for (int x = 0; x < i; x++)
        {
            m = 0;
            if (arr[x] == arr[i])
            {
                m = 1;
                break;
                // int g;
                // int n = arr[i];
                // for (g = 0; g < i; g++)
                // {
                //     if (arr[g] == n)
                //         continue;
                // }

                // if (arr[g] == n)
                //     break;
            }
        }

        if (m == 1)
        {
            i++;
            continue;
        }

        int r = 0;
        int s = arr[i];

        for (int l = 0; l < sizeof(arr) / 4; l++)
            if (s == arr[l])
                r++;

        if (r != 1)
            printf("%d = %d\n", s, r);

        i++;
    }

    return 0;
}