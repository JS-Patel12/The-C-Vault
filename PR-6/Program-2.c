#include <stdio.h>

main()
{
    char str[100];
    int length = 0;

    printf("Enter any string: ");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    printf("\nFrequency of each letter:\n");

    for (int i = 0; i < length; i++)
    {
        int alreadyCounted = 0;

        for (int k = 0; k < i; k++)
        {
            if (str[k] == str[i])
            {
                alreadyCounted = 1;
                break;
            }
        }

        if (alreadyCounted)
        {
            continue;
        }

        int count = 0;
        for (int j = 0; j < length; j++)
        {
            if (str[j] == str[i])
            {
                count++;
            }
        }

        printf("%c => %d\n", str[i], count);
    }
}