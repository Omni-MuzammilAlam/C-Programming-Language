#include<stdio.h>
int main (){
int age=22;
int *ptr=&age;
printf("age =%d\n", *ptr);
printf("age =%u\n",ptr);
ptr++;
printf("ptr =%u\n",ptr);
ptr--;
printf("ptr =%u\n",ptr);
return 0;
}/*This will change the address by the bits
of the data type used along with the 
pointer*/
