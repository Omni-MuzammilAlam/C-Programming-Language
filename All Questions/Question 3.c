#include <stdio.h>

/*keep taking numbers as unput from user until user enters an odd number*/
int main()
{
  int m;
  do
  {
    printf("Enter a number:");
    scanf("%d", &m);
    printf("You entered an even number\n");
    if (m % 2 != 0) // this means % 2 is multiple of 2
    {
      break;
    }

  } while (1);

  printf("Thank you");
}
