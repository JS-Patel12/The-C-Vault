#include <stdio.h>

void main()
{
    int size;

    printf("Enter the size of arrays : ");
    scanf("%d", &size);

    int a[size];
    int b[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    int sum[size];

    for (int i = 0; i < size; i++)
    {
        sum[i] = a[i] + b[i];
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", sum[i]);
    }
}