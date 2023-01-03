// Program to take a list of n elements from the user and store in an array then reverse the list

#include <stdio.h>

int main()
{
    int i, n, a[100];

    //Input how many elements user want
    printf("Give the number of elements to store in the array :");
    scanf("%d", &n);

    //Number of elements 
    printf("Input %d number of elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d : ", i);
        scanf("%d", &a[i]);
    }

    //Value that stored in array
    printf("\nThe values store into the array are : \n");
    for (i = 0; i < n; i++)
    {
        printf("% 5d", a[i]);
    }

    //Reverse of an element
    printf("\n\nThe values store into the array in reverse are :\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("% 5d", a[i]);
    }
    printf("\n\n");
}