#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[50];
    int id;
    double salary;
};

int main()
{
    struct Employee e[50];
    double totalSalary = 0;
    double highestSalary = e[0].salary;
    double lowestSalary = e[0].salary;
    char highestSalaryName[50];
    char lowestSalaryName[50];

    for (int i = 0; i < 50; i++)
    {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", e[i].name);

        printf("Enter ID of employee %d: ", i + 1);
        scanf("%d", &e[i].id);

        printf("Enter monthly salary of employee %d: ", i + 1);
        scanf("%lf", &e[i].salary);

        totalSalary += e[i].salary;
        getchar();
    }

    double averageSalary = totalSalary / 50;

    strcpy(highestSalaryName, e[0].name);
    strcpy(lowestSalaryName, e[0].name);

    for (int i = 1; i < 50; i++)
    {
        if (e[i].salary > highestSalary)
        {
            highestSalary = e[i].salary;
            strcpy(highestSalaryName, e[i].name);
        }

        if (e[i].salary < lowestSalary)
        {
            lowestSalary = e[i].salary;
            strcpy(lowestSalaryName, e[i].name);
        }
    }

    printf("Employee with the highest salary: %s\n", highestSalaryName);
    printf("Employee with the lowest salary: %s\n", lowestSalaryName);
    printf("Average salary: %lf\n", averageSalary);

    return 0;
}
