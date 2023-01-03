// Program to merge two files and write it in a new file.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *file1, *file2, *fnew;
    char ch, fname1[20], fname2[20], fname3[30];

    // Input from user
    printf("Give the name of first file: ");
    scanf("%s", fname1);
    printf("Give the name of second file: ");
    scanf("%s", fname2);
    printf("Give the new file name where to merge the above two files : ");
    scanf("%s", fname3);
    file1 = fopen(fname1, "r");
    file2 = fopen(fname2, "r");
    if (file1 == NULL || file2 == NULL)
    {
        // Error message if file not there
        printf(" File does not exist or error in opening...!!\n");
        exit(EXIT_FAILURE);
    }
    fnew = fopen(fname3, "w");
    if (fnew == NULL)
    {
        // Error message if file not there
        printf(" File does not exist or error in opening...!!\n");
        exit(EXIT_FAILURE);
    }
    while ((ch = fgetc(file1)) != EOF)
    {
        fputc(ch, fnew);
    }
    while ((ch = fgetc(file2)) != EOF)
    {
        fputc(ch, fnew);
    }

    // Display of result
    printf(" The two files merged into %s file successfully..!!\n\n", fname3);
    fclose(file1);
    fclose(file2);
    fclose(fnew);
}