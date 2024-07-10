#include <stdio.h>

int main()
{
    // 1.以写的方式打开文件
    FILE *fp = fopen("./a.txt", "w");
    if (fp == NULL)
    {
        printf("文件打开失败\n");
        return 1;
    }

    // 写入单个字符
    int res = fputc('d', fp);
    if (res == EOF)
    {
        printf("写入失败\n");
    }

    printf("写入成功\n");
    fclose(fp);
    return 0;
}