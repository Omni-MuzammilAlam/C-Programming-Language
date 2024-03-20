#include<stdio.h>
#include<string.h>

int countlength(char arr[]){
int count=0;
for (int i = 0; arr[i]!='\0' ; i++)
{
  /*  count++;
     here it is also counting \0  becasue this plussing
we can solve this wiht two methods either we 
return count-1  or make count = i
*/
count=i;

}
return count;

}

/*However we canalso do this using a library function 
strlen strlen is outputs unsigned long so we can typecast it */
int main(){

char name[100];// if we give the characteers then it will print the correct length but if use fgets and take the input from the user it wil aslo add the \0 null cgharacter as well in the length
fgets(name,100,stdin);
printf("%d",countlength(name));
int length=strlen(name);
printf("%d",length);
}