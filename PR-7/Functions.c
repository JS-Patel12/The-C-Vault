#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        printf("Error! Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}

int modulus(int a, int b)
{
    if (b == 0)
    {
        printf("Error! Division by zero is not allowed.\n");
        return 0;
    }
    return a % b;
}

void displayMenu()
{
    printf("\nPress 1 for +\n");
    printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for %%\n");
    printf("Press 0 for the exit\n");
}