#include <stdio.h>

/**
 * 字符串输出
 * fputs()
 */
int main()
{
    FILE *file = fopen("a.txt", "w");
    if (file != NULL)
    {
        fputs("这是要写入的文本", file);
        fclose(file);
    }
    else
    {
        perror("open file failed");
    }

    return 0;
}