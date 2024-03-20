# include<stdio.h>
// Create a 2d array, storing the tables of 2&3

void tablestore(int arr[][10], int n, int m, int number)
{// we have to tell the 2nd dimenstion of array
for (int i = 0; i < m; i++)
{
    arr[n][i]= number * (i+1);
// this error is not error this 1st dimensin is pointer and
// 2nd array is treated as an array so we habve to give size to it

}
}

int main (){
int tables[2][10];
tablestore(tables,0,10,2);
tablestore(tables,1,10,3);
for (int i = 0; i < 10; i++)
{
printf("%d\n", tables[0][i]);
}
for (int i = 0; i < 10; i++)
{
printf("%d\n", tables[1][i]);
}



return 0;
}