#include <stdio.h>

int main() {
    int num, sum = 0, rev = 0, rem;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    while (num > 0) {
        rem = num % 10;
        sum += rem;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    printf("Reverse of number: %d\n", rev);
    return 0;
}
