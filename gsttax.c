/*Write a program to enter price of 2 items & print their 
final cost with gst*/
#include<stdio.h>
int main (){
float price[3];
printf("Enter price of 1st item:\n");
scanf("%f", &price[0]);
printf("Enter price of 2nd item:\n");
scanf("%f", &price[1]);
printf("Enter price of 3rd item:\n");
scanf("%f", &price[2]);
printf("Price of item 1: %f\n",price[0]+(price[0]*0.18));
printf("Price of item 2: %f\n",price[1]+(price[1]*0.18));
printf("Price of item 3: %f\n",price[2]+(price[2]*0.18));
printf("Final price: %f\n",price[0]+(price[0]*0.18)+price[1]+(price[1]*0.18)+price[2]+(price[2]*0.18));
}