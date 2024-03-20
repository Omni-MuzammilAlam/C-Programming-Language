#include <stdio.h>

int main()
{

  char operator;
  double number1, number2;
  while (1)
  {
    printf("\n");
    printf("Enter a number:");
    scanf(" %lf", &number1);
    printf("Enter the number:");
    scanf(" %lf", &number2);
    printf("Enter the operator:");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
      printf("The addition of num1 and num2 is %lf\n", number1 + number2);
      break;

    case '-':
      printf("The subtraction of num1 and num2 is %lf\n", number1 - number2);
      break;

    case '*':
      printf("The product of num1 and num2 is %lf\n", number1 * number2);
      break;
    case 'x':
      printf("The product of num1 and num2 is %lf\n", number1 * number2);
      break;

    case '/':
      if (number2 == 0)
      {
        printf("Error dividing number 1 by 0 \n");
      }
      break;
      printf("The division of num1 and num2 is %lf\n", number1 / number2);

      break;
    case 'q':
      printf("Exiting program...\n");
      return 0;
      goto end;
    default:
      printf("The operator entered is invalid\n");
    }
    continue;
    break;
  }
end:
  return 0;
}
