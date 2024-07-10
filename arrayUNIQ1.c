#include <stdio.h>
int main()
{
    int arrdata[5];
    printf("Enter elements of the array:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arrdata[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of arrdata[%d] is:%d\n", i, arrdata[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arrdata[i] < 0)
        {
            printf("value of array[%d] is negative:%d\n", i, arrdata[i]);
        }
    }
}