
#include<stdio.h>
#include<math.h>
// with using library
int cube(){
double m;
printf("Enter another number: ");
scanf("%lf",&m);
printf("The cube of %lf is %lf",m, pow(m,3));
// pow in math library uses double



}

int main(){
// without using library

int n;
printf("Enter a number: ");
scanf("%d",&n);
printf("The square of %d is %d \n", n, n*n);


cube();// also try to place the other functions always before the main functions
   


/*you always have to call the
other function in main function as the
compiler only read the main function*/

}





