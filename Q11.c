//Write a function to calculate hte sum profuct and average of 2 numbers.Print that average in the main function
#include<stdio.h>

void work(float a,float b, float*sum, float *product,float* avg)
{
 *sum = a+b;
 *product = a*b;
*avg = (*sum)/2;


}

int main(){

float a=3.0,b=4.0;
float sum,prod,avg;
work(a,b,&sum,&prod,&avg);
printf("Sum = %f\n product = %f\nAverage = %f\n",sum ,prod, avg);


}