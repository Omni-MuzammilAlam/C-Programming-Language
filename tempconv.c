#include <stdio.h>

/* Fahrenheit to Celsius and Celsius to Fahrenheit converter */

float celc(float celcius) {
    return (celcius * (9.0 / 5.0) + 32);
}

float far(float farhenheit) {
    return ((farhenheit - 32) * 5.0 / 9.0);
}

int main() {
    do {
        char unit;
        printf("press C to go from Fahrenheit to Celsius or F to go from Celsius to Fahrenheit: ");
        scanf(" %c", &unit);

        switch (unit) {
            case 'F':
                float farh;
                printf("Enter value in Celsius: ");
                scanf("%f", &farh);

                printf("%f degree Celsius is %f degree Fahrenheit\n", farh, celc(farh));
                break;
            case 'C':
                float cel;
                printf("Enter value in Fahrenheit: ");
                scanf("%f", &cel);

                printf("%f degree Fahrenheit is %f degree Celsius\n", cel, far(cel));
                break;
            default:
                printf("Enter a valid response..\n");
                break;
        }

        char restart;
        printf("Do you want to restart?\n(press y for yes and n for no): ");
        scanf(" %c", &restart);

        switch (restart) {
            case 'y':
                continue;
            case 'n':
                printf("Exiting the program...\n");
                break;
            default:
                break;
        }

        break;
        /* when adding a continue statement, please go and check the spacing between the %c area
           in scanf functions every time it's called */
    } while (1);

    return 0;
}
