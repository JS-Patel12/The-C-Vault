#include <stdio.h>

int main() 
{
    char ch = 'a';
    
    start:
    if (ch > 'z') goto end;
    
    if (ch < 'z')
        printf("%c, ", ch);
    else
        printf("%c", ch);
    ch += 4;
    goto start;
    
    end:
    printf("\n");
}