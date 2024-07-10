#include <stdio.h>
#include <string.h>

int main()
{
    // 1.创建一个50元素的字符串
    char str[50];

    // 2.把49个元素填充 -
    memset(str, '-', sizeof(str) - 1);

    // 3.保证第50个事 \0
    str[sizeof(str) - 1] = '\0';

    // 4.打印
    printf("%s\n", str);

    return 0;
}