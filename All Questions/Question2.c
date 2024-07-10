#include <stdio.h>

int main()
{

    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int sum = 0;

    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {
        sum = sum + i;
        printf("%d \n", j);
    }
    printf("The sum of first Natural number of %d is:%d\n", n, sum);

    // here it is 1+2+3
    /*more efficient way of this is*/

    int add = 0;

    /*here it is  3+2+1*/
    for (int j = n; j >= 1; j--)
    {

        add = add + j;
        printf("%d \n", j);
    }
    printf("The sum of first Natural number of %d is:%d\n", n, add);

    // /*Reverse*/
    // printf("The subtraction of first natural numbers is\n");
    // for (int i = n; i >=1 ; i--)
    // {
    //     // printf("The subtraction of first natural number is %d",i );
    //     // if i were to put this here since this is a do while loop there fore it will give the answer each time the condition if valid
    // printf("%d\n ", i);

    // we can do all this in just a single for loop don't ned to do it on so many loops

    return 0;
}