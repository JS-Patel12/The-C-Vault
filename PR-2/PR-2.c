#include <stdio.h>

main()
{
    int marks;

    printf("Enter your marks : ");
    scanf("%d", &marks);

    char grade = (marks >= 90 && marks <= 100) ? 'A' :(marks >= 75 && marks <= 89)  ? 'B' :(marks >= 60 && marks <= 74)  ? 'C' :(marks >= 40 && marks <= 59)  ? 'D' :(marks >= 0  && marks < 40)   ? 'F' : 'X';

    if (grade == 'X') {
        printf("Invalid Marks");
    }

    printf("Your grade is %c. ", grade);
    
    printf("\n");

    switch (grade)
    {
        case 'A':
            printf("Excellent work!");
            break;
        case 'B':
            printf("Well done");
            break;
        case 'C':
            printf("Good job");
            break;
        case 'D':
            printf("You passed, but you could do better");
            break;
        case 'F':
            printf("Sorry, you failed");
            break;
    }
    
    printf("\n");
    
     if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        printf("Congratulations! You are eligible for the next level.");
    }
    else
    {
        printf("Please try again next time.");
    }
}
