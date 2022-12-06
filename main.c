#include <stdio.h>
#include "my_mat.h"

int main()
{
    int Mat[size][size];
    char input = 'l';
    int i, j;
    while (input != 'D')
    {
        scanf(" %c", &input);
        switch (input)
        {
        case 'A':
            A(Mat);
            break;

        case 'B':
            scanf(" %d", &i);
            scanf(" %d", &j);
            B(Mat, i, j);
            break;

        case 'C':
            scanf(" %d", &i);
            scanf(" %d", &j);
            C(Mat, i, j);
            break;
        }
    }
    return 0;
}