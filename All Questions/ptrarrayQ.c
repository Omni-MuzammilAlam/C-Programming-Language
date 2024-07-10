#include<stdio.h>
int main (){

int card[6];

int *ptr=&card[0];
//input
for (int i = 0; i < 6; i++)
{
    printf("%d index",i);
    scanf("%d", ptr+i);
}
//output
for (int i = 0; i < 6; i++)
{
    printf("%d index = %d",i ,*(ptr+i));
}


return 0;


}