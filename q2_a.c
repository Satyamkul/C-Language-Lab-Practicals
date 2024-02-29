#include <stdio.h>
int main()
{
    int x, y;
    int sum, difference, product, remainder;
    float quotient;
    // Get the inputs from the user
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    // Calculate the results
    sum = x + y;
    difference = x - y;
    product = x * y;
    quotient = (float)x / y;
    remainder = x % y;
    // Print the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
    printf("Remainder: %d\n", remainder);
    // Store the results in variables of different datatypes
    int sum_int = sum;
    int difference_int = difference;
    int product_int = product;
    float quotient_float = quotient;
    int remainder_int = remainder;
    // Print the results stored in variables of different datatypes
    printf("Sum (int): %d\n", sum_int);
    printf("Difference (int): %d\n", difference_int);
    printf("Product (int): %d\n", product_int);
    printf("Quotient (float): %.2f\n", quotient_float);
    printf("Remainder (int): %d\n", remainder_int);
    return 0;
}