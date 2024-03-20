#include <stdio.h>

int main()
{
    /*"Increment Method"*/
    int j;
    printf("Enter the number: ");
    scanf("%d", &j);
    int u = 1;
    do
    {
        printf("%d\n", u);
        u++;
    } while (u <= j);

    /*Decrement Method*/
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    int m = n;
    int i = m;
    do
    {

        printf("%d\n", i);
        i--;
    } while (i >= 1);

    return 0;
}