#include <stdio.h>
#include <string.h>

/**
 * 字符串函数
 * sprintf()
 * 格式化输出字符串到一个字符数组（缓冲区）中.
 *
 */
int main()
{
    char buffer[100];
    char word[10] = "天气：";
    char weather[10] = "晴天";

    // 使用sprintf函数拼接字符串
    sprintf(buffer, "%s %s", word, weather);

    printf("%s\n", buffer); // 输出最终的字符串

    return 0;
}