// Program to convert age in years to days and display both values

#include <stdio.h>

int main()
{
    int age, days;

    // Input of age from user
    printf("Enter age in years:\n");
    scanf("%d", &age);

    // Calculation of age in years to days
    days = age * 365;

    // Display of result
    printf("Age in years: %d", age);
    printf("\nAge in days: %d", days);

    return 0;
}