#include<stdio.h>
/*Sum of first natural numbers*/
int sum(int number)
{
 int sum1;
 if (number==1)
 {
    return 1;
 }
    
    sum1 =sum(number-1);
    int sum2 = sum1+number;// if we just change the + to * this will become the case of factorial






    /*recursive function calls themselves until they
    reach out to the base case which is going to be 1 in this case
    */
return sum2;
}
int main(){

int n;
printf("Enter the number: ");
scanf("%d", &n);
printf("%d", sum(n));
}