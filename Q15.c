// Program to find Sum of Even and Odd Numbers in an Array

#include <stdio.h>

int main()
{
    int size, i, a[10];
    int even = 0, odd = 0;

    // Input of size of array from user
    printf("\n Please Enter the Size of an Array : ");
    scanf("%d", &size);

    // Input number of elements by user
    printf("\nPlease Enter the Array Elements\n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            even = even + a[i];
        }
        else
        {
            odd = odd + a[i];
        }
    }

    // Display of result
    printf("\nThe Sum of Even Numbers in an Array = %d ", even);
    printf("\nThe Sum of Odd Numbers in an Array = %d ", odd);

    if (even > odd)
    {
        printf("\nThe larger sum is: %d", even);
    }
    else
    {
        printf("\nThe larger sum is: %d", odd);
    }

    return 0;
}