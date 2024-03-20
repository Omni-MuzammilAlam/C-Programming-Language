#include<stdio.h>
#include<math.h>
float square(float side){
return(side*side);
}
float circle(float radius){
return(3.142*pow(radius,2));
}
float rectangle(float side1, float side2){
    return(side1*side2);
}
int main(){
    float side;
printf("Enter the value of side of a square: ");
scanf("%f", &side);
printf("The area of square is %f", square(side));
float radius;
printf("Enter the value of radius of the circle: ");
scanf("%f", &radius);
printf("The area of the circle is %f: ", circle(radius));
float side1 , side2;
printf("Enter the value of  side1 of a rectangle: ");
scanf("%f",&side1);
printf("Enter the value of side2 of a rectangle: ");
scanf("%f", &side2);
printf("The area of rectangle is %f:", rectangle(side1,side2));

}