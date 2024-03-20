#include <stdio.h>

int fact(int number)
{
    if (number == 0) // this number is parameter
    {
        return 1;
    }
    else
        return (number * fact(number - 1));
}

int main()
{
    int n; // this is use to store user input
    printf("Enter the number:");
    scanf("%d", &n);
    printf("%d", fact(n)); // from this n this will go to the fact(number) and this n will become number there
}
