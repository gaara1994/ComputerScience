#include <stdio.h>
#include <string.h>

int main()
{
    // 1.以写的方式打开文件
    FILE *fp = fopen("./c.txt", "w");
    if (fp == NULL)
    {
        printf("文件打开失败\n");
        return 1;
    }

    // 2.准备数据
    char str1[] = "Hello";
    char str2[] = " World!";

    // 3.写入数据
    fputs(str1, fp);
    fputs(str2, fp);

    // 4.关闭文件
    fclose(fp);
    return 0;
}