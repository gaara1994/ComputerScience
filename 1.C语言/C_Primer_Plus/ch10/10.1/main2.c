#include <stdio.h>

int main()
{
    int arr[6] = {0, 0, 0, 0, 0, 212}; // 传统的语法

    // 指定初始化器
    int arr2[6] = {[5] = 99}; // 其余的是0
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", arr2[i]);
    }

    return 0;
}
