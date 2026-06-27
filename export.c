#include <stdio.h>
#include "matrix.h"

void exportResult()
{
    FILE *fp;
    int r, c;
    int a[10][10];
    int i, j;

    fp = fopen("result.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be created.\n");
        return;
    }

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            fprintf(fp, "%d ", a[i][j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);

    printf("Matrix exported successfully to result.txt\n");
}
