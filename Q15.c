
//find the largest number of the bunch of array using arrays
# include<stdio.h>
int largest(int arr[],int n){
int large=arr[0];
for (int i = 1; i <n; i++)
{
    if (arr[i]>large)/*isme dekho pehle agr arr[i] ziyada hoga karge se to ab large ki vlauye update ho jayegi
    */
    {
       large= arr[i];
    }
 
}

return large;
}

int main(){
int arr[20]={1,24,44,66,2,645,34,534,32,5456,344,3535};
printf("The largest number in the array is: %d", largest(arr,13));




}