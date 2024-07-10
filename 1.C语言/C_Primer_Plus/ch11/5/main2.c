#include <stdio.h>
#include <string.h>

/**
 * 字符串函数
 * strcat() 连接两个字符串
 *
 *
 */
int main()
{
    char str1[100] = "Hello";
    char str2[10] = " World!";

    strcat(str1, str2);

    printf("修改后的结果：%s\n", str1);
    return 0;
}