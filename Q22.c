// Write a program that shows you a menu offering you the choice of addition, subtraction, multiplication,
// or division. After getting your choice, the program asks for two numbers, then performs the requested
// operation. The program should accept only the offered menu choices. It should use type float for the
// numbers and allow the user to try again if he or she fails to enter a number. In the case of subtraction,
// the program should prompt the user to enter a new value if 0 is entered as the value for the second number.

#include <stdio.h>

int main()
{
    float num1, num2;
    char operation;

    // Display of the menu of operations
    printf("Menu of the Operations:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    // Choice that you want to perform the operation
    printf("Enter your choice: ");

    // Get user's choice
    operation = getchar();

    // Perform requested operation
    switch (operation)
    {
    case '1':
        // For Addition
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        break;

    case '2':
        // For Subtraction
        do
        {
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);
            if (num2 == 0)
            {
                printf("Cannot divide by 0. Please enter a new value for the second number.\n");
            }
        } while (num2 == 0);
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        break;

    case '3':
        // For Multiplication
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        break;

    case '4':
        // For Division
        do
        {
            printf("Enter first number: ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);
            if (num2 == 0)
            {
                printf("Cannot divide by 0. Please enter a new value for the second number.\n");
            }
        } while (num2 == 0);
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        break;

    default:
        printf("Invalid choice.\n");
        break;
    }

    return 0;
}
