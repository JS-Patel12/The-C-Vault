#include <stdio.h>

int three(int a)
{
    int ans1 = 0;
    if (a % 3 == 0)
    {
        ans1++;
    }

    return ans1;
}
int five(int a)
{
    int ans2 = 0;
    if (a % 5 == 0)
    {
        ans2++;
    }
    return ans2;
}

void main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    int ans = three(num) + five(num);

    if (ans == 2)
    {
        printf("The number is divisible both by 3 and 5.");
    }
    else
    {
        printf("The number is not divisible both by 3 and 5.");
    }
}