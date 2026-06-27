#include <stdio.h>
#include "matrix.h"

void addition()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &col);

    printf("Enter First Matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Second Matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<col;j++)
            scanf("%d",&b[i][j]);

    printf("Result:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

void subtraction()
{
    int a[10][10], b[10][10], c[10][10];
    int r,col,i,j;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&col);

    printf("Enter First Matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Second Matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<col;j++)
            scanf("%d",&b[i][j]);

    printf("Result:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

void multiplication()
{
    int a[10][10], b[10][10], c[10][10];
    int r1,c1,r2,c2;
    int i,j,k;

    printf("Enter rows and columns of First Matrix: ");
    scanf("%d%d",&r1,&c1);

    printf("Enter rows and columns of Second Matrix: ");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2)
    {
        printf("Multiplication Not Possible\n");
        return;
    }

    printf("Enter First Matrix:\n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Second Matrix:\n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<c1;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    }

    printf("Result:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
}
