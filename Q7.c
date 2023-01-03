// Program to find the sum of the series 1 + 11 + 111 + 1111 to n

#include <stdio.h>

int main()
{
    int i, n;
    long sum = 0;
    long int t = 1;

    // Input from user
    printf("Give the nth value:\n");
    scanf("%d", &n);

    // Logic of series
    for (int i = 1; i <= n; i++)
    {
        printf("%ld ", t);
        if (i < n)
        {
            printf("+ ");
        }
        sum = sum + t;
        t = (t * 10) + 1;
    }

    // Display of result
    printf("\nSum of series is: %d", sum);
}