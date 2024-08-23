#include <stdio.h>

int main()
{
    int n;
    double db;
    char str[100] = "2048:3.14,hello", str2[100];

    sscanf(str, "%d:%lf,%s", &n, &db, str2);

    printf("n = %d, db = %.2f, str2 = %s\n", n, db, str2);

    n = 12;
    db = 3.1415;
    char str3[100] = "good";

    sprintf(str, "%d:%.2f,%s", n, db, str3);
    printf("str2 = %s\n", str);

    return 0;
}