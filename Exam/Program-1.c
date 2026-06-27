#include <stdio.h>

void main()
{
    int num;

    printf("Enter a 3 digit positive integer: ");
    scanf("%d", &num);

    if (num < 100 || num > 999)
    {
        printf("Please enter a valid 3 digit positive integer (100-999).\n");
    }

    int first = num / 100;
    int last = num % 10;
    int sum = first + last;

    printf("Sum of first and last digit = %d\n", sum);
}