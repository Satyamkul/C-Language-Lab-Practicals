#include <stdio.h>

int main()
{
    float fahrenheit, celsius;

    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);

    // Convert Fahrenheit to Celsius
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celcius = %.2f Fahrenheit", celsius, fahrenheit);

    return 0;
}
