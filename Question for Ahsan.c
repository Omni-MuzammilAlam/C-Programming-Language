#include <stdio.h>
/*A car is traveling at 70 miles per hour*/

float distance( float number){
return(number*31.292);
}

int main(){
float n;
printf("Enter the time interval in seconds:");
scanf("%f", &n);
printf("The distance travelled by the car in %fs is %f meters\n",n,distance(n));
printf("OR\n");
printf("%f miles", distance(n)*0.0006214);






}