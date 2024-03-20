#include <stdio.h>

int main()
{
    int number;
    while (1)
    {
        printf("Enter the number for the multiplicative table of\n");
        scanf("%d", &number);

        printf("The Table of %d is as follows\n", number);

        if (number == 0)
        {
            printf("Enter something other than 0\n");
            continue;
        }

        break;
    }

    for (int i = 0; i <= 12; i++)
    {
        printf("%dx%d=%d\n", number, i, number * i);
    }

    // this is the best and efficient method

    return 0;
}