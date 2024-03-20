#include <stdio.h>
#include <string.h>

/*Write a function to count the occurrence of
vowels in a string.*/

int countvowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char str[600];
    fgets(str, 600, stdin);
    printf("%d", countvowels(str));
}