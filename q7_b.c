#include <stdio.h>

int main()
{
    int matrix1[3][3], matrix2[3][3], sum[3][3], product[3][3], transpose1[3][3], transpose2[3][3];
    int i, j, k;

    // Input elements of matrix1
    printf("Enter elements of matrix1:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements of matrix2
    printf("Enter elements of matrix2:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Addition of matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
 
    // Multiplication of matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            product[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Transpose of matrix1
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transpose1[j][i] = matrix1[i][j];
        }
    }
    // Transpose of matrix2
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transpose2[j][i] = matrix2[i][j];
        }
    }

    // Display sum of matrices
    printf("\nSum of matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Display product of matrices
    printf("\nProduct of matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    // Display transpose of matrix1
    printf("\nTranspose of matrix1:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", transpose1[i][j]);
        }
        printf("\n");
    }

    // Display transpose of matrix1
    printf("\nTranspose of matrix2:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", transpose2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
