#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int coef = 1;

        // Print spaces for alignment
        for (int space = 1; space <= n - i; space++)
        {
            printf("  ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}