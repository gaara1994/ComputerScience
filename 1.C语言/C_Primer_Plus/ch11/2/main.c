#include <stdio.h>

/**
 * 字符串输入
 * gets() 从标准输入读取一行字符串。
 * 已经弃用
 *
 *
 *
 */
int main()
{
    char name[20];
    gets("%s", name); // 警告： the `gets' function is dangerous and should not be used.
    printf("%s\n", name);

    return 0;
}