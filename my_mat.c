#include <stdio.h>
#include "my_mat.h"

void DistMat(int Mat[SIZE][SIZE])
{
    for (int k = 0; k < SIZE; k++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                if (i != j && Mat[i][k] != 0 && Mat[k][j] != 0)
                {
                    if (M[i][j] == 0)
                    {
                        M[i][j] = M[i][k] + M[k][j];
                    }
                    else
                    {
                        M[i][j] = min(Mat[i][j], Mat[i][k] + Mat[k][j]);
                    }
                }
            }
        }
    }
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void A(int Mat[SIZE][SIZE])
{
    int n;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {

            scanf("%d", &n);
            Mat[i][j] = n;
        }
    }
    DistMat(Mat);
}

void B(int Mat[SIZE][SIZE], int i, int j)
{
    if (Mat[i][j] != 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void C(int Mat[SIZE][SIZE], int i, int j)
{
    if (Mat[i][j] == 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", Mat[i][j]);
    }
}
