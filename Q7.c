#include <stdio.h>

int main()
{

    int n;
    printf("Enter the number you want multiplication table of;");
    scanf("%d", &n);

    for (int i = 12; i >= 1; i--)
    {
        printf("%dx%d=%d\n", n, i, n * i);
    }
}