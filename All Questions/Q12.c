/*Write a function to count
the number of odd number in an array*/

#include<stdio.h>
int countodd(int arr[],int n){
int count=0;
for (int i = 0; i < n; i++)
{
    if (arr[i] % 2 != 0)
    {
     count++;
    }
   /* return count; if we put this here the loop will only execute once*/
}
 return count;
}
int main(){
int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
printf("%d",countodd(arr,16));
return 0;
}

