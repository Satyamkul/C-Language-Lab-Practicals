#include <stdio.h>

int main()
{
    int m, i, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &m);
    if (m == 1) 
    {
        printf("Fibonacci Series: %d", t1);
    }
    else
    {
        printf("Fibonacci Series: %d, %d, ", t1, t2);
        for (i = 3; i <= m; ++i)
        {
            printf("%d, ", nextTerm);
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
        }
    }

    return 0;
}
