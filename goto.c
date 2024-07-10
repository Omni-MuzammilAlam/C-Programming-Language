#include <stdio.h>

int main() {
    int number;

    for (int i = 0; i < 8; i++) {
        // Moved outside the inner loop

        for (int j = 0; j < 8; j++) {
             printf("%d\n", i);
            printf("Enter 0 to exit\n");
            scanf("%d", &number);

            if (number == 0) {
                goto end; // Exit both loops if 0 is entered
            }
            end:
        }
    }


    return 0;
}
