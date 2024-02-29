#include <stdio.h>

    int main() {
        float physics, chemistry, computer, average;
        char grade;

        printf("Enter marks obtained in Physics: ");
        scanf("%f", &physics);

        printf("Enter marks obtained in Chemistry: ");
        scanf("%f", &chemistry);

        printf("Enter marks obtained in Computer: ");
        scanf("%f", &computer);

        average = (physics + chemistry + computer) / 3.0;

        if (average >= 60) {
            grade = 'A';
        } else if (average >= 50 && average < 60) {
            grade = 'B';
        } else if (average >= 40 && average < 50) {
            grade = 'C';
        } else if (average >= 30 && average < 40) {
            grade = 'D';
        } else {
            grade = 'E';
        }

        printf("Average marks = %.2f\n", average);
        printf("Grade = %c\n", grade);

        return 0;
    }