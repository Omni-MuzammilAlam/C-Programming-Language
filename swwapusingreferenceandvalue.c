#include<stdio.h>
// call by value
void swap(int a , int b){
int t=a;
a=b;
b=t;
printf("a= %d and b = %d\n",a,b);
}
// call by reference
void _swap(int* a,int* b){
int t=*a;
*a=*b;
*b=t;
printf("a=%d and b =%d\n",*a,*b);

}

int main (){
int x=3, y=5;
swap(x,y);
printf("x= %d AND Y = %d\n",x,y );

_swap(&x,&y);
printf("x= %d AND Y = %d\n",x,y );
// this mehtod is used when we want
// to get multiple values from function







}