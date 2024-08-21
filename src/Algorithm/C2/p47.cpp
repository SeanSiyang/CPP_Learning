#include <stdio.h>

int main()
{
    char str[15] = {'G', 'o', 'o', 'd', ' ', 's', 't', 'o', 'r', 'y', '!'};
    for (int i = 0; i < 11; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    char str1[15] = "Good Story!";
    for (int i = 0; i < 11; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}