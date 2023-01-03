// Program to find the greatest of three numbers

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    // Input from user
    printf("Enter the numbers:");
    scanf("%d%d%d", &num1, &num2, &num3);

    // Check the condition
    if (num1 >= num2 && num1 >= num3)
    {
        printf("%d is Greater.", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("%d is Greater.", num2);
    }
    else
    {
        printf("%d is Greater.", num3);
    }

    return 0;
}