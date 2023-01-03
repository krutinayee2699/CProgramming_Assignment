// Write a function that takes three arguments: a character and two integers.The character is to be printed.
// The first integer specifies the number of times that the character is to be printed on a line,
// and the second integer specifies the number of lines that are to be printed.
// Write a program that makes use of this function.

#include <stdio.h>

void printChar(char c, int numPerLine, int numLines)
{
    for (int i = 0; i < numLines; i++)
    {
        for (int j = 0; j < numPerLine; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main()
{
    char ch = 'K';
    int numPerLine = 2;
    int numLines = 6;

    printChar(ch, numPerLine, numLines);

    return 0;
}
