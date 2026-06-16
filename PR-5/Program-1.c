#include <stdio.h>

main()
{
    int size;

    printf("Enter the size of array : ");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the element of a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            printf("%d\t", a[i]);
        }
    }
}