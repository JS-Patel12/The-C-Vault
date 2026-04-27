#include <stdio.h>

main()
{
    int n,sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
	{
        sum = n * (n + 1) / 2;
        printf("Sum = %d\n", sum);
    }
	else
	{
        printf("Please enter a positive number.\n");
    }
}
