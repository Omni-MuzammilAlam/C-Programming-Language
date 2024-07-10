#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 12; i++) {
        for (j = 1; j <= 12; j++) {
            if (j == 1 || i==12&&j<=5|| j==7&&i==6|| i>=9&&j==6&&j==12 ||  i>=6&&i<=12&&j==6|| j==6&&i==12 || j==8&&i>=6&&i<=12 ||j>8&&j<=12&&i==12 ||j==12 )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
