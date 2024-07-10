#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 */

int main(int argc, char *argv[])
{
    // 保证参数足够
    if (argc < 2)
    {
        printf("Usage: %s <arg1>\n", argv[0]);
        return 1;
    }

    char str[100]; // 存储参数
    char *end;     // 存储第一个非数字字符
    long number;   // 存储转换后得到的数字
    strcpy(str, argv[1]);
    printf("%s\n", str);

    // 转换
    number = strtol(str, &end, 10);
    printf("转换得到的数字是：%ld\n", number);
    printf("第一个非数字字符是：%c\n", *end);
    return 0;
}