#include <stdlib.h>
#include <stdio.h>

int main()
{
    // 1.申请5个int类型的空间
    int *ptr = malloc(5 * sizeof(int));
    if (ptr == NULL)
    {
        printf("ptr内存申请失败\n");
        return -1;
    }

    // 2.填充
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i * 2;
    }

    // 3.打印
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr); // 释放内存，以避免内存泄漏。
    return 0;
}