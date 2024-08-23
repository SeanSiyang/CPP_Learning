#include <stdio.h>

int main()
{
    // 将字符数组 str 中的内容以 %d 的格式写到 n 中 从左到右
    int n;
    char str[100] = "123";
    sscanf(str, "%d", &n);
    printf("%d\n", n);

    // 将 n 以 %d 的格式写到 str 字符数组中 从右到左
    n = 233;
    // char str1[100];
    sprintf(str, "%d", n);
    printf("%s\n", str);

    return 0;
}