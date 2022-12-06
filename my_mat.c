#include <stdio.h>
#include "my_mat.h"

void DistMat(int Mat[SIZE][SIZE])
{
    for (int k = 0; k < SIZE; k++)
    {
        for (int i = 0; k < SIZE; i++)
        {
            for (int j = 0; k < SIZE; j++)
            {
                if (i != j && Mat[i][k] != 0 && Mat[k][j] != 0 && Mat[i][j] == 0)
                {
                    if (Mat[i][j] == 0)
                    {
                        Mat[i][j] = Mat[i][k] + Mat[k][j];
                    }
                    else
                    {
                        Mat[i][j] = min(Mat[i][j], Mat[i][k] + Mat[k][j]);
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
    if (a == b)
    {
        return a;
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
    if (Mat[i][j] == 0)
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
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
