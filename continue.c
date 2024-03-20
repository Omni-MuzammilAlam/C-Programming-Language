#include <stdio.h>
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        if (i == 3 || i == 5)
        {
            continue;
        }

        printf("%d \n", i);
    }
}