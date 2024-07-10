#include <stdio.h>
#include <string.h>

/**
 * 字符串函数
 * strlen() 统计字符串的长度
 */
int main()
{
    char str[6] = "Hello";
    int len = strlen(str);
    printf("字符串长度=%d\n", len);
    return 0;
}