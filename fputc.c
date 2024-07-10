#include<stdio.h>
int main(){
FILE *fptr;
fptr = fopen("test1.txt","a");// a is append
fputc('M',fptr);
fputc('A',fptr);
fputc('N',fptr);
fputc('G',fptr);
fputc('O',fptr);

}