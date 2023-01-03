// Program to calculate LCM and HCF of two numbers

#include <stdio.h>

int main()
{
    int num1, num2, lcm, hcf, count = 1, small;

    // Input from user
    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2);

    small = (num1 < num2) ? num1 : num2;

    while (count <= small)
    {
        if (num1 % count == 0 && num2 % count == 0)
        {
            hcf = count;
        }
        count++;
    }
    lcm = (num1 * num2) / hcf;

    // Display of Result
    printf("HCF :%d\nLCM :%d\n", hcf, lcm);

    return 0;
}