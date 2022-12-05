#include <stdio.h>
#include "my_mat.h"

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
