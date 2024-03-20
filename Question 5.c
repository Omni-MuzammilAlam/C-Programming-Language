#include <stdio.h>

// print all the odd numbers from 5 to 50

int main()
{
    printf("All the odd numbers between 5 and 50\n");
    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    // using do while loop

    printf("multiples of 3 between 5 and 50/n");

    int i = 5;
    do
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    } while (i <= 50);

    // using while loop

    printf("Multiples of 5 between 5 and 50\n");

    int j = 5;
    while (j <= 50)
    {
        if (j % 5 == 0)
        {
            printf("%d\n", j);
        }
        j++;
    }

    return 0;
}
