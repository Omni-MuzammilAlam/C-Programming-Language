#include<stdio.h>
#include<string.h>

/*Write a function
names slice which takes a string and
returns a sliced
string from index n to m
*/


void slice(char str[], int n, int m){
char newstr[100];
int j=0;/*Here, j is an integer variable that is initialized to 0. It is used as an index to keep track of where to place characters in the newstr array.*/
for (int i = n ; i <=m ; i++,j++)
{
   newstr[j]=str[i];/*j starts at 0, and for each iteration of the loop, it gets incremented by 1 (j++). This ensures that characters from the input string str are placed sequentially in the newstr array.
j is used as the index for the newstr array, so the character from str[i] is copied into newstr[j].*/
}
newstr[j]='\0';
puts(newstr);
}
int main(){
char sliced[100];
//scanf("%s",slice);When you're using scanf to read a string into a character array like sliced, you don't need to use the address-of operator &. This is because the name of the array itself acts as a pointer to the first element of the array.

fgets(sliced, 100, stdin);

slice(sliced, 3 , 6 );

}