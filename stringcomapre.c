#include<stdio.h>
#include<string.h>

int main(){
char firststring[]="Apple";
char secondstring[]="Banana";
int i= strcmp(firststring,secondstring);
// this will not work as strcmp is giving an integer value and im trying to storeit in an char also if i were to write int then the puts will not work as that workd on strings
printf("%d\n",i);
i= strcmp(secondstring,firststring);
printf("%d\n",i);/// overrided i in above statement
char thirdstring[]="apple";
char fourthstring[]="apple";
i=strcmp(thirdstring,fourthstring);
printf("%d",i);

}