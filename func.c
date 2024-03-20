#include <stdio.h>
/*this is example of with argument and with return value*/
int sum(int a, int b) //*if we remove this then it will give implicit declaration*//
{
  return a + b;
}
/*if we want with argument but no return value*/
void printbeast(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%c", 'B');
    printf("%c", 'E');
    printf("%c", 'A');
    printf("%c", 'S');
    printf("%c", 'T');
    printf("\n");
  }
}

/*without argument and with return value*/
int takenumber()
{
  int i;
  printf("Enter a number:");
  scanf("%d", &i);
  return i;
}

// without argument without return

int main()
{

  int a, b, c, d;
  a = 9;
  b = 87;
  c = sum(a, b);
  printbeast(9);
  printf("\n");
  printf("The sum is %d\n", c);

  d = takenumber();
  printf("The number entered is %d\n", d);
  return 0;
}