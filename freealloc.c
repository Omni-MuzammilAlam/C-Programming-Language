#include<stdio.h>
#include<stdlib.h>

int main(){
int *ptr;
int n;
printf("Enter n: ");
scanf("%d",&n);


ptr =(int * ) calloc(n,sizeof(int));
for (int i = 0; i < n; i++)
{
    printf("%d\n",ptr[i]);
}
/*by default every integer will have 0 stored*/

free(ptr);
ptr =(int * ) calloc(2,sizeof(int));

ptr[0]=9;
ptr[1]=23;

for (int i = 0; i < 2; i++)
{
    printf("%d\n",ptr[i]);
}

}// dont know why this program is slow