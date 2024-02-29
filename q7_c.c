#include <stdio.h>
void printMatrix(int newArray[2][3][4])
{
    for (int a = 0; a < 2; a++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("Elemenmt at newMatrix[%i][%i][%i]=%d\n", a, i, j, newArray[a][i][j]);
            }
            printf("\n");
        }
    }
}
int main()
{
    int arr1[3][4] = {{3, 4, 6, 3}, {5, 7, 9, 1}, {7, 4, 5, 8}};
    int arr2[3][4] = {{4, 9, 6, 1}, {6, 0, 1, 3}, {3, 8, 2, 9}};
    int a = 0;

    int newMatrix[2][3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            newMatrix[a][i][j] = arr1[i][j];
        }
    }
    a++;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            newMatrix[a][i][j] = arr2[i][j];
        }
    }
    printMatrix(newMatrix);
    return 0;
}