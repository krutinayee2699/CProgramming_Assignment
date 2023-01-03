// Function that returns the largest value stored in an array-of-int.Test the function in a simple program

#include <stdio.h>

int largenum(int[]);
int n;

int main()
{
    int arr[200], largevalue;

    // Input from user
    printf("Enter the elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int k = 0; k < n; k++)
    {
        printf("Elements are %d: ", k);
        scanf("%d", &arr[k]);
    }

    // Display of Result
    largevalue = largenum(arr);
    printf("The Largest Value Is: %d\n", largevalue);
    return 0;
}

int largenum(int arr[])
{
    int k = 1, largevalue;
    largevalue = arr[k];
    while (k < n)
    {
        if (largevalue < arr[k])
            largevalue = arr[k];
        k++;
    }
    return largevalue;
}