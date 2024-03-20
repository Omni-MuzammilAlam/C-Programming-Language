#include <stdio.h>

int main()
{

    // int grade, marks; cannot put grade in int because int only accest numbers
    char grade;
    int marks;

    printf("Enter you grade\n");
    scanf("%c", &grade);
    while (1)
    {

        switch (grade)
        {
        case 'A':
            printf("Enter your marks\n");
            scanf("%d", &marks);
            if (marks >= 90)
            {
                printf("You are eligible for a scholarship\n");
                break;
            }
            if (marks < 80)
            {
                printf("Enter valid marks\n");
                continue;
            }

            else
            {
                printf("You did a great job excelent\n");
            }

            break;
        case 'B':
            printf("You did good\n");
            break;
        case 'C':
            printf("you did good,but can improve\n");
            break;
        case 'D':
            printf("You can do better try to improve yourself\n");
            break;
        case 'E':
            printf("You need to improve yourself and focus\n");
            break;
        case 'F':
            printf("you have failed\n");
            break;

        default:
        {
            printf("Enter a valid input\n");
            break;
        }
        }
        break;
    }
}
