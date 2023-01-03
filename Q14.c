// Program to print Pyramid in C

#include <stdio.h>

int main()
{
   int i, s, r, k = 0;

   // Input from user
   printf("Enter the number of rows: ");
   scanf("%d", &r);

   for (i = 1; i <= r; i++, k = 0)
   {
      for (s = 1; s <= r - i; s++)
      {
         printf("  ");
      }
      while (k != 2 * i - 1)
      {
         printf("* ");
         k++;
      }
      printf("\n");
   }
   return 0;
}