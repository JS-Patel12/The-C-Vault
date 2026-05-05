# include<stdio.h>

main()
{
	float C;
	printf("The temperature in celsius : ");
	scanf("%f",&C);
	
	float F = (9.0/5.0*C)+32;
	
	printf("The temperature in Fahreinheit : %.2f",F);
}
