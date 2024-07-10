#include <stdio.h>
#include <string.h>

/**
 * 字符串输入
 * fgets() 从指定的流中读取一行字符串。
 * 三个参数：地址，缓冲区大小，输入流。
 *
 * 注意事项: 如果输入中包含换行符，fgets会将其一起读入。
 * 如果需要去掉换行符，可以通过检查并替换字符串末尾的'\n'实现。
 *
 */
int main()
{
    char name[10];
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
    {
        name[len - 1] = '\0';
    }

    printf("%s\n", name);

    return 0;
}