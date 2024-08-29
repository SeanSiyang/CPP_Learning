#include <stdio.h>

int main()
{
    int a[10] = {1, 4, 9, 16, 25, 36, 49};
    int *p = a;
    int *q = &a[5];
    printf("p = %d\n", p);
    printf("q = %d\n", q);

    printf("q - p = %d\n", q - p);

    return 0;
}