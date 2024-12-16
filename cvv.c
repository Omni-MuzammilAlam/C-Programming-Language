#include<stdio.h>

int fibonachi(int number){
if (number<=1)
{
    return number;
}
else{
int number1=fibonachi(number-1);
int number2=number1 + fibonachi(number-2);
return number2;
}
}
int main(){
    int n;
printf("Enter the number");
scanf("%d",&n);
printf("%d\n",fibonachi(n));
for (int i = 0; i <=n ; i++)
{

    printf("%d",fibonachi(i));
if (i<n)
{
    printf(" ,");
}

}






}