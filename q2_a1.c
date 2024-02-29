#include <stdio.h>
void main()
{
    int x1 = 1, y1 = 2;
    float x2 = 3.0, x3 = 4.0, y2 = 2.0, y3 = 7.0;

    printf("When X = 1, Y = 2\n");
    printf("Addition of numbers is %d\n", x1 + y1);
    printf("Subtraction of numbers is %d\n", x1 - y1);
    printf("Multiplication of numbers is %d\n", x1 * y1);
    printf("Division of numbers is %d\n", x1 / y1);
    printf("Modulus of numbers is %d\n\n", x1 % y1);

    printf("When X = 1, Y = 2.0\n");
    printf("Addition of numbers is %.2f\n", x1 + y2);
    printf("Subtraction of numbers is %.2f\n", x1 - y2);
    printf("Multiplication of numbers is %.2f\n", x1 * y2);
    printf("Division of numbers is %.2f\n", x1 / y2);
    printf("Modulus of numbers is %d\n\n", x1 % (int)y2);

    printf("When X = 3.0, Y = 2\n");
    printf("Addition of numbers is %.2f\n", x2 + y1);
    printf("Subtraction of numbers is %.2f\n", x2 - y1);
    printf("Multiplication of numbers is %.2f\n", x2 * y1);
    printf("Division of numbers is %.2f\n", x2 / y1);
    printf("Modulus of numbers is %d\n\n", (int)x2 % y1);

    printf("When X = 4.0, Y = 7.0\n");
    printf("Addition of numbers is %.2f\n", x3 + y3);
    printf("Subtraction of numbers is %.2f\n", x3 - y3);
    printf("Multiplication of numbers is %.2f\n", x3 * y3);
    printf("Division of numbers is %.2f\n", x3 / y3);
    printf("Modulus of numbers is %d\n\n", (int)x3 % (int)y3);
}