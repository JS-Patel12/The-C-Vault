#include <stdio.h>

main()
{
    int size;

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    int a[size], i;

    printf("\n\nArray Input\n\n");

    for (i = 0; i < size; i++)
    {
        printf("Enter the elements : ");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
}