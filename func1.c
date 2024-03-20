/*changes to parameters in function
don't change the values in calling function */
#include<stdio.h>


float pricecalculator(float value)
{
    value= value + (0.18*value);
    printf("The final price is %f\n",value);
}

int main (){

float value =100.00;
printf("The value is %f\n", value);
pricecalculator(value);




}