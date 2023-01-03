// Program that reads list of n integers and print sum of product of consecutive numbers.
// If n=7 and numbers are 4,5,2,5,6,4,7 then output is 4*5+5*2+2*5+5*6+6*4+4*7 = 122.

#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;

    // Input the value of n from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Display the list of integers
    int numbers[n];
    printf("Enter the list of %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of the product of consecutive numbers
    for (i = 0; i < n - 1; i++)
    {
        sum += numbers[i] * numbers[i + 1];
    }

    // Print the result
    printf("The sum of the product of consecutive numbers is: %d\n", sum);

    return 0;
}