// Program to evaluate net salary of an employee

#include <stdio.h>

int main()
{

    float basic_salary = 12000, DA = 12, HRA = 150, TA = 120, Others = 450, PF = 0, IT = 0;

    // Calculation of DA
    DA = basic_salary * 0.12;

    // Calculation of PF
    PF = basic_salary * 0.14;

    // Calculation of IT
    IT = basic_salary * 0.15;

    // Calculation of net salary
    float net_salary = basic_salary + DA + HRA + TA + Others - (PF + IT);

    // Display of result of net salary
    printf("Net Salary: $%.2f\n", net_salary);

    return 0;
}