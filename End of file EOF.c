#include<stdio.h>
int main(){
FILE *fptr;
fptr = fopen("test1.txt","r");// a is append
char ch;
ch= fgetc(fptr);
while (ch !=EOF)
{
    printf("%c",ch);
    ch = fgetc(fptr);
}
printf("\n");
fclose(fptr);
return 0;
}