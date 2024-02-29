#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    char choice;

    do {
        printf("Enter first number: ");
        scanf("%d", &num1);

        printf("Enter operator (+, -, *, /, %%): ");
        scanf(" %c", &operator);

        printf("Enter second number: ");
        scanf("%d", &num2);

        switch(operator) {
            case '+':
                printf("Result: %d\n", num1 + num2);
                break;
            case '-':
                printf("Result: %d\n", num1 - num2);
                break;
            case '*':
                printf("Result: %d\n", num1 * num2);
                break;
            case '/':
                if(num2 != 0)
                    printf("Result: %.2f\n", (float)num1 / num2);
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;
            case '%':
                if(num2 != 0)
                    printf("Result: %d\n",num1 % num2 );
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;
            default:
                printf("Invalid operator!\n");
        }

        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &choice);

    } while(choice == 'y' || choice == 'Y');

    return 0;
}

