#include<stdio.h>

main()
{
    float bs;
    float HRA, DA, TA;

    printf("Base Salary : ");
    scanf("%f", &bs);

    printf("HRA : ");
    scanf("%f", &HRA);

    printf("DA : ");
    scanf("%f", &DA);

    printf("TA : ");
    scanf("%f", &TA);

    float gs = bs + (bs*(HRA/100.0)) + (bs*(DA/100.0)) + (bs*(TA/100.0));

    printf("Gross Salary : %.2f", gs);
}
