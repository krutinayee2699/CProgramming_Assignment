// Program to append multiple lines at the end of the text file.

#include <stdio.h>

int main()
{
    FILE *fptr;
    int i, n;
    char fname[20];
    char str1;
    char str[100];

    // Input from user
    printf("Give the file name which you want to open:");
    scanf("%s", fname);
    fptr = fopen(fname, "a");

    printf("Give the number of lines to be append:");
    scanf("%d", &n);

    printf("The lines are: \n");
    for (i = 0; i < n + 1; i++)
    {
        fgets(str, sizeof str, stdin);
        fputs(str, fptr);
    }
    fclose(fptr);

    // Display that content after appended
    fptr = fopen(fname, "r");

    //Display of Content after appended
    printf("\nThe Content of file %s is: \n", fname);
    str1 = fgetc(fptr);

    while (str1 != EOF)
    {
        printf("%c", str1);
        str1 = fgetc(fptr);
    }
    
    printf("\n\n");
    fclose(fptr);
}