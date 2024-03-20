#include <stdio.h>

int main()
{
    // attempting to typecast an uninitialized variable a to a float before taking input. This can lead to undefined behavior. To fix this, you should first take the input for a
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    // float b=35/4; this will give the nearest int value as we havent spacified it but now see what happens wwhen we use typecasting statemnt
    float b = (float)a / 4;

    printf("the value of b is %f\n", b);
}