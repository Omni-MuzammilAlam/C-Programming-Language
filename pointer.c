#include<stdio.h>

int main (){

int age=22;
int *ptr = &age;
int _age =*ptr;
printf("%d\n", _age);
// how to print address
printf("%u\n", &age);
printf("%u\n", ptr);
printf("%u\n",&ptr);
// how to print value
printf("%d\n", age);
printf("%d\n", *ptr);
printf("%d\n",*(&age));
}
/*When declaring a pointer variable, the asterisk is used to indicate that the variable is a pointer*/
/*The asterisk is also used to dereference a pointer, which means accessing the value stored at the memory location pointed to by the pointer. */
/*it means "the value at the address stored in the pointer.*/