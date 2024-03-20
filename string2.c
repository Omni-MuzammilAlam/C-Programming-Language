#include<stdio.h>

void printstring(char arr[]){
    for (int i = 0; arr[i] != '\0' ; i++)
    {
        printf("%c",arr[i]);
    }// this way we areprinting the char by character by character 
    // that is why we are  using a loop
    
    printf("\n");
}

int main(){
char firstname[]="Muzammil";
char secondname[]="Alam";

printstring(firstname);
printstring(secondname);
}