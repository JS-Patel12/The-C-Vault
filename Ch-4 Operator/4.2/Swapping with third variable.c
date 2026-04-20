#include <stdio.h>

main()
{
	int a = 10;
	int b = 20;
	
	//To swap the values you need a third variable.
	
	int c = a;//(c = 10)
	a = b;//(a = 20)
	b = c;//(b = 10)
	
	printf("Value of a = %d",a);
	printf("\n");
	printf("Value of b = %d",b);
	
	//The values of a and b are swapped.
}
