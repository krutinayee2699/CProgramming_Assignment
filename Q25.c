// Write program that prompts the user to enter three sets of five double numbers each.

#include <stdio.h>

#define ROWS 3
#define COLS 5

// Function prototypes
double average(double arr[], int size);
double average_all(double arr[ROWS][COLS], int rows, int cols);
double largest(double arr[ROWS][COLS], int rows, int cols);

int main(void)
{
    // Array to store the values
    double values[ROWS][COLS];

    // Input from user
    printf("Enter three sets of five double numbers: \n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            scanf("%lf", &values[i][j]);
        }
    }

    // Compute and print the average of each set of five values
    for (int i = 0; i < ROWS; i++)
    {
        double avg = average(values[i], COLS);
        printf("Average of set %d: %.2f\n", i + 1, avg);
    }

    // Compute and print the average of all the values
    double avg_all = average_all(values, ROWS, COLS);
    printf("Average of all values: %.2f\n", avg_all);

    // Determine and print the largest value of the 15 values
    double largest_value = largest(values, ROWS, COLS);
    printf("Largest value: %.2f\n", largest_value);

    return 0;
}

// Function to compute the average of a one-dimensional array
double average(double arr[], int size)
{
    double sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

// Function to compute the average of all the values in a 2D array
double average_all(double arr[ROWS][COLS], int rows, int cols)
{
    double sum = 0.0;
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
            count++;
        }
    }
    return sum / count;
}

// Function to determine the largest value in a 2D array
double largest(double arr[ROWS][COLS], int rows, int cols)
{
    double largest = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
    }
    return largest;
}