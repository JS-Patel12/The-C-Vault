#include <stdio.h>
#include "Functions.c"

void main()
{
    int choice;

    while (1)
    {
        displayMenu();

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("\nExiting the program. Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > 5)
        {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        float num1, num2, result;

        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch (choice)
        {
        case 1:
            result = add(num1, num2);
            printf("Addition of %.0f and %.0f is %.2g\n", num1, num2, result);
            break;

        case 2:
            result = subtract(num1, num2);
            printf("Subtraction of %.0f and %.0f is %.2g\n", num1, num2, result);
            break;

        case 3:
            result = multiply(num1, num2);
            printf("Multiplication of %.0f and %.0f is %.2g\n", num1, num2, result);
            break;

        case 4:
            result = divide(num1, num2);
            if (num2 != 0)
                printf("Division of %.0f and %.0f is %.2g\n", num1, num2, result);
            break;

        case 5:
            if (num2 != 0)
                printf("Modulus of %d and %d is %d\n", (int)num1, (int)num2, modulus((int)num1, (int)num2));
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}