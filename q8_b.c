#include <stdio.h>

#define NUM_EMPLOYEES 50

struct Employee
{
    char name[50];
    int id;
    union
    {
        float monthly_salary;
    } salary;
};

int main()
{
    struct Employee employees[NUM_EMPLOYEES];
    float total_salary = 0;

    // Input employee information
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employees[i].name);
        printf("Enter ID of employee %d: ", i + 1);
        scanf("%d", &employees[i].id);
        printf("Enter monthly salary of employee %d: ", i + 1);
        scanf("%f", &employees[i].salary.monthly_salary);
        total_salary += employees[i].salary.monthly_salary;
    }

    // Calculate and output average salary
    float avg_salary = total_salary / NUM_EMPLOYEES;
    printf("Average salary of %d employees is %.2f\n", NUM_EMPLOYEES, avg_salary);

    return 0;
}
