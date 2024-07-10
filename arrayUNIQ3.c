#include <stdio.h>

int main()
{
    int arr[5];
    printf("Enter your input:");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] has the value:%d\n", i, arr[i]);
    }
    int n;
    printf("Enter the position you want to the data to be deleted:");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        if (n > 5)
        {
            printf("Enter valid input");
            break;
        }
        else if (i == n)
        {
            arr[i] = 0;

            printf("The new set of data in the array is:\n");
            for (int i = 0; i < 5; i++)
            {
                printf("now arr[%d] has value:%d\n", i, arr[i]);
            }
        }
    }
}
