// Program to enter the ASCII code and then print character having that ASCII code

#include <stdio.h>

int main()
{
    int n;

    // Input from user
    printf("Enter the ASCII Code :");
    scanf("%d", &n);

    // Display of result
    printf("Character of this ASCII Code is: %c", n);

    return 0;
}