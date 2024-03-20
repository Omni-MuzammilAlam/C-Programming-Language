#include<stdio.h>



int square (int n){

n=n*n;
printf("%d\n", square(n));

return n;


}

int main (){
int number = 4;
printf("number = %d\n", number);
// this number will remain as 4
// because main function creates copies


// this copy behaviour is by default
//and as know as call by value




square(number);// here im calling the function




}