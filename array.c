#include<stdio.h>
int main(){
int marks[3];
printf("Enter marks of Physics:");
scanf("%d",&marks[0]);
printf("Enter marks of Maths:");
scanf("%d",&marks[1]);
printf("Enter marks of Chemsitry:");
scanf(" %d",&marks[2]);

printf("Physics=%d\n",marks[0]);
printf("Maths=%d\n",marks[1]);
printf("Chemsitry=%d\n",marks[2]);
return 0;

}
