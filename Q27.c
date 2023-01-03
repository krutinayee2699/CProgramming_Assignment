// Program to find content of a file and number of lines in textfile.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open the file for reading
    FILE *file = fopen("secondfile.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    // Read the file line by line
    char line[256];
    int line_count = 0;
    while (fgets(line, sizeof(line), file))
    {
        // Print the line
        printf("%s", line);

        // Increment the line count
        line_count++;
    }

    // Close the file
    fclose(file);

    // Print the number of lines
    printf("\nNumber of lines: %d\n", line_count);

    return 0;
}
