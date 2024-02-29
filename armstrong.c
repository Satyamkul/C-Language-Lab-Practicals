#include <stdio.h>

int isArmstrong(int num) {
    int originalNum = num, sum = 0;

    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += digit * digit * digit;
        originalNum /= 10;
    }

    return (sum == num);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
