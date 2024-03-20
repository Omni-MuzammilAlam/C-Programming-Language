/*fibonachi sequence*/
#include <stdio.h>

int fibo(int number)
{
    if (number <= 1) // don't forget base case
    {
        return number;
    }
    else
    {
        int number1 = fibo(number - 1);
        int number2 = number1 + fibo(number - 2);
        return number2; // don't forget return value
    }
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    /// this method will print the sequence at n
    printf("%d\n", fibo(n));
    // this method will print the whole sequence till n

    for (int i = 0; i <= n; ++i)
    {
        printf("%d", fibo(i));
        if (i < n)
        {
            printf(",");
        }
    }

    return 0;
}