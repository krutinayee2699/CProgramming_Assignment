// Program to check whether a character is vowel or consonant

#include <stdio.h>

int main()
{
    char ch;

    // Input from user
    printf("Enter the character:");
    scanf("%c", &ch);

    // logic of vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("%c is Vowel.", ch);
    else
        printf("%c is Consonant.", ch);
}