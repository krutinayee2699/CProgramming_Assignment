//Print the pattern using loops
// F
// FE
// FED
// FEDC
// FEDCB
// FEDCBA

#include<stdio.h>

int main(){
    int i, j;

    for(i = 6; i >= 1; i--)
    {
        for(j = 6; j >= i; j--)
        {
            printf("%c", 'A' + j-1);
        }
        printf("\n");
    }
}