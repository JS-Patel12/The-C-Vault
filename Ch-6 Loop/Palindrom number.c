#include <stdio.h>

int main() {
    int num, rev = 0, copy, rem;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    copy = num;
    
    while (copy != 0) {
        rem = copy % 10;
        rev = rev * 10 + rem;
        copy = copy / 10;
    }
    
    if (num == rev)
        printf("%d is a Palindrome Number", num);
    else
        printf("%d is not a Palindrome Number", num);
    
    return 0;
}
