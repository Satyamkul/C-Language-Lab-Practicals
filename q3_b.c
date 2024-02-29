#include <stdio.h>

int main() {
    float principle, rate, time, interest;

    // get user input
    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // calculate simple interest
    interest = (principle * rate * time) / 100;

    // display result
    printf("Simple interest = %.2f", interest);

    return 0;
}
