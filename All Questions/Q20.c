#include<stdio.h>
#include<string.h>

/* Check if a given character is present in a string or not */

int counting(char strng[],char ch){
int count=0;
for (int i = 0; strng[i]!='\0' ; i++)
{
     
   if (strng[i]==ch)
   {
    printf("Character is present");
   return 1;
   }
   printf("Character is not presnent");

   return 0;
}

}
int main(){
    char ch='h';
char strng[100];
fgets(strng,100,stdin);
printf("%d",counting(strng,ch));





}