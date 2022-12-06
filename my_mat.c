#include <stdio.h>
#include "my_mat.h"

void DistMat(Mat[size][size])
{
    for (int k = 0; k < size; k++)
    {
        for (int i = 0; k < size; i++)
        {
            for (int j = 0; k < size; j++)
            {
                if (i != j && Mat[i][k] != 0 && Mat[k][j] != 0)
                {
                    Mat[i][j] = Mat[i][k] + Mat[k][j];
                }
                Mat[i][j] = min(Mat[i][j], Mat[i][k] + Mat[k][j])
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
void A(int Mat[size][size]) \\ Option A
{
    int n;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &n);
            Mat[i][j] = n;
        }
    }
    DistMat(Mat);
}

void B(int Mat[size][size], int i, int j) \\ Option B
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

void C(int Mat[size][size], int i, int j) \\ Option C
{
    if (Mat[i][j] == 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d", Mat[i][j]);
    }
}
