#include <stdio.h>

int main()
{
    int a[10] = {3, 1, 4, 5, 2};
    for (int i = 1; i <= 4; i++) // 控制轮数
    {
        for (int j = 0; j < 5 - i; j++) // 每完成一轮，都少一个需要比较的数字
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}