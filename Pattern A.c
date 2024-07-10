#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 0; j <= 8; j++) {
            if ((i==5&&(j==0||j==8))|| (i==4&&j==1)||(i==3&&j==2)||(i==2&&j==3)||(i==1&&j==4)||(i==2&&j==5)||(i==3&&j==6)||(i==4&&j==7)||(i==3&&(j>=2&&j<=6)) )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
