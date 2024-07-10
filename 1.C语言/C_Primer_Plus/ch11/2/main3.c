#include <stdio.h>

/**
 * 字符串输入
 * scanf() 格式化输入函数。
 */
int main()
{
    char name[10];
    scanf("%9s", name); // 使用scanf读取用户输入的字符串，"%9"指定了最多读取9个字符（留一个位置给'\0'）
    printf("%s\n", name);

    return 0;
}