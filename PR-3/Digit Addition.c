#include <stdio.h>

int main()
{
    int num, first, last, temp;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if (num < 0)
        num = -num;
    
    temp = num;
    
    // Get last digit
    last = num % 10;
    
    // Get first digit
    while (temp >= 10)
	{
        temp = temp / 10;
    }
    first = temp;
    
    printf("The sum of the first and the last digit: %d\n", first + last);
}
