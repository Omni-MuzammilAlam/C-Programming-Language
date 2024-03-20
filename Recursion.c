#include <stdio.h>

int factorial(int number)
// recursive method
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
        // return (number * factorial(number - 1));: This line is the recursive part of the function. It calculates the factorial of a number by multiplying the number with the factorial of (number - 1). This recursive call continues until the base case (number == 0 or 1) is reached.
    }
}
// iterative method
int factor(int number2)

/*int factorial(int number): This line declares a function named factorial that takes an integer argument number and returns an integer. Here's a breakdown of the components:

int: This specifies the return type of the function, indicating that the function will return an integer.
factorial: This is the name of the function.
(int number): This part specifies the parameters that the function accepts. In this case, it takes a single integer parameter named number. When you call this function, you'll pass an integer value, and within the function, it will be referred to as number.*/

{
    int result = 1;
    if (number2 == 0)
    {
        return 1;
    }

    for (int i = 1; i <= number2; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int num;

    printf("Enter the number:");
    scanf("%d", &num);
    printf(" the factorial of %d is %d\n", num, factorial(num));
    printf(" the factorial of %d is %d\n", num, factor(num));
}