#include <stdio.h>

main()
{
	int a = 10;
	int b = 20;
	
	a = a + b;//(a = 30)
	b = a - b;//(b = 30 - 20 = 10)
	a = a - b;//(a = 30 - 10 = 20)
	printf("Value of a = %d",a);
	printf("\n");
	printf("Value of b = %d",b);
	
	//The values are swapped without creating third variable.
}
