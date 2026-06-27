#include <stdio.h>
#include "matrix.h"

void inputMatrix(int matrix[10][10], int rows, int cols)
{
    int i, j;

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols)
{
    int i,j;

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
