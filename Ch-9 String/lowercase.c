#include <stdio.h>

main()
{
    char name[20];

    printf("Enter your name : ");
    scanf("%[^\n]", &name);

    printf("\n\n");

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] += 32;
        }
    }
    printf("String : %s", name);
}