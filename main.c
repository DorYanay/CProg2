#include <stdio.h>
#include "my_mat.h"

int main()
{
    int mat[SIZE][SIZE];
    char input = 'l';
    int i, j;
    while (input != 'D')
    {
        scanf("%c", &input);
        switch (input)
        {
        case 'A':
            A(mat);
            DistMat(mat);
            break;

        case 'B':
            scanf("%d", &i);
            scanf("%d", &j);
            if (B(mat, i, j) != 0)
            {
                printf("True\n");
            }
            else
            {
                printf("False\n");
            }
            break;

        case 'C':
            scanf("%d", &i);
            scanf("%d", &j);
            if (C(mat, i, j) != 0)
            {
                printf("%d\n", mat[i][j]);
            }
            else
            {
                printf("-1\n");
            }
            break;
        }
    }
    return 0;
}