#include<stdio.h>
//in an array of numbers, find how many times does a number x occurs


int count(int arr[], int n)
{
int count =0;
for (int i = 0; i < n; i++)
{
if (arr[i]==3)
{
    count++;

}

}
return count;
}
int main (){
int arr[]={1,2,3,4,5,6,7,8,3,4,5,3,3,4,3,4,3,3,32,1,};
printf("3 has occured in the array %d times", count(arr,21));


}