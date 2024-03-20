#include <stdio.h>
int main()
{
    int number;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter 0 to exit\n");
            scanf("%d", &number);
            if (number == 8)
            {

                // break; this will break this i mean exit only from the above loop
                goto end;
            }
        }
    }
end:

    return 0;
}
