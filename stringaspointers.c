#include <stdio.h>

int main()
{
    // char canchange ="Hello world"; if we don't use pointers here then we can not change the value of the string
    char *canchange = "Hello world";
    puts(canchange);
    // we can change value of pointers
    canchange = "Hello";
    puts(canchange);
}