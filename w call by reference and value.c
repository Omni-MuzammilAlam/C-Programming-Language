#include <stdio.h>

void square(int n);
void _square(int *n);
int main()
{
    int number = 5;
    square(number);
    printf("number =%d\n", number);

    _square(&number); // this pointer stored the address of number
    printf("number =%d\n", number);
    printf("%u\n", &number);
    return 0;
}
// call by value

void square(int n)
{
    n = (n) * (n);
    printf("Square = %d\n", n);
}
// call by reference
void _square(int *n) // here n is pointer variable
{
    *n = (*n) * (*n); // value of address of n which will indirectly mean that address is number and then the actyual value at that number meaning the number itself
    // and since we are storing this in *n and not n
    // this means that we are3 storing this in *n this is changing the value itself chat gpt explain how?
    // here address remains the same but value changes





    printf("square = %d\n", *n);
}
