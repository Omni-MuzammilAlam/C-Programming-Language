#include<stdio.h>
#include<string.h>
int main(){
char oldstr[]="oldstr";
char newsstr[]="newstr";
strcpy(newsstr,oldstr);
puts(newsstr);/*this is 1st meaning the second will be copied into this*/
}