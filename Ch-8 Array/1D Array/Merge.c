#include <stdio.h>

int main()
{
    int size1, size2, i;

    printf("\n\nArray Input\n\n");
    printf("Enter size of first array: ");
    scanf("%d", &size1);

    int a[size1];

    for (i = 0; i < size1; i++)
    {
        printf("Enter elements of a[%d]:", i);
        scanf("%d", &a[i]);
    }

    printf("\n\n");

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    int b[size2];

    for (i = 0; i < size2; i++)
    {
        printf("Enter elements of b[%d]:", i);
        scanf("%d", &b[i]);
    }

    int merge[size1 + size2];

    for (i = 0; i < size1; i++)
    {
        merge[i] = a[i];
    }

    for (i = 0; i < size2; i++)
    {
        merge[size1 + i] = b[i];
    }

    printf("\n\n");
    printf("Merged array:\n");

    for (i = 0; i < size1 + size2; i++)
    {
        printf("%d ", merge[i]);
    }
}