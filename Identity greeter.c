#include<stdio.h>

void hello( char n )// this n is called argument or actual parameter
{

if (n=='p')
{
    printf("Assalamoalaikum");

} else if (n=='f')
   {
    printf("bonjour");
   }
   else
   {
    printf("Enter a valid response");
   }
}   


int main(){
char nation;  //this is called parameter
printf("Enter p for Pakistan and f for France");
scanf("%c", &nation);
hello(nation);



}

