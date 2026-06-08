#include <stdio.h>

main()
{
    int num = 11;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }
}