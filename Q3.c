// WAP to evaluate area and perimeter of the rectangle

#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;

    // Input from user
    printf("Enter the length of the rectangle:\n");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle:\n");
    scanf("%f", &breadth);

    // Calculation of area and perimeter
    area = length * breadth;
    perimeter = 2 * (length * breadth);

    // Display of result
    printf("Area of rectangle: %f", area);
    printf("\nPerimeter of rectangle: %f", perimeter);

    return 0;
}