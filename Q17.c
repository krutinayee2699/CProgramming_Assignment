// Program to check if a number has 3 consecutive 5s.If yes print YES else NO

#include <stdio.h>

int main()
{
    int num, digit1, digit2, digit3;

    // Read the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Extract the individual digits of the number
    digit1 = num % 10;
    num /= 10;
    digit2 = num % 10;
    num /= 10;
    digit3 = num % 10;
    num /= 10;

    // Check if the digits are 5, 5, 5
    if (digit1 == 5 && digit2 == 5 && digit3 == 5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
