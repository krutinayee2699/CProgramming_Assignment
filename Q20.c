// Program that reads input until encountering the # character and then reports the number of spaces read,
// the number of newline characters read, and the number of all other characters read.

#include <stdio.h>

int main()
{
    int c,
        space_count = 0,
        newline_count = 0,
        other_count = 0;

    // Input of lines from user
    printf("Enter the Lines: ");

    while ((c = getchar()) != '#')
    {
        if (c == ' ')
        {
            space_count++;
        }
        else if (c == '\n')
        {
            newline_count++;
        }
        else
        {
            other_count++;
        }
    }

    // Display of Result
    printf("Spaces: %d\n", space_count);
    printf("Newlines: %d\n", newline_count);
    printf("Other characters: %d\n", other_count);

    return 0;
}
