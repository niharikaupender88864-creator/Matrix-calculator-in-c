#include <stdio.h>
#include "matrix.h"

void classify()
{
    int a[10][10];
    int n, i, j;
    int identity = 1, symmetric = 1;
    int zero = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);

            if(a[i][j] == 0)
                zero++;
        }
    }

    // Identity Check
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
                if(a[i][j] != 1)
                    identity = 0;
            }
            else
            {
                if(a[i][j] != 0)
                    identity = 0;
            }
        }
    }

    // Symmetric Check
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
                symmetric = 0;
        }
    }

    if(identity)
        printf("Matrix is Identity Matrix\n");
    else
        printf("Matrix is NOT Identity Matrix\n");

    if(symmetric)
        printf("Matrix is Symmetric Matrix\n");
    else
        printf("Matrix is NOT Symmetric Matrix\n");

    if(zero > (n * n) / 2)
        printf("Matrix is Sparse Matrix\n");
    else
        printf("Matrix is NOT Sparse Matrix\n");
}
