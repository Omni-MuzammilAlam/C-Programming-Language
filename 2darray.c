#include <stdio.h>

int main()
{

    int marks[2][3];
    marks[0][0];
    marks[0][1];
    marks[0][2];

    marks[1][0];
    marks[1][1];
    marks[1][2];
    do
    {
    printf("Muhammad Muzammil Alam\n");
printf("Enter Maths marks:");
scanf("%d",&marks[0][0]);
printf("Enter Physics marks:");
scanf("%d",&marks[0][1]);
printf("Enter Chemistry marks:");
scanf("%d",&marks[0][2]);
    printf("Maths marks:%d\n", marks[0][0]);
    printf("Physics marks:%d\n", marks[0][1]);
    printf("Chemistry marks:%d\n", marks[0][2]);
    int final = marks[0][0] + marks[0][1] + marks[0][2];
    if (final>300 && marks[0][0]>100 && marks[0][1]>100 && marks[0][2]>100)
    {
        printf("Enter valid marks\n");
        continue;

    }
   else{
    
    printf("Total marks obtained:%d\n", final);
    printf("Taha Tariq Ansari\n");
    printf("Enter Maths marks:");
scanf("%d",&marks[1][0]);
printf("Enter Physics marks:");
scanf("%d",&marks[1][1]);
printf("Enter Chemistry marks:");
scanf("%d",&marks[1][2]);
    printf("Maths marks:%d\n", marks[1][0]);
    printf(" Physics marks:%d\n", marks[1][1]);
    printf("Chemistry marks:%d\n", marks[1][2]);
    int final2 = marks[1][0] + marks[1][1] + marks[1][2];
    printf("Total marks obtained:%d\n", final2);
    
    if (final2>300 && marks[1][0]>100 && marks[1][1]>100 && marks[1][2]>100)
    {
         printf("Enter valid marks\n");
      continue;

    }
    else{
    if (final > final2)
    {
        printf("1st is candidate Muhammad Muzammil Alam\n");
        printf("2nd is cadidate Taha Tariq Ansari");
    }
    else if (final == final2)
    {
        printf("Muzammil and Taha are both 1st\n");
    }
    else
        printf("1st is candidate Taha Tariq Ansari\n 2nd is candidate Muhammad Muzammil Alam\n");
 
    }
    char quit;
    printf("do you want to continue(press y for yes or n for no):");
    scanf(" %c",&quit);
    switch (quit)
    {
    case 'y':
    
continue;
    case 'n':
    break;
    default:
    printf("Enter valid response");
        break;
    }
    }
     break;
    }
  
     while (2);
 
}
