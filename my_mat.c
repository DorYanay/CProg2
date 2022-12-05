#include <stdio.h>
#include "my_mat.h"

void A(int Mat[size][size])
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

void B()
