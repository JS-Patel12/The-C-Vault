#include <stdio.h>

main()
{
	int num;
	
	printf("Enter any number : ");
	scanf("%d",&num);
	
	int rem;
	int rev = 0;
	while(num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num/10;
	}
	printf("Reverse : %d",rev);
}
