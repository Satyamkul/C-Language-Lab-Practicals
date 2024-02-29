#include <stdio.h>

int main() {
  int row, col;
  
  // Input the number of rows and columns
  printf("Enter the number of rows: ");
  scanf("%d", &row);
  printf("Enter the number of columns: ");
  scanf("%d", &col);

  // Declare a 2D array
  int arr[row][col];
  if(row==col)
  {
    printf("Sum of diagonal elements of the matrix is Possible\n");
  }
  else{
    printf("Sum of diagonal elements of the matrix is not Possible\n");
    return 1;
  }
  // Input elements into the array
  printf("Enter the elements of the array:\n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("Enter element at position (%d, %d): ", i, j);
      scanf("%d", &arr[i][j]);

    }
  }

  // Calculate and print the sum of diagonal elements
 
    int sum = 0;
  for (int i = 0; i < row && i < col; i++) {
    sum += arr[i][i];
  }
  printf("Sum of diagonal elements: %d\n", sum);


  return 0;
}
