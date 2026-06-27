#include <stdio.h>
#include "matrix.h"

int det(int a[10][10], int n)
{
    int temp[10][10];
    int sign = 1, determinant = 0;
    int i, j, m, x, y;

    if(n == 1)
        return a[0][0];

    for(i = 0; i < n; i++)
    {
        x = 0;

        for(j = 1; j < n; j++)
        {
            y = 0;

            for(m = 0; m < n; m++)
            {
                if(m == i)
                    continue;

                temp[x][y] = a[j][m];
                y++;
            }
            x++;
        }

        determinant += sign * a[0][i] * det(temp, n - 1);
        sign = -sign;
    }

    return determinant;
}

void determinant()
{
    int a[10][10];
    int n, i, j;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Determinant = %d\n", det(a, n));
}
