/*keep taking numbers as input until user enters a number which is multiple of 7*/

#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Enter a number:");
        scanf("%d", &n);
        printf("you have entered a number that is not a multiple of 7\n");
        // if (n=n/7) thid id wrong as every number is after 7 is divisible by 7
        if (n % 7 == 0)
        {
            break;
        }

    } while (1);
    printf("Your number is a multiple of 7, Thank you ! Bye");

    return 0;
}