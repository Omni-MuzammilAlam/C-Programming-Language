#include <stdio.h>

int main()
{

    char operator;
    double number, number2, result;

    while (1)
    {

        printf(" Enter a number");
        scanf("%lf", &number);
        printf("Enter operator");
        scanf("%c", &operator);
        printf("Enter a number");
        scanf("%lf", &number2);

        switch (operator)
        {
        case '+':
            printf("Your result is\n");
            result += number2;
            break;

        default:
            break;
        }
    }
    printf("Intermediate Result: %.2lf\n", result);
}