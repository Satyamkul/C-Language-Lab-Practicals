#include <stdio.h>

// Function prototypes
void readNumbers(float *num1, float *num2);
float calculateSum(float num1, float num2);
float calculateDifference(float num1, float num2);
float calculateProduct(float num1, float num2);
float calculateDivision(float num1, float num2);
void displayResult(float result);

int main()
{
    float num1, num2, result;
    int choice;

    // Read two numbers from user
    readNumbers(&num1, &num2);

    // Display menu and get user's choice
    printf("Enter your choice:\n");
    printf("1. Sum of the numbers\n");
    printf("2. Difference of the numbers\n");
    printf("3. Product of the numbers\n");
    printf("4. Division of the numbers\n");
    scanf("%d", &choice);

    // Calculate result based on user's choice
    switch (choice)
    {
    case 1:
        result = calculateSum(num1, num2);
        break;
    case 2:
        result = calculateDifference(num1, num2);
        break;
    case 3:
        result = calculateProduct(num1, num2);
        break;
    case 4:
        result = calculateDivision(num1, num2);
        break;
    default:
        printf("Invalid choice\n");
        return 1;
    }

    // Display result
    displayResult(result);

    return 0;
}

// Function to read two numbers from user
void readNumbers(float *num1, float *num2)
{
    printf("Enter two numbers:\n");
    scanf("%f %f", num1, num2);
}

// Function to calculate sum of two numbers
float calculateSum(float num1, float num2)
{
    return num1 + num2;
}

// Function to calculate difference of two numbers
float calculateDifference(float num1, float num2)
{
    return num1 - num2;
}

// Function to calculate product of two numbers
float calculateProduct(float num1, float num2)
{
    return num1 * num2;
}

// Function to calculate division of two numbers
float calculateDivision(float num1, float num2)
{
    return num1 / num2;
}

// Function to display result
void displayResult(float result)
{
    printf("Result: %f\n", result);
}
