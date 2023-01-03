// Program to remove a file from disk.

#include <stdio.h>

void main()
{
    int result;
    char fname[20];

    //Input from user
    printf("Give the name of the file you want to remove:");
    scanf("%s", fname);

    //Logic of removing file from disk
    result = remove(fname);
    if (result == 0)
    {
        printf(" The file %s is deleted successfully..!!\n\n", fname);
    }
    else
    {
        printf(" Unable to delete file %s\n\n", fname);
    }
}