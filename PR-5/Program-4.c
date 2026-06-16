#include <stdio.h>

int main()
{
    int row, col;
    int sum;

    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int a[row][col];

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    int rowNum;

    printf("\nEnter row number: ");
    scanf("%d", &rowNum);

    printf("Elements of row %d: ", rowNum);
    sum = 0;
    for (int j = 0; j < col; j++)
    {
        printf("%d", a[rowNum][j]);
        if (j != col - 1)
        {
            printf(", ");
        }
        sum += a[rowNum][j];
    }
    printf("\nThe sum of a row %d: %d\n", rowNum, sum);

    int colNum;
    
    printf("\nEnter column number: ");
    scanf("%d", &colNum);

    printf("Elements of column %d: ", colNum);
    sum = 0;
    for (int i = 0; i < row; i++)
    {
        printf("%d", a[i][colNum]);
        if (i != row - 1)
        {
            printf(", ");
        }
        sum += a[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, sum);
}