// Program to swap two numbers with or without using third variable

#include <stdio.h>

int main()
{
    int a, b, temp;

    // Input from user
    printf("Enter the value of a:");
    scanf("%d", &a);

    printf("Enter the value of b:");
    scanf("%d", &b);

    // Logic of swapping number
    temp = a;
    a = b;
    b = temp;

    // Display of result
    printf("After swapping a is: %d", a);
    printf("\nAfter swapping b is: %d", b);
}