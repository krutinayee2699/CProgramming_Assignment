// Program that accepts an integer as input and then display all the prime numbers smaller than or equal to
// that number.

#include <stdio.h>

int main()
{
    int a, b, i, m;

    // Input from user
    printf("Enter the integer which you want to print prime number:");
    scanf("%d", &m);

    for (b = 2; b <= m; b++)
    {
        i = 2;
        while (b % i != 0)
        {
            i++;
        }
        if (i == b)
        {
            printf("%d ", b);
        }
    }
}