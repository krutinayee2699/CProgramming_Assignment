// WAP to take two numbers as an input and perform addition, subtraction, multiplication and division

#include <stdio.h>

int main()
{
    int num1, num2, add, sub, mult;
    float div;

    // Input from user
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);

    // calculation of operations
    add = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;

    // Display of result
    printf("Addition of both numbers is %d\n", add);
    printf("Subtraction of both numbers is %d\n", sub);
    printf("Multiplication of both numbers is %d\n", mult);
    printf("Division of both numbers is %d\n", div);

    return 0;
}