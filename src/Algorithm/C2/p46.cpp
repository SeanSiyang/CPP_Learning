#include <stdio.h>
#include <string.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    memset(a, 0, sizeof(a));

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    memset(a, -1, sizeof(a));
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int b[5][5] = {};
    memset(b, -1, sizeof(b));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", b[i][j]);
        }
    }
    printf("\n");

    return 0;
}