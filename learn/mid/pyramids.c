
#include <stdio.h>
int main()
{
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i)
   {
      for (j = 1; j <= i; ++j)
      {
         printf("* ");
      }
      printf("\n");
   }
   int a, b, row;
   printf("Enter the number of rows: ");
   scanf("%d", &row);
   for (a = 1; a <= row; ++a)
   {
      for (b = 1; b <= a; ++b)
      {
         printf("%d ", b);
      }
      printf("\n");
   }
   int h, k;
   char input, alphabet = 'A';
   printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%c", &input);
   for (h = 1; h <= (input - 'A' + 1); ++h)
   {
      for (k = 1; k <= h; ++k)
      {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
   int l, m, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (l = rows; l >= 1; --l)
   {
      for (m = 1; m <= l; ++m)
      {
         printf("* ");
      }
      printf("\n");
   }

   return 0;
}
