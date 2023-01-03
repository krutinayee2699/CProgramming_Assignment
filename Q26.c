// File copy program that prompts user to enter name of text file to act as the source file and
// name of output file. The program should use toupper() function from ctype.h to convert all the text
// to uppercase as it's written to output file.Use standard I/O and text mode.

#include <stdio.h>
#include <ctype.h>

int main()
{
    // Declare variables for file pointers and a character
    FILE *source_file, *output_file;
    int ch;

    // Input from the user for the source and output file names
    char source_name[100], output_name[100];
    printf("Enter the name of the source file: ");
    scanf("%s", source_name);
    printf("Enter the name of the output file: ");
    scanf("%s", output_name);

    // Open the source file in read mode
    source_file = fopen(source_name, "r");
    if (source_file == NULL)
    {
        printf("Error opening source file\n");
        return 1;
    }

    // Open the output file in write mode
    output_file = fopen(output_name, "w");
    if (output_file == NULL)
    {
        printf("Error opening output file\n");
        fclose(source_file);
        return 1;
    }

    // Read the source file one character at a time
    while ((ch = fgetc(source_file)) != EOF)
    {
        // Convert the character to uppercase using toupper
        ch = toupper(ch);
        // Write the uppercase character to the output file
        fputc(ch, output_file);
    }

    // For Closing both files
    fclose(source_file);
    fclose(output_file);

    return 0;
}
