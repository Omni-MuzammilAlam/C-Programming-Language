#include <stdio.h>
#include <cs50.h>

int main()
{
    string s = get_string("s: ");
    string t = get_string("t: ");

    while (*s != '\0' || *t != '\0')
    {
        if (*s != *t)
        {
            printf("Different\n");
            return 0; // Exit the program since the strings are different
        }
        s++;
        t++;
    }

    printf("Same\n");
}
