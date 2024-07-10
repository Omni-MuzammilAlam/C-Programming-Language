/*Mass unit converter*/

#include<stdio.h>

float mass( float number){
return(number*0.454);


}


int main(){
    do
{
float num;
printf("Enter the mass in pounds:");
scanf("%f", &num);
printf("%fLbs is %f KGs", num,mass(num));


    char decision;
    printf("do you want to continue?(press y for yes and n for no): ");
    scanf(" %c", &decision);

    switch (decision)
    {
   
    case 'y':
    continue;
 case 'n':
        printf("Exiting the program...");
        break;
    default:
    printf("Please Enter a valid response");
        break;
    }
    break;
} while (1);

return 0;

}