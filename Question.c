/* Question: print the numbers from 0 to n, if n is given by user*/

#include <stdio.h>
int main()
{

    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    /*WITH FOR LOOP METHOD*/
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    /* with while loop method*/

    char m;
    printf("Enter the Alphabet:");
    // scanf("%c", &m); when there is no space the enter things white space is considered as the
    // thing entered because it's a character

    scanf(" %c", &m);

    char j = 'A';
    while (j <= m)
    {
        printf("%c\n", j);
        j++;
    }

    /*Do while loop method*/
    int h;
    printf("Enter number");
    scanf("%d", &h);
    int l = 1;
    do
    {

        printf("%d\n", l);
        l++;
    } while (l <= h);

    return 0;
}
