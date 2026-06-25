#include <stdio.h>

void cube(int *p, int n)
{
    int i, j;

    printf("\nCubes of all elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", (*p) * (*p) * (*p));
            p++;
        }
        printf("\n");
    }
}

void main()
{
    int n, i, j;
    
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    cube(&a[0][0], n);
}