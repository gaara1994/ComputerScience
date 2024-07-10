#include <stdio.h>
#include <string.h>

int main()
{
    // 1.以写的方式打开文件
    FILE *fp = fopen("./b.txt", "w");
    if (fp == NULL)
    {
        printf("文件打开失败\n");
        return 1;
    }

    // 写入字符串
    char str[] = "Hello World!";

    for (int i = 0; i < strlen(str); i++)
    {
        int res = fputc(str[i], fp);
        if (res == EOF)
        {
            printf("写入失败\n");
        }
    }

    printf("写入成功\n");
    fclose(fp);
    return 0;
}