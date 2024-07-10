#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a;
    int b;
    float c;
    float d;
    scanf("%d",&a);
scanf("%d",&b);
scanf("%f",&c);
scanf("%f",&d);
    
    
    printf("%d %d\n",a+b,a-b);
    printf("%.1f %.1f",round((c+d)*10.0)/10.0,round((c-d)*10.0)/10.0);// use round function from math.h to round of the floating / douuble value don't forget the format specififer
    
    
    return 0;
}