#include <stdio.h>
int main()
{

    int sum = 0;

    for (int i = 5; i <= 50; i++)
    {
        sum = sum + i;
    }
    printf("The sum of all numbers from 5 and 50 is %d", sum);
}