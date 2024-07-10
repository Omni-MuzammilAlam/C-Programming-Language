#include <stdio.h>
int main()
{

    int arrevenodd[9];
    printf("Enter numbers:");
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arrevenodd[i]);
        // dont include \n ya space ku ke usse newline character ko wo value smjh rha he ye kam hm char me krte hen
    }
    printf("The even numbers in array is:\n");
    for (int i = 0; i < 9; i++)
    {
        if (arrevenodd[i] % 2 == 0)
        {
            printf("The value at array[%d] is even number:%d\n ", i, arrevenodd[i]);
        }
    }
    printf("\n");
    printf("The odd numbers in array is:\n");
    for (int i = 0; i < 9; i++)
    {
        if (arrevenodd[i] % 2 != 0)
        {
            printf("The value at array[%d] is odd number:%d\n", i, arrevenodd[i]);
        }
    }
}