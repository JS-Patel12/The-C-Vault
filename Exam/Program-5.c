#include <stdio.h>

void main()
{
    // 65432
    //  5432
    //   432
    //    32
    //     2
    for (int i = 6; i >= 2; i--)
    {
        for (int s = 6; s > i; s--)
        {
            printf("  ");
        }
        for (int j = i; j >= 2; j--)
        {
            printf("%d ", j + 4);
        }
        printf("\n");
    }
}