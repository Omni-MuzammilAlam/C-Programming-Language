#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
char language[100];
char welcome[100];

scanf("%c", &ch);
    getchar();
fgets(language,100,stdin);
fgets(welcome,100,stdin);

printf("%c",ch);
printf("%s",language);
printf("%s",welcome);
    return 0;
}