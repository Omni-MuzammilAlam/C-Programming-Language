/*TAKE A string input from the user using %c*/

#include<stdio.h>
#include<string.h>


int main(){
char str[100];
char ch;
int i=0;
while (ch!='\n')
{
    scanf("%c",&ch);
    str[i]=ch;
    i++;
}
str[i] ='\0'; //to shwo this is a string
puts(str);
/*Now, here comes the fun part. We've got this loop that keeps going until we hit the enter key, represented by '\n'. Inside the loop, we're using scanf with %c to read a single character from the user and storing it in ch. Then, we're putting that character into our string at the ith position. And of course, we're incrementing i to move along in the string.

Once we're out of the loop, it means
 we've got all the 
characters of our string. But wait,
 don't forget the most 
important thing: we gotta
 put a \0 at the end of
 our string to mark where it
 ends. So, we're putting that
 at str[i], and now our string is
 officially complete!*/



}