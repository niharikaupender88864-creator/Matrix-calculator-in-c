#include <stdio.h>
#include "matrix.h"

void inverse()
{
    float a[10][20];
    int n, i, j, k;
    float ratio;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%f", &a[i][j]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = n; j < 2 * n; j++)
        {
            if(i == (j - n))
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    for(i = 0; i < n; i++)
    {
        if(a[i][i] == 0)
        {
            printf("Inverse does not exist.\n");
            return;
        }

        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                ratio = a[j][i] / a[i][i];

                for(k = 0; k < 2 * n; k++)
                    a[j][k] = a[j][k] - ratio * a[i][k];
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        ratio = a[i][i];

        for(j = 0; j < 2 * n; j++)
            a[i][j] = a[i][j] / ratio;
    }

    printf("Inverse Matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = n; j < 2 * n; j++)
            printf("%.2f ", a[i][j]);

        printf("\n");
    }
}
