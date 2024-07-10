#include<stdio.h>

int main(){
FILE*fptr;
/*Opening a FILE
fptr  = fopen("filename",mode)
 mode tells us to write or read a file*/
/*Closing a File
fclose(fptr);
*/
fptr = fopen("test.txt","r"); // r means read 
if (fptr==NULL)
{
    printf("File doesnt exist\n");
}
else{
char ch[100];
int ff;
fscanf(fptr,"%s",&ch );
fscanf(fptr,"%d",&ff );
printf("hello %s %d",ch,ff);


}
}