#include <stdio.h>

// function to swap two numbers using 2 variables
void swapTwoNumbers(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// function to swap two numbers using 3 variables
void swapThreeNumbers(int *a, int *b, int *temp) {
    *temp = *a;
    *a = *b;
    *b = *temp;
}

int main() {
    int num1, num2, temp;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // swapping two numbers using 2 variables
    swapTwoNumbers(&num1, &num2);
    printf("\nAfter swapping using 2 variables:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // swapping two numbers using 3 variables
    swapThreeNumbers(&num1, &num2, &temp);
    printf("\nAfter swapping using 3 variables:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
