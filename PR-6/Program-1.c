#include <stdio.h>

main()
{
    char str[100];
    int length = 0;
    int Palindrome = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            Palindrome = 0;
            break;
        }
    }

    if (Palindrome)
    {
        printf("The given is string is a Palindrome.\n");
    }
    else
    {
        printf("The given is string is not a Palindrome.\n");
    }
}