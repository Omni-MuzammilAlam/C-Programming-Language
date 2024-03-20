#include <stdio.h>

int main()
{
  // print the multiplication of a number entered by the user in pretty _get_output_format

  int number;
  while (1)
  {
    printf("Enter the number you want multiplication table of:");
    scanf("%d", &number);

    if (number == 0)
    {
      printf("Enter something other than 0\n");

      continue;
    }
    break;
  }

  printf("%dx1=%d\n", number, number * 1);
  printf("%dx2=%d\n ", number, number * 2);
  printf("%dx3=%d\n ", number, number * 3);
  printf("%dx4=%d\n ", number, number * 4);
  printf("%dx5=%d\n ", number, number * 5);
  printf("%dx6=%d\n ", number, number * 6);
  printf("%dx7=%d\n ", number, number * 7);
  printf("%dx8=%d\n ", number, number * 8);
  printf("%dx9=%d\n", number, number * 9);
  printf("%dx10=%d\n", number, number * 10);
  printf("%dx11=%d\n", number, number * 11);
  printf("%dx12=%d\n", number, number * 12);
  // this method is not efficient
  return 0;
}