#include<stdio.h>
#include<string.h>
/*Find the sakted form of a password
entered by user if the salt is 23 and added at the end*/

void salting(char password[])
{
char salt[]="123";
char newpass[200];

strcpy(newpass,password);
strcat(newpass,salt);
puts(newpass);

}
int main()
{
char password[100];
scanf("%s", &password);
salting(password);
}














