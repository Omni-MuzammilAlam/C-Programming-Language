#include<stdio.h>
int main(){
    
int n=2;
int x=n+2;
       
for (int i = 0; i <= n; i++)
{
   
    printf("\n%d",x*i);
    x=x+i*n;
   
}

 printf("\n%d",x);





}