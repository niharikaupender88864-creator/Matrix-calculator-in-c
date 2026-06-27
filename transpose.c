#include <stdio.h>
#include "matrix.h"

void transpose()
{
    int a[10][10];
    int r,c,i,j;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    printf("Enter Matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Transpose Matrix:\n");

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",a[j][i]);

        printf("\n");
    }
}
