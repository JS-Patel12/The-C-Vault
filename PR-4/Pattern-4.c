#include <stdio.h>

main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int s = 5; s > i; s--)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            if (j % 2 == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}