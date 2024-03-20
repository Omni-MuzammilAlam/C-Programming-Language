#include <stdio.h>
int main()
{

   int n;
   printf("Enter the number you want factorial of:");
   scanf("%d", &n);
   int factorial = 1;

   for (int i = 1; i <= n; i++)
   {
      if (n == 0)
      {
         return 1;
         break;
      }

      factorial = factorial * i;
   }
   printf("The factorial of %d is %d", n, factorial);
   return 0;
}
