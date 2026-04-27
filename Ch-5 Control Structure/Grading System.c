#include <stdio.h>

main()
{
	int marks;
	
	printf("Enter your marks : ");
	scanf("%d",&marks);
	
	if(marks >= 91 && marks<=100)
	{
		printf("Grade : A1");
	}
	else if(marks >= 81 && marks<=90)
	{
		printf("Grade : A2");
	}
	else if(marks >= 71 && marks<=80)
	{
		printf("Grade : B1");
	}
	else if(marks >= 61 && marks<=70)
	{
		printf("Grade : B2");
	}
	else if(marks >= 51 && marks<=60)
	{
		printf("Grade : C1");
	}
	else if(marks >= 41 && marks<=50)
	{
		printf("Grade : C2");
	}
	else if(marks >= 33 && marks<=40)
	{
		printf("Grade : D1");
	}
	else if(marks >= 0 && marks<=32)
	{
		printf("Fail");
	}
	else
	{
		printf("Invalid marks");
	}
}
