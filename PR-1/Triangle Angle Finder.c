#include<stdio.h>

main()
{
    float A1, A2;

    printf("First Angle : ");
    scanf("%f", &A1);

    printf("Second Angle : ");
    scanf("%f", &A2);
    
    float A3 = 180 - (A1 +A2);

    printf("Third Angle : %.2f", A3);
}
