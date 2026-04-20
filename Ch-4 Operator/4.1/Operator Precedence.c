# include <stdio.h>

main()
{
	int x;
	int y;
	printf("Enter Value of x : ");
	scanf("%d",&x);
	printf("\n");
	printf("Enter Value of y : ");
	scanf("%d",&y);
	printf("\n");
	int z = (x*x) + (2*x*y) + (y*y);
	printf("(x*x) + (2*x*y) + (y*y)\n");
	printf("\n");
	printf("The Value of z = %d",&z);
}
