#include <stdio.h>

void sum(int a,int b)
{
    printf("%d + %d = %d\n",a,b,a+b);
}

void character(char a)
{
    printf("Character : %c",a);
}
void main()
{
    sum(10,15);
    character('J');
}