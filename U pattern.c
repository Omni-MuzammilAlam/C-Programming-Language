#include<stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 6; j++) {
            if (j == 1 || j == 4 || (i == 9 && (j >= 1 && j <= 6)) || (j==6&&i>=8) ) {
                printf(" *");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
