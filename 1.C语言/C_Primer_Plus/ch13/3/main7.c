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

    // 2.写入数据
    fprintf(fp, "我的名字是%s\n", "张三");
    fprintf(fp, "我的年龄是%d岁\n", 35);

    // 3.关闭文件
    fclose(fp);
    return 0;
}