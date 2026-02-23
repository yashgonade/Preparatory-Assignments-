#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], c[2][2];
    int i, j, k;

    printf("Enter elements of first 2x2 matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second 2x2 matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            c[i][j] = 0;   // initialize
            for(k = 0; k < 2; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Result Matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
