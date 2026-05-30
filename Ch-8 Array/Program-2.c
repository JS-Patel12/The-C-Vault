#include <stdio.h>

main()
{
	int size;
	
	printf("Enter the number of elements : ");
	scanf("%d",&size);
	
	int a[size],i;
	
	printf("\n\nArray Input\n\n");
	
	for(i=0;i<size;i++)
	{
		printf("Enter the elements : ");
		scanf("%d",&a[i]);
	}
	
	int sum=0;
	
	for(i=0;i<size;i++)
	{
		sum = sum+a[i];
	}
	printf("\n\nArray Output\n\n");
	printf("The Average of an array : %.2f",(float)sum/size);
}
