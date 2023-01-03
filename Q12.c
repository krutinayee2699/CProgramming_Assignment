// Program that convert time in minutes to time in hours and minutes.Use #define or const to create
// symbolic constant for 60.Use while loop to allow the user to enter values repeatedly and terminate loop
// if a value for the time of 0 or less is entered.

#include <stdio.h>

int main()
{
    int minute, hour, min;
    const int minperhour = 60;

    // Input from user
    printf("Enter the number of minutes to convert:");
    scanf("%d", &minute);

    // while loop to allow user to enter values
    while (minute > 0)
    {
        hour = minute / minperhour;
        min = minute % minperhour;
        printf("%d minute = %d hour,%d minute\n", minute, hour, min);

        // Enter 0 to terminate the loop or enter next minute
        printf("Enter next value of minutes or Enter 0 to quit:");
        scanf("%d", &minute);
    }
}