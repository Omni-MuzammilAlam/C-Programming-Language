#include <stdio.h>

int main()
{

    // for ( int i = 6; i==6; i=i+1)
    // {

    // printf("Hello, World!\n");
    // }

    // for (int i = 10; i >= 1; i=i-1)
    // {
    //     printf("%d\n", i);
    // }
    // for (int i = 1; i <=10; i++)
    // {
    //     printf("Tu maan meri jaan\n");
    // }

    /*increment operator ++i , i++*/
    int i = 1;
    printf("%d\n", i++); // use, then increase
    printf("%d\n", ++i); // increase, then use can see what happens in code execution
    //++i is pre increment and i++ is post increment
    // same we have decrement operators
    // i-- post decrement --i pre decrement

    int j = 5;
    printf("%d\n", j--);
    printf("%d\n", j);

    int k = 5;

    printf("%d\n", --k);
    printf("%d\n", k = k + 2);

    for (float g = 1; g < 6; g++)
    {
        printf("%f\n", g);
    }
    for (char m = 'A'; m <= 'Z'; m++)
    {
        printf("%c\n", m);
    }
}

// nested loops means loops within loops
