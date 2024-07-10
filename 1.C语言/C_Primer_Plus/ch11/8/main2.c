#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * C要求用数值形式进行数值运算（如，加法和比较）。
 * 但是在屏幕上显示数字则要求字符串形式，因为屏幕显示的是字符。
 * printf()和 sprintf()函 数，通过%d 和其他转换说明，把数字从数值形式转换为字符串形式，
 * scanf()可以把输入字符串转换为数值形式。
 * C 还有一些函数专门用于把字符 串形式转换成数值形式。
 */

/**
 * 假设你编写的程序需要使用数值命令形参，但是命令形参数被读取为字 符串。
 * 因此，要使用数值必须先把字符串转换为数字。
 */

int main(int argc, char *argv[])
{
    // 保证参数足够
    if (argc < 3)
    {
        printf("Usage: %s <arg1> <arg2>\n", argv[0]);
        return 1;
    }

    int times = atoi(argv[1]);
    char str[100];
    strcpy(str, argv[2]);

    printf("次数是：%d\n", times);
    printf("字符串是：%s\n", str);

    for (int i = 0; i < times; i++)
    {
        printf("%s\n", str);
    }

    return 0;
}